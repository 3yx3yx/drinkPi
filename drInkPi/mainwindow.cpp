#include "mainwindow.h"
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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    gpio_init();
    stop_all_pumps();

    // ui->stackedWidget->setCurrentWidget(ui->startPage);
    _widget_scroll_main = new QWidget (this);
    _main_scroll_layout = new QVBoxLayout;
    _widget_scroll_main->setLayout(_main_scroll_layout);
    ui->scrollArea->setWidget(_widget_scroll_main);

    loadDrinkListMenu();

    _widget_scroll_pump_list = new QWidget (this);
    _pump_list_scroll_layout = new QVBoxLayout;
    _widget_scroll_pump_list->setLayout(_pump_list_scroll_layout);
    ui->scrollAreaBeverages->setWidget(_widget_scroll_pump_list);
    QScroller::grabGesture(ui->scrollAreaBeverages, QScroller::LeftMouseButtonGesture);

    loadBeveragesListMenu();

    player = new QMediaPlayer;
    player->setVideoOutput(ui->videoWidget);
    player_2 = new QMediaPlayer;
    movie = new QMovie;
    show_picture = new QLabel;

    connect (mainApp, &QApplication::focusChanged,this,&MainWindow::focus_changed_slot);

    ui->stackedWidget->setCurrentWidget(ui->startPage);
    load_pump_calib_data();

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
    }
    return mainObj;
}

QJsonArray MainWindow::getDrinksJsonArray()
{
    QJsonArray array;

    QJsonObject jsonMainObj = getJsonMainObject();
    if (jsonMainObj.contains("drinksList"))
    {
        array = jsonMainObj["drinksList"].toObject().value("drinks").toArray();
    } else {
        qDebug()<< "json not found drinklist";
    }

    return array;
}

