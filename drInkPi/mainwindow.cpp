#include "mainwindow.h"
#include "qerrormessage.h"
#include "qmessagebox.h"
#include "qmovie.h"
#include "qscrollbar.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDir>
#include <QDebug>

#include <QLayout>

#include <QScroller>
#include <QtDBus>
#include <unistd.h>

#define TEST

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    gpio_init();
    stop_all_pumps();

#ifdef TEST
    clearConfigJson(); // for test

    Drink d;
    d.name = "Whisky";
    Beverage b;
    b.name="whisky";
    b.pump=1;
    addBeverageToJson(b);
    d.ingredients.append(Ingredient{b,1.2});
    b.name="cola";
    b.pump=2;
    addBeverageToJson(b);
    d.ingredients.append(Ingredient{b,3.1});
    b.name="gin";
    b.pump=3;
    addBeverageToJson(b);
    d.ingredients.append(Ingredient{b,5.2});
    b.name="soda";
    b.pump=4;
    addBeverageToJson(b);
    d.ingredients.append(Ingredient{b,1.2});
    d.note = "blabla";
    d.videoPath = "/home/pi/Videos/smpa.mp4";

    addDrinkToJson(d);
#endif





    updateDrinkListMenu();
    loadBeveragesListMenu();

    QScroller::grabGesture(ui->scrollAreaBeverages, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->scrollArea, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->listWidgetBeverages, QScroller::LeftMouseButtonGesture);

    player_video = new QMediaPlayer(this);
    player_video->setVideoOutput(ui->videoWidget);
    player_audio = new QMediaPlayer(this);
    movie = new QMovie(this);
    show_picture = new QLabel(this);

    timer = new QTimer(this);
    timer->setSingleShot(true);
    connect (mainApp, &QApplication::focusChanged,this,&MainWindow::focus_changed_slot);

    connect (timer,&QTimer::timeout,this,&MainWindow::timer_slot);

    ui->stackedWidget->setCurrentWidget(ui->startPage);
    load_pump_calib_data();

    ui->volumeSlider->setValue(50);

}

MainWindow::~MainWindow()
{
    delete ui;
}

QJsonObject MainWindow::getJsonMainObject()
{
    QJsonObject mainObj;
    QFile file;
    file.setFileName(json_config_path);
    QString jsonData;
    if (file.open(QIODevice::ReadOnly)) {

        jsonData= file.readAll();
        file.close();
        QJsonParseError jsonError;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData.toUtf8(), &jsonError);

        if (jsonError.error != QJsonParseError::NoError){
            qDebug() << "json parsing error";
        }
        mainObj = jsonDoc.object();
    } else {
        clearConfigJson();
    }
    return mainObj;
}

QJsonArray MainWindow::getDrinksJsonArray()
{
    QJsonArray array;

    QJsonObject jsonMainObj = getJsonMainObject();
    if (jsonMainObj.contains("drinks"))
    {
        array = jsonMainObj["drinks"].toArray();
    } else {
        qDebug()<< "json not found drinklist";
        clearConfigJson();
    }

    return array;
}

QJsonArray MainWindow::getBeveragesJsonArray()
{
    QJsonArray array;

    QJsonObject jsonMainObj = getJsonMainObject();
    if (jsonMainObj.contains("beverages"))
    {
        array = jsonMainObj["beverages"].toArray();
    } else {
        qDebug()<< "json not found beveragesList";
        clearConfigJson();
    }

    return array;
}

void MainWindow::rewriteJsonConfig(QJsonObject root)
{
    QJsonDocument newDoc(root);
    QByteArray finalData = newDoc.toJson();
    QFile file;
    file.setFileName(json_config_path);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        file.write(finalData);
        qDebug()<<" json file is updated";
    }
    file.close();
}

QVector<Drink> MainWindow::getDrinkList()
{
    QVector<Drink> List;
    QJsonArray arrayDrinks = getDrinksJsonArray();
    QJsonArray arrayBeverages = getBeveragesJsonArray();

    for (auto&& a : arrayDrinks) {
        auto obj = a.toObject();
        Drink d;
        d.name = obj["name"].toString("");
        d.note = obj["note"].toString("");
        d.audioPath = obj["audio"].toString("");
        d.videoPath = obj["video"].toString("");
        d.picturePath = obj["picture"].toString("");

        QJsonArray jArr = obj["ingredients"].toArray();
        // read the ingredients list from json and write it to ingredients qvector list
        for (auto jArrRef: jArr){
            auto ingObj = jArrRef.toObject();
            Ingredient ing;

            ing.beverage.name = ingObj.value("beverage").toString();

            bool beverageFound = false;
            for (auto &&bev : arrayBeverages) {
                auto bevObj = bev.toObject();
                if (bevObj.value("name") == ing.beverage.name) {
                    ing.beverage.pump = bevObj.value("pump").toInt();
                    beverageFound = true;
                    break;
                }
            }

            if (!beverageFound) {
                qDebug()<<"cannot find beverage "<<ing.beverage.name<<"in drink"<<d.name;
            }

            ing.portion = ingObj.value("portion").toDouble();

            d.ingredients.append(ing);
        }

        List.append(d);
    }

    return List;
}

Drink MainWindow::getDrinkByName(QString name)
{
    QVector<Drink> list = getDrinkList();

    for (const auto& d : list){
        if (d.name == name)
        {
          for (const auto& ing : d.ingredients) {
              QString beverageToSearch = ing.beverage.name;
              if (getBeverageByName(beverageToSearch).name.isEmpty()) {
                  QMessageBox mb;
                  mb.setFont(QFont("Times", 23, QFont::Bold));
                  mb.setInformativeText("cannot find beverage "+beverageToSearch);
                  mb.setStandardButtons(QMessageBox::Ok);
                  mb.exec();
                  return Drink();
              }
          }
          return d;
        }
    }

    return Drink();
}

QVector<Beverage> MainWindow::getBeveragesList()
{
    QVector<Beverage> List;
    QJsonArray array = getBeveragesJsonArray();

    for (auto&& a : array) {
        auto obj = a.toObject();

        Beverage b;
        b.name = obj.value("name").toString();
        b.pump = obj.value("pump").toInt();


        List.append(b);
    }

    return List;
}

Beverage MainWindow::getBeverageByName(QString name)
{
    QVector<Beverage> list = getBeveragesList();

    for (const auto &b : list) {
        if (b.name == name) return b;
    }

    return Beverage();
}



void MainWindow::addDrinkToJson(Drink d)
{
    QJsonObject obj;

    obj.insert("name", QJsonValue(d.name));
    obj.insert("note",QJsonValue(d.note));
    obj.insert("video",QJsonValue(d.videoPath));
    obj.insert("audio",QJsonValue(d.audioPath));
    obj.insert("picture",QJsonValue(d.picturePath));

    QJsonArray arr;

    for(const auto &ing : qAsConst(d.ingredients)) {
        QJsonObject ingObj;
        ingObj.insert("beverage",QJsonValue(ing.beverage.name));
        ingObj.insert("portion",QJsonValue(ing.portion));

        arr.push_back(ingObj);
    }

    obj.insert("ingredients", arr);



    QJsonDocument doc = QJsonDocument(getJsonMainObject());

    QJsonObject root = doc.object();
    if (root.isEmpty()) {

        qDebug()<<"json error empty root";
        clearConfigJson();

    } else if (root.contains("drinks")) {
        QJsonArray array = root["drinks"].toArray();
        array.push_back(obj);
        root.remove("drinks");
        root.insert("drinks", array);
        qDebug()<<"saved new array element to json object drinks";
    } else {
        qDebug()<<"error json drinks arr key not found";
        clearConfigJson();
    }

    rewriteJsonConfig(root);

}

void MainWindow::addBeverageToJson(Beverage b)
{
    QJsonObject obj;
    obj.insert("name",b.name);
    obj.insert("pump",b.pump);

    QJsonDocument doc = QJsonDocument(getJsonMainObject());

    QJsonObject root = doc.object();
    if (root.isEmpty()) {

        qDebug()<<"json error empty root";
        clearConfigJson();

    } else if (root.contains("beverages")) {
        QJsonArray array = root["beverages"].toArray();
        array.push_back(obj);
        root.remove("beverages");
        root.insert("beverages",array);
        qDebug()<<"saved new array element to json object beverages";
    } else {
        qDebug()<<"error json beverages arr key not found";
        clearConfigJson();
    }

    rewriteJsonConfig(root);
}

void MainWindow::deleteDrinkFromJson(QString name)
{
     QJsonDocument doc = QJsonDocument(getJsonMainObject());
     QJsonObject root = doc.object();
     if (root.isEmpty()) {

         qDebug()<<"json error empty root";
         clearConfigJson();

     }  else if (root.contains("drinks")) {
         QJsonArray array = root["drinks"].toArray();

         int i = 0;
         for (auto&& a : array) {
             auto obj = a.toObject();

             if (obj.value("name").toString() == name) {
                array.removeAt(i);
                break;
             }
             ++i;
         }
         root.remove("drinks");
         root.insert("drinks", array);

     } else {
         qDebug()<<"error json drinks arr key not found";
         clearConfigJson();
     }


    rewriteJsonConfig(root);
}

void MainWindow::deleteBeverageFromJson(QString name)
{
    QJsonDocument doc = QJsonDocument(getJsonMainObject());

    QJsonObject root = doc.object();
    if (root.isEmpty()) {

        qDebug()<<"json error empty root";
        clearConfigJson();

    } else if (root.contains("beverages")) {
        QJsonArray array = root["beverages"].toArray();

        int i = 0;
        for (auto&& a : array) {
            auto obj = a.toObject();

            if (obj.value("name").toString() == name) {
               array.removeAt(i);
            }
            ++i;
        }
        root.remove("beverages");
        root.insert("beverages", array);

    } else {
        qDebug()<<"error json beverages arr key not found";
        clearConfigJson();
    }

    rewriteJsonConfig(root);
}



///
/// \brief MainWindow::clearConfigJson
///clears the config.json and creates 2 objects with arrays
void MainWindow::clearConfigJson()
{
    QJsonObject root;
    QJsonArray drinksArray;
    QJsonArray bevArray;

    root.insert("drinks",drinksArray);
    root.insert("beverages",bevArray);

    qDebug() << "json file cleared new objects created ";

    rewriteJsonConfig(root);
}

void MainWindow::updateDrinkListMenu()
{
    delete _widget_scroll_main;
    delete _main_scroll_layout;

    _widget_scroll_main = new QWidget (this);
    _main_scroll_layout = new QVBoxLayout;
    _widget_scroll_main->setLayout(_main_scroll_layout);
    ui->scrollArea->setWidget(_widget_scroll_main);
    drinksWidgetsList.clear();


    const QVector<Drink> drinksList = getDrinkList();  // fill
    for (const auto& d : drinksList)
    {
        auto unit = new ListUnitWidget(_widget_scroll_main);
        drinksWidgetsList.append(unit);
        unit->setItemString(d.name);
        qDebug()<<d.name;
        _main_scroll_layout->addWidget(unit,1,Qt::AlignHCenter);
        ui->scrollArea->setWidgetResizable(1);

        connect (unit,&ListUnitWidget::pressed, this, &MainWindow::drinkListBtnClicked );

    }
}





