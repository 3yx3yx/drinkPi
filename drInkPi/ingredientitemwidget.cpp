#include "ingredientitemwidget.h"
#include "ui_ingredientitemwidget.h"

ingredientItemWidget::ingredientItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ingredientItemWidget)
{
    ui->setupUi(this);
}

ingredientItemWidget::~ingredientItemWidget()
{
    delete ui;
}

void ingredientItemWidget::setList(QStringList list)
{
    ui->comboBox->clear();
    ui->comboBox->addItems(list);
}

QString ingredientItemWidget::getSelected()
{
    return ui->comboBox->currentText();
}

float ingredientItemWidget::getOz()
{
    QString s = ui->lineEdit->text();
    float f = s.toFloat();
    return f;
}


