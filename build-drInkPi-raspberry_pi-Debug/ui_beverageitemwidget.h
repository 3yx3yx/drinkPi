/********************************************************************************
** Form generated from reading UI file 'beverageitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEVERAGEITEMWIDGET_H
#define UI_BEVERAGEITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_beverageItemWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *pumpNumLabel;
    QComboBox *comboBox;

    void setupUi(QWidget *beverageItemWidget)
    {
        if (beverageItemWidget->objectName().isEmpty())
            beverageItemWidget->setObjectName(QString::fromUtf8("beverageItemWidget"));
        beverageItemWidget->resize(566, 83);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(beverageItemWidget->sizePolicy().hasHeightForWidth());
        beverageItemWidget->setSizePolicy(sizePolicy);
        beverageItemWidget->setMinimumSize(QSize(470, 83));
        gridLayout = new QGridLayout(beverageItemWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pumpNumLabel = new QLabel(beverageItemWidget);
        pumpNumLabel->setObjectName(QString::fromUtf8("pumpNumLabel"));
        QFont font;
        font.setPointSize(20);
        pumpNumLabel->setFont(font);

        horizontalLayout->addWidget(pumpNumLabel);

        comboBox = new QComboBox(beverageItemWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(27);
        comboBox->setFont(font1);

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(1, 3);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(beverageItemWidget);

        QMetaObject::connectSlotsByName(beverageItemWidget);
    } // setupUi

    void retranslateUi(QWidget *beverageItemWidget)
    {
        beverageItemWidget->setWindowTitle(QCoreApplication::translate("beverageItemWidget", "Form", nullptr));
        pumpNumLabel->setText(QCoreApplication::translate("beverageItemWidget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class beverageItemWidget: public Ui_beverageItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEVERAGEITEMWIDGET_H
