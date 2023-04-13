#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bcm2835.h"
#include "qboxlayout.h"
#include "beverageitemwidget.h"
#include "listunitwidget.h"
#include "ingredientitemwidget.h"
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>

#define PUMP_N 16

extern QApplication* mainApp;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



struct Beverage {
    QString name;
    int pump;

    Beverage(){
        name = "";
    }
};

struct Ingredient {
    Beverage beverage;
    double portion;
};

struct Drink {
    QString name;
    QString note;

    QVector<Ingredient> ingredients;

    QString videoPath;
    QString picturePath;
    QString audioPath;

    Drink(void) {
        name = "";
    }
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;

    QJsonObject getJsonMainObject(void);
    QJsonArray getDrinksJsonArray(void);
    QJsonArray getBeveragesJsonArray(void);

    QVector<Drink> getDrinkList(void);
    Drink getDrinkByName(QString name);
    QVector<Beverage> getBeveragesList(void);
    Beverage getBeverageByName(QString name);

    void addDrinkToJson (Drink d);
    void addBeverageToJson (Beverage b);

    void editDrinkInJson (QString name, Drink d);
    void editBeverageInJson (QString name, Beverage b);

    void clearConfigJson (void);

    QVBoxLayout* _main_scroll_layout;
    QWidget* _widget_scroll_main;
    QVBoxLayout* _pump_list_scroll_layout;
    QWidget* _widget_scroll_pump_list;

    QVector<ListUnitWidget*> drinksWidgetsList;
    QVector<ingredientItemWidget*> ingredientWidgetsList;
    QVector<beverageItemWidget*> beverageWidgetsList;

private slots:
    void focus_changed_slot (QWidget* old, QWidget* now);


};
#endif // MAINWINDOW_H