void MainWindow::loadBeveragesListMenu()
{

    _widget_scroll_pump_list = new QWidget (this);
    _pump_list_scroll_layout = new QVBoxLayout;
    _widget_scroll_pump_list->setLayout(_pump_list_scroll_layout);
    ui->scrollAreaBeverages->setWidget(_widget_scroll_pump_list);

    const QVector<Beverage> beveragesList = getBeveragesList();
    QStringList list;
    for (const auto&b : beveragesList) list.append(b.name);
    ui->listWidgetBeverages->clear();
    ui->listWidgetBeverages->addItems(list);

    beverageListSelectedPrevList.clear();

    for (int i = 1; i<= PUMP_N; ++i) {
        auto unit = new beverageItemWidget (_widget_scroll_pump_list);
        beverageWidgetsList.append(unit);
        bool pump_found = 0;
        for (const auto &b : beveragesList) {
            if (b.pump == i) {
                unit->setWidget(i,b.name,list);
                pump_found = 1;
                beverageListSelectedPrevList.append(b.name);
                break;
            }else {
                pump_found = 0;
            }
        }

        if (!pump_found){
             unit->setWidget(i,"none",list);
             beverageListSelectedPrevList.append("none");
        }


        _pump_list_scroll_layout->addWidget(unit,1,Qt::AlignHCenter);
        ui->scrollAreaBeverages->setWidgetResizable(1);

        connect (unit,&beverageItemWidget::selectionChanged,this,&MainWindow::beverageItemSelectionChangedSlot);
    }
}

float MainWindow::get_pump_oz_per_sec(int pump)
{
    qDebug() << pump <<"pump" << _pump_oz_per_sec[pump] <<"oz per sec";
    return _pump_oz_per_sec[pump];
}

void MainWindow::load_pump_calib_data()
{
    QFile file;
    file.setFileName(pump_config_path);
    QString line;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        for (int i = 0; i < PUMP_N; ++i) {

            line = file.readLine(10);
            line.remove("\n");
            qDebug()<<line;
            bool ok = 0;
            float oz = line.toFloat(&ok);
            if (ok) {
                _pump_oz_per_sec[i] = oz;
            }
            else {
                qDebug()<< "error reading pump config";
            }
        }
    } else {
        upd_pump_calib_data();
    }

    file.close();
}

void MainWindow::upd_pump_calib_data()
{
    QByteArray s;
    for (int i = 0; i < PUMP_N; ++i) {
        s.append(QString::number(_pump_oz_per_sec[i]).toLatin1());
        s.append('\n');
    }
    QFile file;
    file.setFileName(pump_config_path);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        file.write(s);
        qDebug()<<" pump conf is updated";
    } else {
        qDebug()<<"cannot open file";

    }
    file.close();
}

void MainWindow::gpio_init()
{
    if (!bcm2835_init()) {
        qDebug() << "BCM init error !";
        return;
    }

    for (int i = 0; i<PUMP_N; ++i) {
        bcm2835_gpio_fsel(_pump_gpio[i], BCM2835_GPIO_FSEL_OUTP);
    }
}

void MainWindow::start_pump(int pump)
{
    if (pump >= 0 && pump < PUMP_N) {
        bcm2835_gpio_write(_pump_gpio[pump], HIGH);
    }
}

void MainWindow::stop_pump(int pump)
{
    if (pump >= 0 && pump < PUMP_N) {
        bcm2835_gpio_write(_pump_gpio[pump], LOW);
    }
}

void MainWindow::stop_all_pumps()
{
    for (int i = 0; i<PUMP_N; ++i) {
        bcm2835_gpio_write(_pump_gpio[i], LOW);
    }
}




void MainWindow::focus_changed_slot(QWidget *old, QWidget *now)
{
    QString objNameNow;
    QString objNameOld;

    if (now != nullptr) objNameNow =  QString(now->metaObject()->className());
    if (old != nullptr)  objNameOld = QString(old->metaObject()->className());

    if (objNameNow == QString("QLineEdit") || objNameNow == QString("QTextEdit")) {

        auto msg = QDBusMessage::createMethodCall( "org.onboard.Onboard",
                                                   "/org/onboard/Onboard/Keyboard",
                                                   "org.onboard.Onboard.Keyboard",
                                                   "Show");

        QDBusConnection::sessionBus().send(msg);

        this->showMaximized();


    } else {

        auto msg = QDBusMessage::createMethodCall("org.onboard.Onboard",
                                                  "/org/onboard/Onboard/Keyboard",
                                                  "org.onboard.Onboard.Keyboard",
                                                  "Hide");

        QDBusConnection::sessionBus().send(msg);

        this->showFullScreen();
    }


}




void MainWindow::on_addIngredientBtn_clicked()
{
   // ui->stackedWidget->setCurrentWidget(ui->beverageAssignPage);
}


void MainWindow::on_backSaveBeverage_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->beverageAssignPage);
}









// start page slots
void MainWindow::on_settingButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menuPage);
}

void MainWindow::drinkListBtnClicked(QString name)
{
    Drink d = getDrinkByName(name);

    if (d.name.isEmpty()) {
        qDebug()<<"error in drink data";
        return;
    }

    ui->stackedWidget->setCurrentWidget(ui->drinkSelectedPage);

    QStringList ingList;
    for (auto&& ing : d.ingredients){
        ingList.append(ing.beverage.name + " - " + QString::number(ing.portion) + "oz");
    }
    ui->listWidgetIngredients->clear();
    ui->listWidgetIngredients->addItems(ingList);
    ui->listWidgetNotes->clear();
    ui->listWidgetNotes->addItem(d.note);

    _drink_to_prepare = d; // this drink will be prepared if prep. button clicked
}

//end start page slots



//menu page slots
void MainWindow::on_menuPage_backBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->startPage);
}
void MainWindow::on_newRecipeButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->createRecipePage);
}
void MainWindow::on_AssignPumpButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->beverageAssignPage);
}
void MainWindow::on_cleanPumpButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pumpClearPage);
}
void MainWindow::on_calibratePumpButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->calibrationPage);
}
//end menu page slots



