#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bcm2835.h"
#include "qboxlayout.h"
#include "beverageitemwidget.h"
#include "listunitwidget.h"
#include "ingredientitemwidget.h"
#include "qlabel.h"
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>

#include <QMediaPlayer>
#include <QVideoWidget>

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

struct PumpStopEvent {
    int next_stop_time;
    int pump;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QMediaPlayer* player_video;
    QMediaPlayer* player_audio;
    QMovie* movie;
    QLabel* show_picture;





    const QString json_config_path = "/home/pi/drInkPi/config.json";
    const QString pump_config_path = "/home/pi/drInkPi/calib.txt";

    QJsonObject getJsonMainObject(void);
    QJsonArray getDrinksJsonArray(void);
    QJsonArray getBeveragesJsonArray(void);
    void rewriteJsonConfig (QJsonObject root);

    QVector<Drink> getDrinkList(void);
    Drink getDrinkByName(QString name);
    QVector<Beverage> getBeveragesList(void);
    Beverage getBeverageByName(QString name);

    void addDrinkToJson (Drink d);
    void addBeverageToJson (Beverage b);

    void deleteDrinkFromJson (QString name);
    void deleteBeverageFromJson (QString name);

    void clearConfigJson (void);

    QVBoxLayout* _main_scroll_layout = nullptr;
    QWidget* _widget_scroll_main = nullptr;
    QVBoxLayout* _pump_list_scroll_layout = nullptr;
    QWidget* _widget_scroll_pump_list = nullptr;

    QVector<ListUnitWidget*> drinksWidgetsList;
    QVector<ingredientItemWidget*> ingredientWidgetsList;
    QVector<beverageItemWidget*> beverageWidgetsList;
    QStringList beverageListSelectedPrevList;

    void updateDrinkListMenu (void);
    void loadBeveragesListMenu (void);
    void updateBeveragesListMenu (void);

    Drink _drink_to_prepare;

    float _pump_oz_per_sec[PUMP_N] = {0.0f};
    float get_pump_oz_per_sec (int pump);
    void load_pump_calib_data();
    void upd_pump_calib_data();

    const uint8_t _pump_gpio[PUMP_N] = {
        17,18,27,
        22,23,24,25,
        5,6,12,13,
        19,16,26,20,21
    };
    void gpio_init();
    void start_pump(int pump);
    void stop_pump(int pump);
    void stop_all_pumps (void);

    QTimer* timer;
    QVector <PumpStopEvent> pumpStopEvents;

    bool beverageList_editButtonPressed = false;

private slots:
    void focus_changed_slot (QWidget* old, QWidget* now);
    void timer_slot(void);
    void player_pos_slot (qint64 pos);
    void player_duration_changed_slot (qint64 dur);
    void drinkListBtnClicked (QString name);

    void on_addIngredientBtn_clicked();
    void on_backSaveBeverage_clicked();
    void on_addBeverageBtn_clicked();

    void on_drinkPrepare_backBtn_clicked();
    void on_settingButton_clicked();
    void on_menuPage_backBtn_clicked();
    void on_newRecipeButton_clicked();
    void on_AssignPumpButton_clicked();
    void on_cleanPumpButton_clicked();
    void on_calibratePumpButton_clicked();
    void on_editRecipeBtn_clicked();
    void on_drinkPrepare_prepareBtn_clicked();
    void on_volumeSlider_valueChanged(int value);
    void on_stopMediaBtn_clicked();
    void on_backBtnCalibrate_clicked();
    void on_calibrationStart_clicked();
    void on_calibrationSave_clicked();
    void on_backBtnCleanPage_clicked();
    void on_selectAllPumps_clicked();
    void on_startClean_pressed();
    void on_startClean_released();
    void on_backButtonBeverages_clicked();

    void on_deleteDrinkButton_clicked();
    void on_editBeverageNameBtn_clicked();
    void on_removeBeverageBtn_clicked();
    void on_saveBeverage_clicked();

    void beverageItemSelectionChangedSlot (QString selection_text, beverageItemWidget* obj);
};
#endif // MAINWINDOW_H
