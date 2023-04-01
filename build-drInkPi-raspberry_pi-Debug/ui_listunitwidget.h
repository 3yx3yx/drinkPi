/********************************************************************************
** Form generated from reading UI file 'listunitwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTUNITWIDGET_H
#define UI_LISTUNITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListUnitWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *ListUnitWidget)
    {
        if (ListUnitWidget->objectName().isEmpty())
            ListUnitWidget->setObjectName(QString::fromUtf8("ListUnitWidget"));
        ListUnitWidget->resize(500, 100);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(ListUnitWidget->sizePolicy().hasHeightForWidth());
        ListUnitWidget->setSizePolicy(sizePolicy);
        ListUnitWidget->setMinimumSize(QSize(500, 100));
        ListUnitWidget->setAutoFillBackground(false);
        ListUnitWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);"));
        gridLayout = new QGridLayout(ListUnitWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(ListUnitWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(27);
        font.setBold(false);
        pushButton->setFont(font);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"background-color: rgb(66,66, 66);\n"
"color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
"    border-width: 1px;\n"
"    border-radius: 5px;\n"
"    border-color: gray;\n"
"\n"
"    padding: 3px;\n"
"}\n"
"QPushButton:: pressed{\n"
"	\n"
"	background-color: rgb(186, 189, 182);\n"
"}\n"
""));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(ListUnitWidget);

        QMetaObject::connectSlotsByName(ListUnitWidget);
    } // setupUi

    void retranslateUi(QWidget *ListUnitWidget)
    {
        ListUnitWidget->setWindowTitle(QCoreApplication::translate("ListUnitWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ListUnitWidget", "drink_name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListUnitWidget: public Ui_ListUnitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTUNITWIDGET_H
