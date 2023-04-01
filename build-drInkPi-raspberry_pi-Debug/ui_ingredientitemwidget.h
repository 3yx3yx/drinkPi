/********************************************************************************
** Form generated from reading UI file 'ingredientitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGREDIENTITEMWIDGET_H
#define UI_INGREDIENTITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ingredientItemWidget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QWidget *ingredientItemWidget)
    {
        if (ingredientItemWidget->objectName().isEmpty())
            ingredientItemWidget->setObjectName(QString::fromUtf8("ingredientItemWidget"));
        ingredientItemWidget->resize(493, 91);
        widget = new QWidget(ingredientItemWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 471, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setPointSize(20);
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QFont font1;
        font1.setPointSize(18);
        spinBox->setFont(font1);

        horizontalLayout->addWidget(spinBox);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalLayout->setStretch(0, 7);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(ingredientItemWidget);

        QMetaObject::connectSlotsByName(ingredientItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ingredientItemWidget)
    {
        ingredientItemWidget->setWindowTitle(QCoreApplication::translate("ingredientItemWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ingredientItemWidget", "OZ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ingredientItemWidget: public Ui_ingredientItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGREDIENTITEMWIDGET_H
