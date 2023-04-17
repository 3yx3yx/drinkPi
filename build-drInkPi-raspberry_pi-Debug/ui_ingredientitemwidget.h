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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ingredientItemWidget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *ingredientItemWidget)
    {
        if (ingredientItemWidget->objectName().isEmpty())
            ingredientItemWidget->setObjectName(QString::fromUtf8("ingredientItemWidget"));
        ingredientItemWidget->resize(493, 91);
        layoutWidget = new QWidget(ingredientItemWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 471, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setPointSize(20);
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        lineEdit->setFont(font1);
        lineEdit->setMaxLength(10);
        lineEdit->setFrame(true);
        lineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(ingredientItemWidget);

        QMetaObject::connectSlotsByName(ingredientItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ingredientItemWidget)
    {
        ingredientItemWidget->setWindowTitle(QCoreApplication::translate("ingredientItemWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ingredientItemWidget", "Oz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ingredientItemWidget: public Ui_ingredientItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGREDIENTITEMWIDGET_H
