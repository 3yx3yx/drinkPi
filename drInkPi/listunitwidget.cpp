#include "listunitwidget.h"
#include "ui_listunitwidget.h"

ListUnitWidget::ListUnitWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListUnitWidget)
{
    ui->setupUi(this);
}

ListUnitWidget::~ListUnitWidget()
{
    delete ui;
}

void ListUnitWidget::setItem(QString s, bool star = 0)
{
    ui->label->setText(s);
    ui->starButton->setChecked(star);
}

QString ListUnitWidget::getText()
{
    return ui->label->text();

}

void ListUnitWidget::on_starButton_clicked()
{
    //ui->starButton->setChecked(!ui->starButton->isChecked());
}

