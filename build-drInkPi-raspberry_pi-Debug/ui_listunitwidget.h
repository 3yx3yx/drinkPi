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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListUnitWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *starButton;
    QLabel *label;

    void setupUi(QWidget *ListUnitWidget)
    {
        if (ListUnitWidget->objectName().isEmpty())
            ListUnitWidget->setObjectName(QString::fromUtf8("ListUnitWidget"));
        ListUnitWidget->resize(380, 51);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ListUnitWidget->sizePolicy().hasHeightForWidth());
        ListUnitWidget->setSizePolicy(sizePolicy);
        ListUnitWidget->setMinimumSize(QSize(200, 35));
        ListUnitWidget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(ListUnitWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        starButton = new QPushButton(ListUnitWidget);
        starButton->setObjectName(QString::fromUtf8("starButton"));
        starButton->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/assets/star (copy).png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/assets/star.png"), QSize(), QIcon::Normal, QIcon::On);
        starButton->setIcon(icon);
        starButton->setIconSize(QSize(32, 32));
        starButton->setCheckable(true);
        starButton->setChecked(false);
        starButton->setAutoRepeat(true);
        starButton->setAutoExclusive(true);
        starButton->setFlat(false);

        gridLayout->addWidget(starButton, 0, 0, 1, 1);

        label = new QLabel(ListUnitWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(27);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(64, 67, 191, 4);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;"));
        label->setFrameShadow(QFrame::Plain);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(ListUnitWidget);

        starButton->setDefault(false);


        QMetaObject::connectSlotsByName(ListUnitWidget);
    } // setupUi

    void retranslateUi(QWidget *ListUnitWidget)
    {
        ListUnitWidget->setWindowTitle(QCoreApplication::translate("ListUnitWidget", "Form", nullptr));
        starButton->setText(QString());
        label->setText(QCoreApplication::translate("ListUnitWidget", "Drink Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListUnitWidget: public Ui_ListUnitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTUNITWIDGET_H
