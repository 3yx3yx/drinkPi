#include "mainwindow.h"
#include "qscrollbar.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDir>
#include <QDebug>

#include <QLayout>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QScroller>
#include <QtDBus>
#include <unistd.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ui->stackedWidget->setCurrentWidget(ui->startPage);
    _widget_scroll_main = new QWidget (this);
    _main_scroll_layout = new QVBoxLayout;
    _widget_scroll_main->setLayout(_main_scroll_layout);
    ui->scrollArea->setWidget(_widget_scroll_main);

    const QVector<Drink> drinksList = getDrinkList();
    for (const auto& d : drinksList)
    {
        auto unit = new ListUnitWidget(this);
        drinksWidgetsList.append(unit);
        unit->setItemString(d.name);
        _main_scroll_layout->addWidget(unit,1,Qt::AlignHCenter);
        ui->scrollArea->setWidgetResizable(1);
    }

    _widget_scroll_pump_list = new QWidget (this);
    _pump_list_scroll_layout = new QVBoxLayout;
    _widget_scroll_pump_list->setLayout(_pump_list_scroll_layout);
    ui->scrollAreaBeverages->setWidget(_widget_scroll_pump_list);
    QScroller::grabGesture(ui->scrollAreaBeverages, QScroller::LeftMouseButtonGesture);

    const QVector<Beverage> beveragesList = getBeveragesList();

    QStringList list;
    for (const auto&b : beveragesList) list.append(b.name);
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


    QMediaPlayer* player = new QMediaPlayer;
    player->setVideoOutput(ui->videoWidget);
    //    player->setMedia(QUrl::fromLocalFile("/home/pi/Videos/smpa.mp4"));
    //    player->play();
    //    player->setVolume(100);
    //    qDebug()<< player->state();

    //connect (mainApp, SIGNAL(focusChanged(QWidget*,QWidget*)),this,SLOT(focus_changed_slot(QWidget*,QWidget*)));

    connect (mainApp, &QApplication::focusChanged,this,&MainWindow::focus_changed_slot);
}

MainWindow::~MainWindow()
{
    delete ui;
}



QJsonObject MainWindow::getJsonMainObject()
{
    QJsonObject mainObj;
    QFile file;
    file.setFileName(":/text/assets/config.json");
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

    QJsonDocument newDoc(root);
    QByteArray finalData = newDoc.toJson();
    QFile file;
    file.setFileName(":/text/assets/config.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        file.write(finalData);
        qDebug()<<" json file is updated";
    }

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

    QJsonDocument newDoc(root);
    QByteArray finalData = newDoc.toJson();
    QFile file;
    file.setFileName(":/text/assets/config.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        file.write(finalData);
        qDebug()<<" json file is updated";
    }
}

void MainWindow::editDrinkInJson(QString name, Drink d)
{

}

void MainWindow::editBeverageInJson(QString name, Beverage b)
{

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

    QJsonDocument newDoc(root);
    QByteArray finalData = newDoc.toJson();
    QFile file;
    file.setFileName(":/text/assets/config.json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        file.write(finalData);
        qDebug()<<" json file is cleared";
    }
}

void MainWindow::focus_changed_slot(QWidget *old, QWidget *now)
{
    QString objNameNow = QString(now->metaObject()->className());
    QString objNameOld;

    if (old != nullptr)  objNameOld = QString(old->metaObject()->className());

    if (objNameNow == QString("QLineEdit") || objNameNow == QString("QTextEdit")) {
        qDebug()<<"line edit focused";

        auto msg = QDBusMessage::createMethodCall( "org.onboard.Onboard",
                                                   "/org/onboard/Onboard/Keyboard",
                                                   "org.onboard.Onboard.Keyboard",
                                                   "Show");

        QDBusConnection::sessionBus().send(msg);


    } else if (objNameOld == QString("QLineEdit") || objNameOld == QString("QTextEdit")  || objNameOld.isEmpty()) {
        qDebug()<<"hide keybrd";

        auto msg = QDBusMessage::createMethodCall("org.onboard.Onboard",
                                                  "/org/onboard/Onboard/Keyboard",
                                                  "org.onboard.Onboard.Keyboard",
                                                  "Hide");

        QDBusConnection::sessionBus().send(msg);
    }


}