//drink prepare page slots
void MainWindow::on_editRecipeBtn_clicked()
{

}
void MainWindow::on_deleteDrinkButton_clicked()
{
    QMessageBox mb;
    mb.setInformativeText("Delete drink?");
    mb.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    int ret = mb.exec();

    switch (ret) {
    case QMessageBox::No :
        return;
        break;
    case QMessageBox::Yes:
        deleteDrinkFromJson(_drink_to_prepare.name);
        break;
    default:
        break;
    }


}
void MainWindow::on_drinkPrepare_backBtn_clicked()
{
    //loadDrinkListMenu();
    ui->stackedWidget->setCurrentWidget(ui->startPage);
}
void MainWindow::on_drinkPrepare_prepareBtn_clicked()
{
    // START
    //PREPARING
    ui->stackedWidget->setCurrentWidget(ui->showPage);

    bool hasVideo = false, hasAudio = false;

    if (!_drink_to_prepare.videoPath.isEmpty()){
        player_video->setMedia(QUrl::fromLocalFile(_drink_to_prepare.videoPath));
        hasVideo = true;

    } else if (!_drink_to_prepare.picturePath.isEmpty()) {
        QString path  = _drink_to_prepare.picturePath;
            show_picture->setGeometry(ui->videoWidget->geometry());
            show_picture->show();
            show_picture->raise();
        if (path.endsWith(".gif")){
            show_picture->setMovie(movie);
            movie->start();
        } else {
            QPixmap pix(path);
            show_picture->setPixmap(pix);
        }
    }

    if (!_drink_to_prepare.audioPath.isEmpty()){
        hasAudio = true;
        player_audio->setMedia(QUrl::fromLocalFile(_drink_to_prepare.audioPath));
    }

    player_video->setVolume(ui->volumeSlider->value());
    player_audio->setVolume(ui->volumeSlider->value());

    if (hasVideo) {

        disconnect (player_audio,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
        connect (player_video,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
        disconnect (player_audio,&QMediaPlayer::durationChanged, this, &MainWindow::player_duration_changed_slot);
        connect (player_video,&QMediaPlayer::durationChanged, this, &MainWindow::player_duration_changed_slot);

    }
    else if (hasAudio){

      disconnect (player_video,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
      connect (player_audio,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
      disconnect (player_video,&QMediaPlayer::durationChanged, this, &MainWindow::player_duration_changed_slot);
      connect (player_audio,&QMediaPlayer::durationChanged, this, &MainWindow::player_duration_changed_slot);

    }

    if (hasAudio) player_audio->play();
    if (hasVideo) player_video->play();

    Drink d = _drink_to_prepare;

    qDebug() << "start preparing drink" << d.name;

    if (d.ingredients.isEmpty()){
        qDebug()<<"empty ingredients";
        return;
    }

    int i,j,min_idx;
    for (i = 0; i<d.ingredients.length()-1; ++i) {
        min_idx = i;
        for (j = i+1; j < d.ingredients.length(); ++j) {

            if (d.ingredients.at(j).portion <  d.ingredients.at(min_idx).portion) {
                min_idx = j;
            }
        }

        d.ingredients.swapItemsAt(min_idx,i);
    }

    for (auto&& ing : d.ingredients) {

        qDebug()<<"beverage"<<ing.beverage.name<<"portion"<<ing.portion <<"pump"<<ing.beverage.pump;
        if (ing.beverage.pump < 1 || ing.beverage.pump > PUMP_N){
            qDebug()<<"no pump specified";
            QMessageBox mb;
            mb.setFont(QFont("Times", 23, QFont::Bold));
            mb.setInformativeText("no pump specified: "+ing.beverage.name);
            mb.setStandardButtons(QMessageBox::Ok);
            mb.exec();
            ui->stackedWidget->setCurrentWidget(ui->startPage);
            player_audio->stop();
            player_video->stop();
            return;
        }

    }
    pumpStopEvents.clear();


    float first_pump_off_t_sec = d.ingredients.first().portion / get_pump_oz_per_sec(d.ingredients.first().beverage.pump-1);
    int prev_pump = d.ingredients.first().beverage.pump;
    float prev_t_sec = first_pump_off_t_sec;

    d.ingredients.removeFirst();

    if (!d.ingredients.isEmpty()) {

        for (auto && ing : d.ingredients) {
            PumpStopEvent e;
            float t_sec = ing.portion / get_pump_oz_per_sec(ing.beverage.pump-1);
            int interval_ms = (t_sec-prev_t_sec) * 1000;
            e.next_stop_time = interval_ms;
            e.pump = prev_pump;
            pumpStopEvents.append(e);
            prev_t_sec = t_sec;
            prev_pump = ing.beverage.pump;
        }

    }

    PumpStopEvent eLast;
    eLast.next_stop_time = 0;
    eLast.pump = prev_pump;
    pumpStopEvents.append(eLast);

    for (auto && e : pumpStopEvents) {

        if (e.pump > 0 && e.pump <= PUMP_N) {
            e.pump-=1;
            start_pump(e.pump);
            qDebug()<<"pump started"<<e.pump<<"next stop time"<<e.next_stop_time;
        }
    }
    timer->setSingleShot(1);
    timer->start(first_pump_off_t_sec*1000);
    qDebug()<<"wait "<<first_pump_off_t_sec*1000<<"ms";

}
//drink prepare page slots  end


void MainWindow::timer_slot()
{
    if (pumpStopEvents.isEmpty()) {
        stop_all_pumps();
        qDebug()<<"preparing finished";
        return;
    }

    PumpStopEvent e = pumpStopEvents.first();
    stop_pump(e.pump);
    qDebug()<<"pump stopped "<<e.pump;
    timer->start(e.next_stop_time);
    qDebug()<<"wait "<<e.next_stop_time<<"ms";
    pumpStopEvents.removeFirst();
}


// player slots
void MainWindow::on_volumeSlider_valueChanged(int value)
{
    player_video->setVolume(value);
    player_audio->setVolume(value);

}

void MainWindow::player_duration_changed_slot (qint64 dur){
    ui->timePosSlider->setMaximum(dur);
}

void MainWindow::player_pos_slot (qint64 pos) {
    ui->timePosSlider->setValue(pos);
}

void MainWindow::on_stopMediaBtn_clicked()
{
    player_video->stop();
    player_audio->stop();

    ui->stackedWidget->setCurrentWidget(ui->startPage);
}

//end player slots




//pump calibration page slots
void MainWindow::on_backBtnCalibrate_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menuPage);
}

void MainWindow::on_calibrationStart_clicked()
{
    int pump = ui->comboBoxCalibrate->currentIndex();
    start_pump(pump);
    sleep(1);
    stop_all_pumps();
}

void MainWindow::on_calibrationSave_clicked()
{
    QString s = ui->lineEditCalibrate->text();
    bool ok;
    s.replace(",",".");
    float oz = s.toFloat(&ok);
    qDebug()<<"upd calib pump"<<s;

    if (ok) {
        int pump = ui->comboBoxCalibrate->currentIndex();
        _pump_oz_per_sec[pump] = oz;

        upd_pump_calib_data(); // save changes to file
    }
}
//pump calibration page slots end


//pump clean page slots
void MainWindow::on_backBtnCleanPage_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menuPage);
}