QJsonArray MainWindow::getBeveragesJsonArray()
{
    QJsonArray array;

    QJsonObject jsonMainObj = getJsonMainObject();
    if (jsonMainObj.contains("beveragesList"))
    {
        array = jsonMainObj["beveragesList"].toObject().value("beverages").toArray();
    } else {
        qDebug()<< "json not found beveragesList";
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
}

QVector<Drink> MainWindow::getDrinkList()
{
    QVector<Drink> List;
    QJsonArray array = getDrinksJsonArray();

    for (auto&& a : array) {
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
        if (d.name == name) return d;
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

    } else if (root.contains("drinksList")) {
        QJsonArray array = root["drinksList"].toObject().value("drinks").toArray();
        array.push_back(obj);
        qDebug()<<"saved new array element to json object drinks";
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

    } else if (root.contains("beveragesList")) {
        QJsonArray array = root["beveragesList"].toObject().value("beverages").toArray();
        array.push_back(obj);
        qDebug()<<"saved new array element to json object beverages";
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

     }  else if (root.contains("drinksList")) {
         QJsonArray array = root["drinksList"].toObject().value("drinks").toArray();

         int i = 0;
         for (auto&& a : array) {
             auto obj = a.toObject();

             if (obj.value("name").toString() == name) {
                array.removeAt(i);
             }
             ++i;
         }

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

    } else if (root.contains("beveragesList")) {
        QJsonArray array = root["beveragesList"].toObject().value("beverages").toArray();

        int i = 0;
        for (auto&& a : array) {
            auto obj = a.toObject();

            if (obj.value("name").toString() == name) {
               array.removeAt(i);
            }
            ++i;
        }

    }

    rewriteJsonConfig(root);
}



///
/// \brief MainWindow::clearConfigJson
///clears the config.json and creates 2 objects with arrays
void MainWindow::clearConfigJson()
{
    QJsonObject root;
    QJsonObject drinkListObj;
    QJsonObject beverageListObj;
    QJsonArray drinksArray;
    QJsonArray bevArray;
    drinkListObj.insert("drinks",drinksArray);
    beverageListObj.insert("beverages",bevArray);
    root.insert("drinksList",drinksArray);
    root.insert("beveragesList",bevArray);

    rewriteJsonConfig(root);
}

void MainWindow::loadDrinkListMenu()
{
    qDebug()<<"cleaning drinks list menu";
    for (auto w : qAsConst(drinksWidgetsList)) { // clear
        drinksWidgetsList.removeFirst();
        if (w != nullptr) {
            _main_scroll_layout->removeWidget(w);
            delete w;
        }
    }
    qDebug()<<"cleaning drinks list menu done";

    const QVector<Drink> drinksList = getDrinkList();  // fill
    for (const auto& d : drinksList)
    {
        auto unit = new ListUnitWidget(this);
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
    qDebug()<<"cleaning beverages list menu";
    for (auto w : qAsConst(beverageWidgetsList)){
        beverageWidgetsList.removeFirst();
        if (w != nullptr) {
            _pump_list_scroll_layout->removeWidget(w);
            delete w;
        }
    }
    qDebug()<<"cleaning beverages list menu done";
    const QVector<Beverage> beveragesList = getBeveragesList();
    QStringList list;
    for (const auto&b : beveragesList) list.append(b.name);
    ui->listWidgetBeverages->clear();
    ui->listWidgetBeverages->addItems(list);

    for (int i = 1; i<= PUMP_N; ++i) {
        auto unit = new beverageItemWidget (this);
        beverageWidgetsList.append(unit);
        for (const auto &b : beveragesList) {
            if (b.pump == i) {
                unit->setWidget(i,b.name,list);
            }else {
                unit->setWidget(i,"none",list);
            }
            _pump_list_scroll_layout->addWidget(unit,1,Qt::AlignHCenter);
            ui->scrollAreaBeverages->setWidgetResizable(1);

        }
    }
}

float MainWindow::get_pump_oz_per_sec(int pump)
{
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
        bcm2835_gpio_write((uint8_t)pump, HIGH);
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
    QString objNameNow = QString(now->metaObject()->className());
    QString objNameOld;

    if (old != nullptr)  objNameOld = QString(old->metaObject()->className());

    if (objNameNow == QString("QLineEdit") || objNameNow == QString("QTextEdit")) {
        //qDebug()<<"line edit focused";

        auto msg = QDBusMessage::createMethodCall("org.onboard.Onboard",
                                                  "/org/onboard/Onboard/Keyboard",
                                                  "org.onboard.Onboard.Keyboard",
                                                  "Hide");

        QDBusConnection::sessionBus().send(msg);

        msg = QDBusMessage::createMethodCall( "org.onboard.Onboard",
                                                   "/org/onboard/Onboard/Keyboard",
                                                   "org.onboard.Onboard.Keyboard",
                                                   "Show");

        QDBusConnection::sessionBus().send(msg);


    } else {
        //qDebug()<<"hide keybrd";

        auto msg = QDBusMessage::createMethodCall("org.onboard.Onboard",
                                                  "/org/onboard/Onboard/Keyboard",
                                                  "org.onboard.Onboard.Keyboard",
                                                  "Hide");

        QDBusConnection::sessionBus().send(msg);
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


void MainWindow::on_addBeverageBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->beverageSaveNamePage);
}








// start page slots
void MainWindow::on_settingButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menuPage);
}

void MainWindow::drinkListBtnClicked(QString name)
{
    Drink d = getDrinkByName(name);

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



    if (!_drink_to_prepare.videoPath.isEmpty()){
        player->setMedia(QUrl::fromLocalFile(_drink_to_prepare.videoPath));
        player->play();
        ui->videoWidget->show();
        ui->videoWidget->raise();

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

        player_2->setMedia(QUrl::fromLocalFile(_drink_to_prepare.audioPath));
        player_2->play();
    }

    player->setVolume(ui->volumeSlider->value());
    player_2->setVolume(ui->volumeSlider->value());
    qDebug()<< player->state();
    qDebug()<< player_2->state();

    qint64 duration = 0;
    if (player->duration() > player_2->duration()) {
        duration = player->duration();
        player_2->blockSignals(1);
        player->blockSignals(0);
        disconnect (player_2,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
        connect (player,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
    }
    else{
      duration = player_2->duration();
      player_2->blockSignals(0);
      player->blockSignals(1);
      disconnect (player,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
      connect (player_2,&QMediaPlayer::positionChanged, this, &MainWindow::player_pos_slot);
    }

    ui->timePosSlider->setMaximum(duration);


}
//drink prepare page slots  end

// player slots
void MainWindow::on_volumeSlider_valueChanged(int value)
{
    player->setVolume(value);
    player_2->setVolume(value);

}

void MainWindow::player_pos_slot (qint64 pos) {
    ui->timePosSlider->setValue(pos);
}

void MainWindow::on_stopMediaBtn_clicked()
{
    player->stop();
    player_2->stop();

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

