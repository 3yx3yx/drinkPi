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
#include <QtWidgets/QListView>
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
    QPushButton *stopMediaBtn;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QVideoWidget *videoWidget;
    QLineEdit *lineEdit;
    QWidget *drinkSelectedPage;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QListView *listViewIngredients;
    QLabel *label_10;
    QLabel *label_11;
    QListView *listViewNotes;
    QPushButton *editRecipeBtn;
    QWidget *menuPage;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *newRecipeButton;
    QPushButton *AssignPumpButton;
    QPushButton *cleanPumpButton;
    QPushButton *calibratePumpButton;
    QPushButton *visitWebButton;
    QPushButton *termsOfUseButton;
    QWidget *calibrationPage;
    QWidget *layoutWidget2;
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
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *backBtnCleanPage;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startClean;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *selectAllPumps;
    QSpacerItem *horizontalSpacer_7;
    QWidget *layoutWidget5;
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
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEditDrinkName;
    QScrollArea *scrollAreaRecipe;
    QWidget *scrollAreaWidgetContents_3;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_4;
    QPushButton *addShowBtn;
    QPushButton *musicBtn;
    QPushButton *pictureBtn;
    QPushButton *videoBtn;
    QLabel *musicLabel;
    QLabel *pictureLabel;
    QLabel *videoLabel;
    QPushButton *addIngredientBtn;
    QPushButton *saveDrinkBtn;
    QWidget *beverageAssignPage;
    QScrollArea *scrollAreaBeverages;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *addBeverageBtn;
    QPushButton *removeBeverageBtn;
    QListWidget *listWidgetBeverages;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButtonBeverages;
    QSpacerItem *horizontalSpacer_3;
    QWidget *beverageSaveNamePage;
    QWidget *layoutWidget8;
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
        stopMediaBtn = new QPushButton(showPage);
        stopMediaBtn->setObjectName(QString::fromUtf8("stopMediaBtn"));
        stopMediaBtn->setGeometry(QRect(310, 900, 231, 61));
        horizontalSlider = new QSlider(showPage);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(60, 920, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(showPage);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 869, 551, 21));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        videoWidget = new QVideoWidget(showPage);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setGeometry(QRect(10, 30, 561, 811));
        lineEdit = new QLineEdit(showPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 960, 113, 25));
        stackedWidget->addWidget(showPage);
        drinkSelectedPage = new QWidget();
        drinkSelectedPage->setObjectName(QString::fromUtf8("drinkSelectedPage"));
        pushButton_3 = new QPushButton(drinkSelectedPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 904, 181, 61));
        pushButton_4 = new QPushButton(drinkSelectedPage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 900, 151, 71));
        listViewIngredients = new QListView(drinkSelectedPage);
        listViewIngredients->setObjectName(QString::fromUtf8("listViewIngredients"));
        listViewIngredients->setGeometry(QRect(80, 90, 411, 192));
        label_10 = new QLabel(drinkSelectedPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 60, 401, 20));
        label_11 = new QLabel(drinkSelectedPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 310, 401, 20));
        listViewNotes = new QListView(drinkSelectedPage);
        listViewNotes->setObjectName(QString::fromUtf8("listViewNotes"));
        listViewNotes->setGeometry(QRect(80, 340, 411, 192));
        editRecipeBtn = new QPushButton(drinkSelectedPage);
        editRecipeBtn->setObjectName(QString::fromUtf8("editRecipeBtn"));
        editRecipeBtn->setGeometry(QRect(240, 560, 89, 25));
        stackedWidget->addWidget(drinkSelectedPage);
        menuPage = new QWidget();
        menuPage->setObjectName(QString::fromUtf8("menuPage"));
        pushButton = new QPushButton(menuPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 121, 61));
        layoutWidget1 = new QWidget(menuPage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 100, 561, 891));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newRecipeButton = new QPushButton(layoutWidget1);
        newRecipeButton->setObjectName(QString::fromUtf8("newRecipeButton"));
        newRecipeButton->setMinimumSize(QSize(0, 140));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font1.setPointSize(31);
        font1.setBold(true);
        font1.setItalic(false);
        newRecipeButton->setFont(font1);
        newRecipeButton->setAutoFillBackground(false);
        newRecipeButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"    border-width: 3px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;"));
        newRecipeButton->setFlat(false);

        verticalLayout->addWidget(newRecipeButton);

        AssignPumpButton = new QPushButton(layoutWidget1);
        AssignPumpButton->setObjectName(QString::fromUtf8("AssignPumpButton"));
        AssignPumpButton->setMinimumSize(QSize(0, 130));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font2.setPointSize(31);
        font2.setBold(true);
        AssignPumpButton->setFont(font2);
        AssignPumpButton->setAutoFillBackground(false);
        AssignPumpButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;"));

        verticalLayout->addWidget(AssignPumpButton);

        cleanPumpButton = new QPushButton(layoutWidget1);
        cleanPumpButton->setObjectName(QString::fromUtf8("cleanPumpButton"));
        cleanPumpButton->setMinimumSize(QSize(0, 100));
        cleanPumpButton->setFont(font2);
        cleanPumpButton->setAutoFillBackground(false);
        cleanPumpButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;"));

        verticalLayout->addWidget(cleanPumpButton);

        calibratePumpButton = new QPushButton(layoutWidget1);
        calibratePumpButton->setObjectName(QString::fromUtf8("calibratePumpButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font3.setPointSize(30);
        font3.setBold(true);
        calibratePumpButton->setFont(font3);
        calibratePumpButton->setAutoFillBackground(false);
        calibratePumpButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;"));

        verticalLayout->addWidget(calibratePumpButton);

        visitWebButton = new QPushButton(layoutWidget1);
        visitWebButton->setObjectName(QString::fromUtf8("visitWebButton"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font4.setPointSize(31);
        visitWebButton->setFont(font4);
        visitWebButton->setAutoFillBackground(false);
        visitWebButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(136, 138, 133);\n"
"border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;"));

        verticalLayout->addWidget(visitWebButton);

        termsOfUseButton = new QPushButton(layoutWidget1);
        termsOfUseButton->setObjectName(QString::fromUtf8("termsOfUseButton"));
        termsOfUseButton->setFont(font4);
        termsOfUseButton->setAutoFillBackground(false);
        termsOfUseButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(136, 138, 133);\n"
"border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;"));

        verticalLayout->addWidget(termsOfUseButton);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        stackedWidget->addWidget(menuPage);
        calibrationPage = new QWidget();
        calibrationPage->setObjectName(QString::fromUtf8("calibrationPage"));
        layoutWidget2 = new QWidget(calibrationPage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 581, 871));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        backBtnCalibrate = new QPushButton(layoutWidget2);
        backBtnCalibrate->setObjectName(QString::fromUtf8("backBtnCalibrate"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backBtnCalibrate->sizePolicy().hasHeightForWidth());
        backBtnCalibrate->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(backBtnCalibrate);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font5.setPointSize(28);
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label_5);


        verticalLayout_5->addLayout(horizontalLayout_7);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(label_7);

        comboBoxCalibrate = new QComboBox(layoutWidget2);
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
        QFont font6;
        font6.setPointSize(30);
        comboBoxCalibrate->setFont(font6);
        comboBoxCalibrate->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(comboBoxCalibrate);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_9);

        calibrationStart = new QPushButton(layoutWidget2);
        calibrationStart->setObjectName(QString::fromUtf8("calibrationStart"));
        sizePolicy.setHeightForWidth(calibrationStart->sizePolicy().hasHeightForWidth());
        calibrationStart->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font7.setPointSize(24);
        font7.setBold(true);
        calibrationStart->setFont(font7);

        verticalLayout_5->addWidget(calibrationStart);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font5);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        lineEditCalibrate = new QLineEdit(layoutWidget2);
        lineEditCalibrate->setObjectName(QString::fromUtf8("lineEditCalibrate"));
        QFont font8;
        font8.setPointSize(24);
        lineEditCalibrate->setFont(font8);
        lineEditCalibrate->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(lineEditCalibrate);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font5);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_8);

        calibrationSave = new QPushButton(layoutWidget2);
        calibrationSave->setObjectName(QString::fromUtf8("calibrationSave"));
        sizePolicy.setHeightForWidth(calibrationSave->sizePolicy().hasHeightForWidth());
        calibrationSave->setSizePolicy(sizePolicy);
        calibrationSave->setFont(font7);
        calibrationSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"    border-width: 3px;\n"
"    border-radius:12px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton:focus:pressed{ background-color: black; }\n"
"\n"
""));

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
        layoutWidget3 = new QWidget(pumpClearPage);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 21, 531, 40));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        backBtnCleanPage = new QPushButton(layoutWidget3);
        backBtnCleanPage->setObjectName(QString::fromUtf8("backBtnCleanPage"));

        horizontalLayout_4->addWidget(backBtnCleanPage);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        label_4->setPalette(palette1);
        QFont font9;
        font9.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font9.setPointSize(24);
        label_4->setFont(font9);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        layoutWidget4 = new QWidget(pumpClearPage);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 76, 561, 81));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        startClean = new QPushButton(layoutWidget4);
        startClean->setObjectName(QString::fromUtf8("startClean"));
        sizePolicy.setHeightForWidth(startClean->sizePolicy().hasHeightForWidth());
        startClean->setSizePolicy(sizePolicy);
        startClean->setFont(font6);
        startClean->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(startClean);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        selectAllPumps = new QPushButton(layoutWidget4);
        selectAllPumps->setObjectName(QString::fromUtf8("selectAllPumps"));
        sizePolicy.setHeightForWidth(selectAllPumps->sizePolicy().hasHeightForWidth());
        selectAllPumps->setSizePolicy(sizePolicy);
        selectAllPumps->setFont(font8);
        selectAllPumps->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(selectAllPumps);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        layoutWidget5 = new QWidget(pumpClearPage);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 170, 561, 831));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pumpSelBtn = new QPushButton(layoutWidget5);
        pumpSelBtn->setObjectName(QString::fromUtf8("pumpSelBtn"));
        QFont font10;
        font10.setPointSize(18);
        pumpSelBtn->setFont(font10);
        pumpSelBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn->setCheckable(true);
        pumpSelBtn->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn);

        pumpSelBtn_2 = new QPushButton(layoutWidget5);
        pumpSelBtn_2->setObjectName(QString::fromUtf8("pumpSelBtn_2"));
        pumpSelBtn_2->setFont(font10);
        pumpSelBtn_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_2->setCheckable(true);
        pumpSelBtn_2->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_2);

        pumpSelBtn_4 = new QPushButton(layoutWidget5);
        pumpSelBtn_4->setObjectName(QString::fromUtf8("pumpSelBtn_4"));
        pumpSelBtn_4->setFont(font10);
        pumpSelBtn_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_4->setCheckable(true);
        pumpSelBtn_4->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_4);

        pumpSelBtn_3 = new QPushButton(layoutWidget5);
        pumpSelBtn_3->setObjectName(QString::fromUtf8("pumpSelBtn_3"));
        pumpSelBtn_3->setFont(font10);
        pumpSelBtn_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_3->setCheckable(true);
        pumpSelBtn_3->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_3);

        pumpSelBtn_8 = new QPushButton(layoutWidget5);
        pumpSelBtn_8->setObjectName(QString::fromUtf8("pumpSelBtn_8"));
        pumpSelBtn_8->setFont(font10);
        pumpSelBtn_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_8->setCheckable(true);
        pumpSelBtn_8->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_8);

        pumpSelBtn_5 = new QPushButton(layoutWidget5);
        pumpSelBtn_5->setObjectName(QString::fromUtf8("pumpSelBtn_5"));
        pumpSelBtn_5->setFont(font10);
        pumpSelBtn_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_5->setCheckable(true);
        pumpSelBtn_5->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_5);

        pumpSelBtn_7 = new QPushButton(layoutWidget5);
        pumpSelBtn_7->setObjectName(QString::fromUtf8("pumpSelBtn_7"));
        pumpSelBtn_7->setFont(font10);
        pumpSelBtn_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_7->setCheckable(true);
        pumpSelBtn_7->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_7);

        pumpSelBtn_6 = new QPushButton(layoutWidget5);
        pumpSelBtn_6->setObjectName(QString::fromUtf8("pumpSelBtn_6"));
        pumpSelBtn_6->setFont(font10);
        pumpSelBtn_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_6->setCheckable(true);
        pumpSelBtn_6->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_6);

        pumpSelBtn_12 = new QPushButton(layoutWidget5);
        pumpSelBtn_12->setObjectName(QString::fromUtf8("pumpSelBtn_12"));
        pumpSelBtn_12->setFont(font10);
        pumpSelBtn_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_12->setCheckable(true);
        pumpSelBtn_12->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_12);

        pumpSelBtn_9 = new QPushButton(layoutWidget5);
        pumpSelBtn_9->setObjectName(QString::fromUtf8("pumpSelBtn_9"));
        pumpSelBtn_9->setFont(font10);
        pumpSelBtn_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_9->setCheckable(true);
        pumpSelBtn_9->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_9);

        pumpSelBtn_11 = new QPushButton(layoutWidget5);
        pumpSelBtn_11->setObjectName(QString::fromUtf8("pumpSelBtn_11"));
        pumpSelBtn_11->setFont(font10);
        pumpSelBtn_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_11->setCheckable(true);
        pumpSelBtn_11->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_11);

        pumpSelBtn_10 = new QPushButton(layoutWidget5);
        pumpSelBtn_10->setObjectName(QString::fromUtf8("pumpSelBtn_10"));
        pumpSelBtn_10->setFont(font10);
        pumpSelBtn_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_10->setCheckable(true);
        pumpSelBtn_10->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_10);

        pumpSelBtn_16 = new QPushButton(layoutWidget5);
        pumpSelBtn_16->setObjectName(QString::fromUtf8("pumpSelBtn_16"));
        pumpSelBtn_16->setFont(font10);
        pumpSelBtn_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_16->setCheckable(true);
        pumpSelBtn_16->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_16);

        pumpSelBtn_13 = new QPushButton(layoutWidget5);
        pumpSelBtn_13->setObjectName(QString::fromUtf8("pumpSelBtn_13"));
        pumpSelBtn_13->setFont(font10);
        pumpSelBtn_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_13->setCheckable(true);
        pumpSelBtn_13->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_13);

        pumpSelBtn_15 = new QPushButton(layoutWidget5);
        pumpSelBtn_15->setObjectName(QString::fromUtf8("pumpSelBtn_15"));
        pumpSelBtn_15->setFont(font10);
        pumpSelBtn_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_15->setCheckable(true);
        pumpSelBtn_15->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_15);

        pumpSelBtn_14 = new QPushButton(layoutWidget5);
        pumpSelBtn_14->setObjectName(QString::fromUtf8("pumpSelBtn_14"));
        pumpSelBtn_14->setFont(font10);
        pumpSelBtn_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pumpSelBtn_14->setCheckable(true);
        pumpSelBtn_14->setChecked(false);

        verticalLayout_4->addWidget(pumpSelBtn_14);

        stackedWidget->addWidget(pumpClearPage);
        createRecipePage = new QWidget();
        createRecipePage->setObjectName(QString::fromUtf8("createRecipePage"));
        layoutWidget6 = new QWidget(createRecipePage);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 20, 541, 941));
        verticalLayout_3 = new QVBoxLayout(layoutWidget6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_2 = new QPushButton(layoutWidget6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        label_3 = new QLabel(layoutWidget6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font9);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        lineEditDrinkName = new QLineEdit(layoutWidget6);
        lineEditDrinkName->setObjectName(QString::fromUtf8("lineEditDrinkName"));
        QFont font11;
        font11.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font11.setPointSize(20);
        lineEditDrinkName->setFont(font11);
        lineEditDrinkName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(lineEditDrinkName);

        scrollAreaRecipe = new QScrollArea(layoutWidget6);
        scrollAreaRecipe->setObjectName(QString::fromUtf8("scrollAreaRecipe"));
        scrollAreaRecipe->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 98, 28));
        scrollAreaRecipe->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollAreaRecipe);

        textEdit = new QTextEdit(layoutWidget6);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(textEdit);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        addShowBtn = new QPushButton(layoutWidget6);
        addShowBtn->setObjectName(QString::fromUtf8("addShowBtn"));

        gridLayout_4->addWidget(addShowBtn, 0, 0, 1, 4);

        musicBtn = new QPushButton(layoutWidget6);
        musicBtn->setObjectName(QString::fromUtf8("musicBtn"));

        gridLayout_4->addWidget(musicBtn, 1, 0, 1, 1);

        pictureBtn = new QPushButton(layoutWidget6);
        pictureBtn->setObjectName(QString::fromUtf8("pictureBtn"));

        gridLayout_4->addWidget(pictureBtn, 1, 1, 1, 2);

        videoBtn = new QPushButton(layoutWidget6);
        videoBtn->setObjectName(QString::fromUtf8("videoBtn"));

        gridLayout_4->addWidget(videoBtn, 1, 3, 1, 1);

        musicLabel = new QLabel(layoutWidget6);
        musicLabel->setObjectName(QString::fromUtf8("musicLabel"));
        musicLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(musicLabel, 2, 0, 1, 1);

        pictureLabel = new QLabel(layoutWidget6);
        pictureLabel->setObjectName(QString::fromUtf8("pictureLabel"));
        pictureLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(pictureLabel, 2, 1, 1, 2);

        videoLabel = new QLabel(layoutWidget6);
        videoLabel->setObjectName(QString::fromUtf8("videoLabel"));
        videoLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(videoLabel, 2, 3, 1, 1);

        addIngredientBtn = new QPushButton(layoutWidget6);
        addIngredientBtn->setObjectName(QString::fromUtf8("addIngredientBtn"));

        gridLayout_4->addWidget(addIngredientBtn, 3, 0, 1, 2);

        saveDrinkBtn = new QPushButton(layoutWidget6);
        saveDrinkBtn->setObjectName(QString::fromUtf8("saveDrinkBtn"));

        gridLayout_4->addWidget(saveDrinkBtn, 3, 2, 1, 2);


        verticalLayout_3->addLayout(gridLayout_4);

        stackedWidget->addWidget(createRecipePage);
        beverageAssignPage = new QWidget();
        beverageAssignPage->setObjectName(QString::fromUtf8("beverageAssignPage"));
        scrollAreaBeverages = new QScrollArea(beverageAssignPage);
        scrollAreaBeverages->setObjectName(QString::fromUtf8("scrollAreaBeverages"));
        scrollAreaBeverages->setGeometry(QRect(12, 115, 551, 491));
        scrollAreaBeverages->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 549, 489));
        scrollAreaBeverages->setWidget(scrollAreaWidgetContents_2);
        addBeverageBtn = new QPushButton(beverageAssignPage);
        addBeverageBtn->setObjectName(QString::fromUtf8("addBeverageBtn"));
        addBeverageBtn->setGeometry(QRect(10, 730, 80, 25));
        sizePolicy.setHeightForWidth(addBeverageBtn->sizePolicy().hasHeightForWidth());
        addBeverageBtn->setSizePolicy(sizePolicy);
        removeBeverageBtn = new QPushButton(beverageAssignPage);
        removeBeverageBtn->setObjectName(QString::fromUtf8("removeBeverageBtn"));
        removeBeverageBtn->setGeometry(QRect(170, 730, 80, 25));
        sizePolicy.setHeightForWidth(removeBeverageBtn->sizePolicy().hasHeightForWidth());
        removeBeverageBtn->setSizePolicy(sizePolicy);
        listWidgetBeverages = new QListWidget(beverageAssignPage);
        listWidgetBeverages->setObjectName(QString::fromUtf8("listWidgetBeverages"));
        listWidgetBeverages->setGeometry(QRect(30, 790, 256, 192));
        layoutWidget7 = new QWidget(beverageAssignPage);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(12, 22, 135, 40));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        backButtonBeverages = new QPushButton(layoutWidget7);
        backButtonBeverages->setObjectName(QString::fromUtf8("backButtonBeverages"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("edit-undo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        backButtonBeverages->setIcon(icon1);
        backButtonBeverages->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(backButtonBeverages);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        stackedWidget->addWidget(beverageAssignPage);
        beverageSaveNamePage = new QWidget();
        beverageSaveNamePage->setObjectName(QString::fromUtf8("beverageSaveNamePage"));
        layoutWidget8 = new QWidget(beverageSaveNamePage);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 10, 561, 261));
        gridLayout_3 = new QGridLayout(layoutWidget8);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        saveBeverage = new QPushButton(layoutWidget8);
        saveBeverage->setObjectName(QString::fromUtf8("saveBeverage"));
        sizePolicy.setHeightForWidth(saveBeverage->sizePolicy().hasHeightForWidth());
        saveBeverage->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(saveBeverage, 2, 1, 1, 1);

        beveragelineEdit = new QLineEdit(layoutWidget8);
        beveragelineEdit->setObjectName(QString::fromUtf8("beveragelineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(beveragelineEdit->sizePolicy().hasHeightForWidth());
        beveragelineEdit->setSizePolicy(sizePolicy1);
        QFont font12;
        font12.setPointSize(26);
        beveragelineEdit->setFont(font12);
        beveragelineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(beveragelineEdit, 1, 0, 1, 2);

        backSaveBeverage = new QPushButton(layoutWidget8);
        backSaveBeverage->setObjectName(QString::fromUtf8("backSaveBeverage"));
        sizePolicy.setHeightForWidth(backSaveBeverage->sizePolicy().hasHeightForWidth());
        backSaveBeverage->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(backSaveBeverage, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget8);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font7);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);

        stackedWidget->addWidget(beverageSaveNamePage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

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
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PREPARE", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Ingedients:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Notes:", nullptr));
        editRecipeBtn->setText(QCoreApplication::translate("MainWindow", "EDIT", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
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
        lineEditCalibrate->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
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
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Create recipe", nullptr));
        lineEditDrinkName->setText(QCoreApplication::translate("MainWindow", "Enter drink name", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add note</p></body></html>", nullptr));
        addShowBtn->setText(QCoreApplication::translate("MainWindow", "ADD SHOW", nullptr));
        musicBtn->setText(QCoreApplication::translate("MainWindow", "MUSIC", nullptr));
        pictureBtn->setText(QCoreApplication::translate("MainWindow", "PICTURE", nullptr));
        videoBtn->setText(QCoreApplication::translate("MainWindow", "VIDEO", nullptr));
        musicLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pictureLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        videoLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        addIngredientBtn->setText(QCoreApplication::translate("MainWindow", "ADD INGREDIENT", nullptr));
        saveDrinkBtn->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        addBeverageBtn->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        removeBeverageBtn->setText(QCoreApplication::translate("MainWindow", "REMOVE", nullptr));
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
