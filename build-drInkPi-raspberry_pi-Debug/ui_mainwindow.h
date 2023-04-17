/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *startPage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *settingButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *showPage;
    QSlider *timePosSlider;
    QVideoWidget *videoWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_10;
    QSlider *volumeSlider;
    QPushButton *stopMediaBtn;
    QWidget *drinkSelectedPage;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QListWidget *listWidgetIngredients;
    QLabel *label_11;
    QListWidget *listWidgetNotes;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editRecipeBtn;
    QPushButton *deleteDrinkButton;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *drinkPrepare_backBtn;
    QPushButton *drinkPrepare_prepareBtn;
    QWidget *menuPage;
    QPushButton *menuPage_backBtn;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QPushButton *newRecipeButton;
    QPushButton *AssignPumpButton;
    QPushButton *cleanPumpButton;
    QPushButton *calibratePumpButton;
    QPushButton *visitWebButton;
    QPushButton *termsOfUseButton;
    QWidget *calibrationPage;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *backBtnCalibrate;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_7;
    QComboBox *comboBoxCalibrate;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *calibrationStart;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEditCalibrate;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *calibrationSave;
    QWidget *pumpClearPage;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backBtnCleanPage;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startClean;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *selectAllPumps;
    QSpacerItem *horizontalSpacer_7;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pumpSelBtn;
    QPushButton *pumpSelBtn_2;
    QPushButton *pumpSelBtn_4;
    QPushButton *pumpSelBtn_3;
    QPushButton *pumpSelBtn_8;
    QPushButton *pumpSelBtn_5;
    QPushButton *pumpSelBtn_7;
    QPushButton *pumpSelBtn_6;
    QPushButton *pumpSelBtn_12;
    QPushButton *pumpSelBtn_9;
    QPushButton *pumpSelBtn_11;
    QPushButton *pumpSelBtn_10;
    QPushButton *pumpSelBtn_16;
    QPushButton *pumpSelBtn_13;
    QPushButton *pumpSelBtn_15;
    QPushButton *pumpSelBtn_14;
    QWidget *createRecipePage;
    QLabel *label_12;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *lineEditDrinkName;
    QSpacerItem *verticalSpacer_4;
    QScrollArea *scrollAreaRecipe;
    QWidget *scrollAreaWidgetContents_3;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *textEdit;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *musicBtn;
    QPushButton *pictureBtn;
    QPushButton *videoBtn;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *addIngredientBtn;
    QPushButton *saveDrinkBtn;
    QWidget *beverageAssignPage;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scrollAreaBeverages;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_12;
    QListWidget *listWidgetBeverages;
    QVBoxLayout *verticalLayout_7;
    QPushButton *removeBeverageBtn;
    QPushButton *editBeverageNameBtn;
    QPushButton *addBeverageBtn;
    QPushButton *backButtonBeverages;
    QWidget *beverageSaveNamePage;
    QWidget *layoutWidget11;
    QGridLayout *gridLayout_3;
    QPushButton *saveBeverage;
    QLineEdit *beveragelineEdit;
    QPushButton *backSaveBeverage;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 1024);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        startPage = new QWidget();
        startPage->setObjectName(QString::fromUtf8("startPage"));
        scrollArea = new QScrollArea(startPage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 70, 571, 921));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 569, 919));
        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget = new QWidget(startPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 571, 59));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        settingButton = new QPushButton(layoutWidget);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/assets/free-settings-icon-3110-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingButton->setIcon(icon);
        settingButton->setIconSize(QSize(45, 45));
        settingButton->setFlat(true);

        horizontalLayout->addWidget(settingButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette;
        QBrush brush(QColor(8, 8, 8, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(64, 67, 191, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        label->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(24);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(64, 67, 191, 0);\n"
"color: rgb(8, 8, 8);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(startPage);
        showPage = new QWidget();
        showPage->setObjectName(QString::fromUtf8("showPage"));
        timePosSlider = new QSlider(showPage);
        timePosSlider->setObjectName(QString::fromUtf8("timePosSlider"));
        timePosSlider->setGeometry(QRect(29, 800, 531, 20));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timePosSlider->sizePolicy().hasHeightForWidth());
        timePosSlider->setSizePolicy(sizePolicy);
        timePosSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 12px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 12px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        timePosSlider->setOrientation(Qt::Horizontal);
        videoWidget = new QVideoWidget(showPage);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setGeometry(QRect(1, 31, 579, 731));
        layoutWidget1 = new QWidget(showPage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 830, 531, 163));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_14->setSpacing(33);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 33, 0, 33);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        volumeSlider = new QSlider(layoutWidget1);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        sizePolicy.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy);
        volumeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 34px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 43px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        volumeSlider->setTracking(false);
        volumeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(volumeSlider);

        verticalLayout_10->setStretch(0, 5);

        horizontalLayout_14->addLayout(verticalLayout_10);

        stopMediaBtn = new QPushButton(layoutWidget1);
        stopMediaBtn->setObjectName(QString::fromUtf8("stopMediaBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stopMediaBtn->sizePolicy().hasHeightForWidth());
        stopMediaBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(stopMediaBtn);

        horizontalLayout_14->setStretch(0, 3);
        horizontalLayout_14->setStretch(1, 1);
        stackedWidget->addWidget(showPage);
        drinkSelectedPage = new QWidget();
        drinkSelectedPage->setObjectName(QString::fromUtf8("drinkSelectedPage"));
        layoutWidget2 = new QWidget(drinkSelectedPage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 10, 491, 981));
        verticalLayout_9 = new QVBoxLayout(layoutWidget2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font1.setPointSize(24);
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_10);

        listWidgetIngredients = new QListWidget(layoutWidget2);
        listWidgetIngredients->setObjectName(QString::fromUtf8("listWidgetIngredients"));
        listWidgetIngredients->setFont(font1);

        verticalLayout_9->addWidget(listWidgetIngredients);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_11);

        listWidgetNotes = new QListWidget(layoutWidget2);
        listWidgetNotes->setObjectName(QString::fromUtf8("listWidgetNotes"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font2.setPointSize(16);
        listWidgetNotes->setFont(font2);

        verticalLayout_9->addWidget(listWidgetNotes);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(44);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(33, -1, 33, 22);
        editRecipeBtn = new QPushButton(layoutWidget2);
        editRecipeBtn->setObjectName(QString::fromUtf8("editRecipeBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editRecipeBtn->sizePolicy().hasHeightForWidth());
        editRecipeBtn->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(editRecipeBtn);

        deleteDrinkButton = new QPushButton(layoutWidget2);
        deleteDrinkButton->setObjectName(QString::fromUtf8("deleteDrinkButton"));
        sizePolicy2.setHeightForWidth(deleteDrinkButton->sizePolicy().hasHeightForWidth());
        deleteDrinkButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(deleteDrinkButton);


        verticalLayout_9->addLayout(horizontalLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(44);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(33, 33, 33, -1);
        drinkPrepare_backBtn = new QPushButton(layoutWidget2);
        drinkPrepare_backBtn->setObjectName(QString::fromUtf8("drinkPrepare_backBtn"));
        sizePolicy1.setHeightForWidth(drinkPrepare_backBtn->sizePolicy().hasHeightForWidth());
        drinkPrepare_backBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(drinkPrepare_backBtn);

        drinkPrepare_prepareBtn = new QPushButton(layoutWidget2);
        drinkPrepare_prepareBtn->setObjectName(QString::fromUtf8("drinkPrepare_prepareBtn"));
        sizePolicy1.setHeightForWidth(drinkPrepare_prepareBtn->sizePolicy().hasHeightForWidth());
        drinkPrepare_prepareBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(drinkPrepare_prepareBtn);


        verticalLayout_9->addLayout(horizontalLayout_13);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 5);
        verticalLayout_9->setStretch(2, 1);
        verticalLayout_9->setStretch(3, 3);
        verticalLayout_9->setStretch(4, 1);
        verticalLayout_9->setStretch(5, 2);
        stackedWidget->addWidget(drinkSelectedPage);
        menuPage = new QWidget();
        menuPage->setObjectName(QString::fromUtf8("menuPage"));
        menuPage_backBtn = new QPushButton(menuPage);
        menuPage_backBtn->setObjectName(QString::fromUtf8("menuPage_backBtn"));
        menuPage_backBtn->setGeometry(QRect(20, 20, 121, 61));
        layoutWidget3 = new QWidget(menuPage);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 100, 561, 891));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newRecipeButton = new QPushButton(layoutWidget3);
        newRecipeButton->setObjectName(QString::fromUtf8("newRecipeButton"));
        newRecipeButton->setMinimumSize(QSize(0, 140));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font3.setPointSize(31);
        font3.setBold(true);
        font3.setItalic(false);
        newRecipeButton->setFont(font3);
        newRecipeButton->setAutoFillBackground(false);
        newRecipeButton->setFlat(false);

        verticalLayout->addWidget(newRecipeButton);

        AssignPumpButton = new QPushButton(layoutWidget3);
        AssignPumpButton->setObjectName(QString::fromUtf8("AssignPumpButton"));
        AssignPumpButton->setMinimumSize(QSize(0, 130));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font4.setPointSize(31);
        font4.setBold(true);
        AssignPumpButton->setFont(font4);
        AssignPumpButton->setAutoFillBackground(false);

        verticalLayout->addWidget(AssignPumpButton);

        cleanPumpButton = new QPushButton(layoutWidget3);
        cleanPumpButton->setObjectName(QString::fromUtf8("cleanPumpButton"));
        cleanPumpButton->setMinimumSize(QSize(0, 100));
        cleanPumpButton->setFont(font4);
        cleanPumpButton->setAutoFillBackground(false);

        verticalLayout->addWidget(cleanPumpButton);

        calibratePumpButton = new QPushButton(layoutWidget3);
        calibratePumpButton->setObjectName(QString::fromUtf8("calibratePumpButton"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font5.setPointSize(30);
        font5.setBold(true);
        calibratePumpButton->setFont(font5);
        calibratePumpButton->setAutoFillBackground(false);

        verticalLayout->addWidget(calibratePumpButton);

        visitWebButton = new QPushButton(layoutWidget3);
        visitWebButton->setObjectName(QString::fromUtf8("visitWebButton"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font6.setPointSize(31);
        visitWebButton->setFont(font6);
        visitWebButton->setAutoFillBackground(false);

        verticalLayout->addWidget(visitWebButton);

        termsOfUseButton = new QPushButton(layoutWidget3);
        termsOfUseButton->setObjectName(QString::fromUtf8("termsOfUseButton"));
        termsOfUseButton->setFont(font6);
        termsOfUseButton->setAutoFillBackground(false);

        verticalLayout->addWidget(termsOfUseButton);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        stackedWidget->addWidget(menuPage);
        calibrationPage = new QWidget();
        calibrationPage->setObjectName(QString::fromUtf8("calibrationPage"));
        layoutWidget4 = new QWidget(calibrationPage);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 20, 581, 871));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        backBtnCalibrate = new QPushButton(layoutWidget4);
        backBtnCalibrate->setObjectName(QString::fromUtf8("backBtnCalibrate"));
        sizePolicy1.setHeightForWidth(backBtnCalibrate->sizePolicy().hasHeightForWidth());
        backBtnCalibrate->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(backBtnCalibrate);

        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font7.setPointSize(28);
        label_5->setFont(font7);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label_5);


        verticalLayout_5->addLayout(horizontalLayout_7);

        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font7);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(label_7);

        comboBoxCalibrate = new QComboBox(layoutWidget4);
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->addItem(QString());
        comboBoxCalibrate->setObjectName(QString::fromUtf8("comboBoxCalibrate"));
        QFont font8;
        font8.setPointSize(30);
        comboBoxCalibrate->setFont(font8);
        comboBoxCalibrate->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(comboBoxCalibrate);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_9);

        calibrationStart = new QPushButton(layoutWidget4);
        calibrationStart->setObjectName(QString::fromUtf8("calibrationStart"));
        sizePolicy1.setHeightForWidth(calibrationStart->sizePolicy().hasHeightForWidth());
        calibrationStart->setSizePolicy(sizePolicy1);
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font9.setPointSize(24);
        font9.setBold(true);
        calibrationStart->setFont(font9);

        verticalLayout_5->addWidget(calibrationStart);

        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font7);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        lineEditCalibrate = new QLineEdit(layoutWidget4);
        lineEditCalibrate->setObjectName(QString::fromUtf8("lineEditCalibrate"));
        QFont font10;
        font10.setPointSize(24);
        lineEditCalibrate->setFont(font10);
        lineEditCalibrate->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEditCalibrate->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_8->addWidget(lineEditCalibrate);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font7);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_8);

        calibrationSave = new QPushButton(layoutWidget4);
        calibrationSave->setObjectName(QString::fromUtf8("calibrationSave"));
        sizePolicy1.setHeightForWidth(calibrationSave->sizePolicy().hasHeightForWidth());
        calibrationSave->setSizePolicy(sizePolicy1);
        calibrationSave->setFont(font9);
        calibrationSave->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(calibrationSave);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 2);
        verticalLayout_5->setStretch(3, 1);
        verticalLayout_5->setStretch(4, 1);
        verticalLayout_5->setStretch(5, 1);
        verticalLayout_5->setStretch(6, 1);
        stackedWidget->addWidget(calibrationPage);
        pumpClearPage = new QWidget();
        pumpClearPage->setObjectName(QString::fromUtf8("pumpClearPage"));
        layoutWidget5 = new QWidget(pumpClearPage);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(11, 21, 561, 40));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        backBtnCleanPage = new QPushButton(layoutWidget5);
        backBtnCleanPage->setObjectName(QString::fromUtf8("backBtnCleanPage"));

        horizontalLayout_4->addWidget(backBtnCleanPage);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(211, 215, 207, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        label_4->setPalette(palette1);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        layoutWidget6 = new QWidget(pumpClearPage);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 76, 561, 81));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        startClean = new QPushButton(layoutWidget6);
        startClean->setObjectName(QString::fromUtf8("startClean"));
        sizePolicy1.setHeightForWidth(startClean->sizePolicy().hasHeightForWidth());
        startClean->setSizePolicy(sizePolicy1);
        startClean->setFont(font8);
        startClean->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(startClean);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        selectAllPumps = new QPushButton(layoutWidget6);
        selectAllPumps->setObjectName(QString::fromUtf8("selectAllPumps"));
        sizePolicy1.setHeightForWidth(selectAllPumps->sizePolicy().hasHeightForWidth());
        selectAllPumps->setSizePolicy(sizePolicy1);
        selectAllPumps->setFont(font10);
        selectAllPumps->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(selectAllPumps);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        layoutWidget7 = new QWidget(pumpClearPage);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 170, 561, 831));
        verticalLayout_4 = new QVBoxLayout(layoutWidget7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pumpSelBtn = new QPushButton(layoutWidget7);
        pumpSelBtn->setObjectName(QString::fromUtf8("pumpSelBtn"));
        QFont font11;
        font11.setPointSize(18);
        pumpSelBtn->setFont(font11);
        pumpSelBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn->setCheckable(true);
        pumpSelBtn->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn);

        pumpSelBtn_2 = new QPushButton(layoutWidget7);
        pumpSelBtn_2->setObjectName(QString::fromUtf8("pumpSelBtn_2"));
        pumpSelBtn_2->setFont(font11);
        pumpSelBtn_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_2->setCheckable(true);
        pumpSelBtn_2->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_2);

        pumpSelBtn_4 = new QPushButton(layoutWidget7);
        pumpSelBtn_4->setObjectName(QString::fromUtf8("pumpSelBtn_4"));
        pumpSelBtn_4->setFont(font11);
        pumpSelBtn_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_4->setCheckable(true);
        pumpSelBtn_4->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_4);

        pumpSelBtn_3 = new QPushButton(layoutWidget7);
        pumpSelBtn_3->setObjectName(QString::fromUtf8("pumpSelBtn_3"));
        pumpSelBtn_3->setFont(font11);
        pumpSelBtn_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_3->setCheckable(true);
        pumpSelBtn_3->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_3);

        pumpSelBtn_8 = new QPushButton(layoutWidget7);
        pumpSelBtn_8->setObjectName(QString::fromUtf8("pumpSelBtn_8"));
        pumpSelBtn_8->setFont(font11);
        pumpSelBtn_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_8->setCheckable(true);
        pumpSelBtn_8->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_8);

        pumpSelBtn_5 = new QPushButton(layoutWidget7);
        pumpSelBtn_5->setObjectName(QString::fromUtf8("pumpSelBtn_5"));
        pumpSelBtn_5->setFont(font11);
        pumpSelBtn_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_5->setCheckable(true);
        pumpSelBtn_5->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_5);

        pumpSelBtn_7 = new QPushButton(layoutWidget7);
        pumpSelBtn_7->setObjectName(QString::fromUtf8("pumpSelBtn_7"));
        pumpSelBtn_7->setFont(font11);
        pumpSelBtn_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_7->setCheckable(true);
        pumpSelBtn_7->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_7);

        pumpSelBtn_6 = new QPushButton(layoutWidget7);
        pumpSelBtn_6->setObjectName(QString::fromUtf8("pumpSelBtn_6"));
        pumpSelBtn_6->setFont(font11);
        pumpSelBtn_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_6->setCheckable(true);
        pumpSelBtn_6->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_6);

        pumpSelBtn_12 = new QPushButton(layoutWidget7);
        pumpSelBtn_12->setObjectName(QString::fromUtf8("pumpSelBtn_12"));
        pumpSelBtn_12->setFont(font11);
        pumpSelBtn_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_12->setCheckable(true);
        pumpSelBtn_12->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_12);

        pumpSelBtn_9 = new QPushButton(layoutWidget7);
        pumpSelBtn_9->setObjectName(QString::fromUtf8("pumpSelBtn_9"));
        pumpSelBtn_9->setFont(font11);
        pumpSelBtn_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_9->setCheckable(true);
        pumpSelBtn_9->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_9);

        pumpSelBtn_11 = new QPushButton(layoutWidget7);
        pumpSelBtn_11->setObjectName(QString::fromUtf8("pumpSelBtn_11"));
        pumpSelBtn_11->setFont(font11);
        pumpSelBtn_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_11->setCheckable(true);
        pumpSelBtn_11->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_11);

        pumpSelBtn_10 = new QPushButton(layoutWidget7);
        pumpSelBtn_10->setObjectName(QString::fromUtf8("pumpSelBtn_10"));
        pumpSelBtn_10->setFont(font11);
        pumpSelBtn_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_10->setCheckable(true);
        pumpSelBtn_10->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_10);

        pumpSelBtn_16 = new QPushButton(layoutWidget7);
        pumpSelBtn_16->setObjectName(QString::fromUtf8("pumpSelBtn_16"));
        pumpSelBtn_16->setFont(font11);
        pumpSelBtn_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_16->setCheckable(true);
        pumpSelBtn_16->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_16);

        pumpSelBtn_13 = new QPushButton(layoutWidget7);
        pumpSelBtn_13->setObjectName(QString::fromUtf8("pumpSelBtn_13"));
        pumpSelBtn_13->setFont(font11);
        pumpSelBtn_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_13->setCheckable(true);
        pumpSelBtn_13->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_13);

        pumpSelBtn_15 = new QPushButton(layoutWidget7);
        pumpSelBtn_15->setObjectName(QString::fromUtf8("pumpSelBtn_15"));
        pumpSelBtn_15->setFont(font11);
        pumpSelBtn_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_15->setCheckable(true);
        pumpSelBtn_15->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_15);

        pumpSelBtn_14 = new QPushButton(layoutWidget7);
        pumpSelBtn_14->setObjectName(QString::fromUtf8("pumpSelBtn_14"));
        pumpSelBtn_14->setFont(font11);
        pumpSelBtn_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_14->setCheckable(true);
        pumpSelBtn_14->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_14);

        stackedWidget->addWidget(pumpClearPage);
        createRecipePage = new QWidget();
        createRecipePage->setObjectName(QString::fromUtf8("createRecipePage"));
        label_12 = new QLabel(createRecipePage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(210, 710, 174, 38));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);
        layoutWidget8 = new QWidget(createRecipePage);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(51, 1, 481, 691));
        verticalLayout_3 = new QVBoxLayout(layoutWidget8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(layoutWidget8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);

        label_3 = new QLabel(layoutWidget8);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_3);

        lineEditDrinkName = new QLineEdit(layoutWidget8);
        lineEditDrinkName->setObjectName(QString::fromUtf8("lineEditDrinkName"));
        QFont font12;
        font12.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font12.setPointSize(20);
        lineEditDrinkName->setFont(font12);
        lineEditDrinkName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(lineEditDrinkName);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_4);

        scrollAreaRecipe = new QScrollArea(layoutWidget8);
        scrollAreaRecipe->setObjectName(QString::fromUtf8("scrollAreaRecipe"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollAreaRecipe->sizePolicy().hasHeightForWidth());
        scrollAreaRecipe->setSizePolicy(sizePolicy3);
        scrollAreaRecipe->setMinimumSize(QSize(0, 330));
        scrollAreaRecipe->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 477, 328));
        scrollAreaRecipe->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollAreaRecipe);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_3);

        textEdit = new QTextEdit(layoutWidget8);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy4);
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(textEdit);

        layoutWidget9 = new QWidget(createRecipePage);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(31, 764, 521, 221));
        verticalLayout_6 = new QVBoxLayout(layoutWidget9);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(33);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        musicBtn = new QPushButton(layoutWidget9);
        musicBtn->setObjectName(QString::fromUtf8("musicBtn"));
        musicBtn->setMinimumSize(QSize(0, 66));

        horizontalLayout_10->addWidget(musicBtn);

        pictureBtn = new QPushButton(layoutWidget9);
        pictureBtn->setObjectName(QString::fromUtf8("pictureBtn"));
        pictureBtn->setMinimumSize(QSize(0, 66));

        horizontalLayout_10->addWidget(pictureBtn);

        videoBtn = new QPushButton(layoutWidget9);
        videoBtn->setObjectName(QString::fromUtf8("videoBtn"));
        videoBtn->setMinimumSize(QSize(0, 66));

        horizontalLayout_10->addWidget(videoBtn);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(88);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        addIngredientBtn = new QPushButton(layoutWidget9);
        addIngredientBtn->setObjectName(QString::fromUtf8("addIngredientBtn"));
        addIngredientBtn->setMinimumSize(QSize(0, 66));

        horizontalLayout_11->addWidget(addIngredientBtn);

        saveDrinkBtn = new QPushButton(layoutWidget9);
        saveDrinkBtn->setObjectName(QString::fromUtf8("saveDrinkBtn"));
        saveDrinkBtn->setMinimumSize(QSize(0, 66));

        horizontalLayout_11->addWidget(saveDrinkBtn);


        verticalLayout_6->addLayout(horizontalLayout_11);

        stackedWidget->addWidget(createRecipePage);
        beverageAssignPage = new QWidget();
        beverageAssignPage->setObjectName(QString::fromUtf8("beverageAssignPage"));
        layoutWidget10 = new QWidget(beverageAssignPage);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(10, 90, 561, 911));
        verticalLayout_8 = new QVBoxLayout(layoutWidget10);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollAreaBeverages = new QScrollArea(layoutWidget10);
        scrollAreaBeverages->setObjectName(QString::fromUtf8("scrollAreaBeverages"));
        scrollAreaBeverages->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollAreaBeverages->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollAreaBeverages->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 543, 509));
        scrollAreaBeverages->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_8->addWidget(scrollAreaBeverages);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_8->addItem(verticalSpacer);

        label_13 = new QLabel(layoutWidget10);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(33);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        listWidgetBeverages = new QListWidget(layoutWidget10);
        listWidgetBeverages->setObjectName(QString::fromUtf8("listWidgetBeverages"));
        listWidgetBeverages->setFont(font12);

        horizontalLayout_12->addWidget(listWidgetBeverages);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(33);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 22, -1, 12);
        removeBeverageBtn = new QPushButton(layoutWidget10);
        removeBeverageBtn->setObjectName(QString::fromUtf8("removeBeverageBtn"));
        sizePolicy1.setHeightForWidth(removeBeverageBtn->sizePolicy().hasHeightForWidth());
        removeBeverageBtn->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(removeBeverageBtn);

        editBeverageNameBtn = new QPushButton(layoutWidget10);
        editBeverageNameBtn->setObjectName(QString::fromUtf8("editBeverageNameBtn"));
        sizePolicy1.setHeightForWidth(editBeverageNameBtn->sizePolicy().hasHeightForWidth());
        editBeverageNameBtn->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(editBeverageNameBtn);

        addBeverageBtn = new QPushButton(layoutWidget10);
        addBeverageBtn->setObjectName(QString::fromUtf8("addBeverageBtn"));
        sizePolicy1.setHeightForWidth(addBeverageBtn->sizePolicy().hasHeightForWidth());
        addBeverageBtn->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(addBeverageBtn);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 2);

        horizontalLayout_12->addLayout(verticalLayout_7);

        horizontalLayout_12->setStretch(0, 4);
        horizontalLayout_12->setStretch(1, 1);

        verticalLayout_8->addLayout(horizontalLayout_12);

        verticalLayout_8->setStretch(0, 6);
        verticalLayout_8->setStretch(1, 1);
        verticalLayout_8->setStretch(2, 1);
        verticalLayout_8->setStretch(3, 3);
        backButtonBeverages = new QPushButton(beverageAssignPage);
        backButtonBeverages->setObjectName(QString::fromUtf8("backButtonBeverages"));
        backButtonBeverages->setGeometry(QRect(13, 26, 141, 38));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("edit-undo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        backButtonBeverages->setIcon(icon1);
        backButtonBeverages->setIconSize(QSize(32, 32));
        stackedWidget->addWidget(beverageAssignPage);
        beverageSaveNamePage = new QWidget();
        beverageSaveNamePage->setObjectName(QString::fromUtf8("beverageSaveNamePage"));
        layoutWidget11 = new QWidget(beverageSaveNamePage);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(10, 10, 561, 261));
        gridLayout_3 = new QGridLayout(layoutWidget11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        saveBeverage = new QPushButton(layoutWidget11);
        saveBeverage->setObjectName(QString::fromUtf8("saveBeverage"));
        sizePolicy1.setHeightForWidth(saveBeverage->sizePolicy().hasHeightForWidth());
        saveBeverage->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(saveBeverage, 2, 1, 1, 1);

        beveragelineEdit = new QLineEdit(layoutWidget11);
        beveragelineEdit->setObjectName(QString::fromUtf8("beveragelineEdit"));
        sizePolicy.setHeightForWidth(beveragelineEdit->sizePolicy().hasHeightForWidth());
        beveragelineEdit->setSizePolicy(sizePolicy);
        QFont font13;
        font13.setPointSize(26);
        beveragelineEdit->setFont(font13);
        beveragelineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        beveragelineEdit->setInputMethodHints(Qt::ImhLatinOnly);
        beveragelineEdit->setClearButtonEnabled(false);

        gridLayout_3->addWidget(beveragelineEdit, 1, 0, 1, 2);

        backSaveBeverage = new QPushButton(layoutWidget11);
        backSaveBeverage->setObjectName(QString::fromUtf8("backSaveBeverage"));
        sizePolicy1.setHeightForWidth(backSaveBeverage->sizePolicy().hasHeightForWidth());
        backSaveBeverage->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(backSaveBeverage, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget11);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font9);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);

        stackedWidget->addWidget(beverageSaveNamePage);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);
        newRecipeButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        settingButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Available drinks list:", nullptr));
        stopMediaBtn->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Ingredients:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Notes:", nullptr));
        editRecipeBtn->setText(QCoreApplication::translate("MainWindow", "EDIT", nullptr));
        deleteDrinkButton->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        drinkPrepare_backBtn->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        drinkPrepare_prepareBtn->setText(QCoreApplication::translate("MainWindow", "PREPARE", nullptr));
        menuPage_backBtn->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        newRecipeButton->setText(QCoreApplication::translate("MainWindow", "Create new recipe", nullptr));
        AssignPumpButton->setText(QCoreApplication::translate("MainWindow", "Assign pump", nullptr));
        cleanPumpButton->setText(QCoreApplication::translate("MainWindow", "Pump clean", nullptr));
        calibratePumpButton->setText(QCoreApplication::translate("MainWindow", "Calibrate", nullptr));
        visitWebButton->setText(QCoreApplication::translate("MainWindow", "Visit our web page", nullptr));
        termsOfUseButton->setText(QCoreApplication::translate("MainWindow", "Terms of use ", nullptr));
        backBtnCalibrate->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Pump calibration:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "press start to turn\n"