void MainWindow::on_selectAllPumps_clicked()
{
    ui->pumpSelBtn->setChecked(1);
    ui->pumpSelBtn_2->setChecked(1);
    ui->pumpSelBtn_3->setChecked(1);
    ui->pumpSelBtn_4->setChecked(1);
    ui->pumpSelBtn_5->setChecked(1);
    ui->pumpSelBtn_6->setChecked(1);
    ui->pumpSelBtn_7->setChecked(1);
    ui->pumpSelBtn_8->setChecked(1);
    ui->pumpSelBtn_9->setChecked(1);
    ui->pumpSelBtn_10->setChecked(1);
    ui->pumpSelBtn_11->setChecked(1);
    ui->pumpSelBtn_12->setChecked(1);
    ui->pumpSelBtn_13->setChecked(1);
    ui->pumpSelBtn_14->setChecked(1);
    ui->pumpSelBtn_15->setChecked(1);
    ui->pumpSelBtn_16->setChecked(1);
}

void MainWindow::on_startClean_pressed()
{
    if (ui->pumpSelBtn->isChecked()) start_pump(0);
    if (ui->pumpSelBtn_2->isChecked()) start_pump(1);
    if (ui->pumpSelBtn_3->isChecked()) start_pump(2);
    if (ui->pumpSelBtn_4->isChecked()) start_pump(3);

    if (ui->pumpSelBtn_5->isChecked()) start_pump(4);
    if (ui->pumpSelBtn_6->isChecked()) start_pump(5);
    if (ui->pumpSelBtn_7->isChecked()) start_pump(6);
    if (ui->pumpSelBtn_8->isChecked()) start_pump(7);

    if (ui->pumpSelBtn_9->isChecked()) start_pump(8);
    if (ui->pumpSelBtn_10->isChecked()) start_pump(9);
    if (ui->pumpSelBtn_11->isChecked()) start_pump(10);
    if (ui->pumpSelBtn_12->isChecked()) start_pump(11);

    if (ui->pumpSelBtn_13->isChecked()) start_pump(12);
    if (ui->pumpSelBtn_14->isChecked()) start_pump(13);
    if (ui->pumpSelBtn_15->isChecked()) start_pump(14);
    if (ui->pumpSelBtn_16->isChecked()) start_pump(15);
}

void MainWindow::on_startClean_released()
{
    stop_all_pumps();
}
//pump clean page slots  end



//beverage-to-pump assign page slots
void MainWindow::on_backButtonBeverages_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menuPage);
}

void MainWindow::on_addBeverageBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->beverageSaveNamePage);
    beverageList_editButtonPressed = false;
}

void MainWindow::on_editBeverageNameBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->beverageSaveNamePage);
    QString s = ui->listWidgetBeverages->currentItem()->text();
    ui->beveragelineEdit->setText(s);

    beverageList_editButtonPressed = true;
}


void MainWindow::on_removeBeverageBtn_clicked()
{
    QString name = ui->listWidgetBeverages->currentItem()->text();

    deleteBeverageFromJson(name);
    updateBeveragesListMenu();
}

void MainWindow::updateBeveragesListMenu (void){

    QVector<Beverage> beveragesList = getBeveragesList();
    QStringList list;
    for (const auto&b : beveragesList) list.append(b.name);

    ui->listWidgetBeverages->clear();
    ui->listWidgetBeverages->addItems(list);

    beverageListSelectedPrevList.clear();

    for (int i=1; i<=PUMP_N; ++i) {
        auto unit = beverageWidgetsList.at(i-1);
        bool pump_found = false;
        unit->blockSignals(true);
        for (const auto &b : beveragesList) {
            if (b.pump == i) {
                unit->setWidget(i,b.name,list);
                pump_found = 1;
                beverageListSelectedPrevList.append(b.name);
                break;
            }else {
                pump_found = 0;
            }
        }
        if (!pump_found){
            unit->setWidget(i,"none",list);
            beverageListSelectedPrevList.append("none");
        }

         unit->blockSignals(false);

    }

}

void MainWindow::on_saveBeverage_clicked()
{
    QString name = ui->beveragelineEdit->text();
    QVector<Beverage> beveragesList = getBeveragesList();
    if (name.length() < 2) {
        QMessageBox mb;
        mb.setInformativeText("Name is too short");
        mb.setStandardButtons(QMessageBox::Ok);
        mb.exec();
        return;
    }
    for (const auto &b : beveragesList) {
        if (b.name == name) {
            QMessageBox mb;
            mb.setInformativeText("Name is already taken");
            mb.setStandardButtons(QMessageBox::Ok);
            mb.exec();
            return;
        }
    }

    if ( beverageList_editButtonPressed) {
        QString prev_name = ui->listWidgetBeverages->currentItem()->text();
        Beverage b = getBeverageByName(prev_name);
        b.name = name;
        deleteBeverageFromJson(prev_name);
        addBeverageToJson(b);
    } else {
        Beverage b;
        b.name = ui->beveragelineEdit->text();
        b.pump=0;
        addBeverageToJson(b);
    }
    updateBeveragesListMenu();

    ui->stackedWidget->setCurrentWidget(ui->beverageAssignPage);
}

void MainWindow::beverageItemSelectionChangedSlot(QString selection_text, beverageItemWidget *obj)
{

    QStringList prevList = beverageListSelectedPrevList;

    QString prevSelected = prevList.at(obj->getNumber()-1);

    if (prevSelected != "none") {
        qDebug()<<"prev selected"<<prevSelected<<"set pump to 0";
        Beverage b  = getBeverageByName(prevSelected);
        b.pump=0;
        deleteBeverageFromJson(b.name);
        addBeverageToJson(b);
    }


    Beverage b  = getBeverageByName(selection_text);
    qDebug()<<"change pump"<<b.name<<"from"<<b.pump<<"to"<<obj->getNumber();
    b.pump = obj->getNumber();
    deleteBeverageFromJson(b.name);
    addBeverageToJson(b);
    updateBeveragesListMenu();

}