"on the pump for 1 sec. ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Pump:", nullptr));
        comboBoxCalibrate->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBoxCalibrate->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBoxCalibrate->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBoxCalibrate->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBoxCalibrate->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBoxCalibrate->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBoxCalibrate->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBoxCalibrate->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBoxCalibrate->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        comboBoxCalibrate->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        comboBoxCalibrate->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        comboBoxCalibrate->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));
        comboBoxCalibrate->setItemText(12, QCoreApplication::translate("MainWindow", "13", nullptr));
        comboBoxCalibrate->setItemText(13, QCoreApplication::translate("MainWindow", "14", nullptr));
        comboBoxCalibrate->setItemText(14, QCoreApplication::translate("MainWindow", "15", nullptr));
        comboBoxCalibrate->setItemText(15, QCoreApplication::translate("MainWindow", "16", nullptr));

        calibrationStart->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "enter the measured\n"
"liquid volume", nullptr));
        lineEditCalibrate->setText(QCoreApplication::translate("MainWindow", "1,8", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "OZ", nullptr));
        calibrationSave->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        backBtnCleanPage->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Select pumps to clean", nullptr));
        startClean->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        selectAllPumps->setText(QCoreApplication::translate("MainWindow", "Select all", nullptr));
        pumpSelBtn->setText(QCoreApplication::translate("MainWindow", "PUMP 1", nullptr));
        pumpSelBtn_2->setText(QCoreApplication::translate("MainWindow", "PUMP 2", nullptr));
        pumpSelBtn_4->setText(QCoreApplication::translate("MainWindow", "PUMP 3", nullptr));
        pumpSelBtn_3->setText(QCoreApplication::translate("MainWindow", "PUMP 4", nullptr));
        pumpSelBtn_8->setText(QCoreApplication::translate("MainWindow", "PUMP 5", nullptr));
        pumpSelBtn_5->setText(QCoreApplication::translate("MainWindow", "PUMP 6", nullptr));
        pumpSelBtn_7->setText(QCoreApplication::translate("MainWindow", "PUMP 7", nullptr));
        pumpSelBtn_6->setText(QCoreApplication::translate("MainWindow", "PUMP 8", nullptr));
        pumpSelBtn_12->setText(QCoreApplication::translate("MainWindow", "PUMP 9", nullptr));
        pumpSelBtn_9->setText(QCoreApplication::translate("MainWindow", "PUMP 10", nullptr));
        pumpSelBtn_11->setText(QCoreApplication::translate("MainWindow", "PUMP 11", nullptr));
        pumpSelBtn_10->setText(QCoreApplication::translate("MainWindow", "PUMP 12", nullptr));
        pumpSelBtn_16->setText(QCoreApplication::translate("MainWindow", "PUMP 13", nullptr));
        pumpSelBtn_13->setText(QCoreApplication::translate("MainWindow", "PUMP 14", nullptr));
        pumpSelBtn_15->setText(QCoreApplication::translate("MainWindow", "PUMP 15", nullptr));
        pumpSelBtn_14->setText(QCoreApplication::translate("MainWindow", "PUMP 16", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Add show:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Create recipe", nullptr));
        lineEditDrinkName->setText(QCoreApplication::translate("MainWindow", "Enter drink name", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add note</p></body></html>", nullptr));
        musicBtn->setText(QCoreApplication::translate("MainWindow", "MUSIC", nullptr));
        pictureBtn->setText(QCoreApplication::translate("MainWindow", "PICTURE", nullptr));
        videoBtn->setText(QCoreApplication::translate("MainWindow", "VIDEO", nullptr));
        addIngredientBtn->setText(QCoreApplication::translate("MainWindow", "ADD INGREDIENT", nullptr));
        saveDrinkBtn->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Available beverages list", nullptr));
        removeBeverageBtn->setText(QCoreApplication::translate("MainWindow", "REMOVE", nullptr));
        editBeverageNameBtn->setText(QCoreApplication::translate("MainWindow", "EDIT", nullptr));
        addBeverageBtn->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        backButtonBeverages->setText(QCoreApplication::translate("MainWindow", "   Back", nullptr));
        saveBeverage->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        beveragelineEdit->setText(QString());
        backSaveBeverage->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "New beverage name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
