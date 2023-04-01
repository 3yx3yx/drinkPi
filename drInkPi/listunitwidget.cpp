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

void ListUnitWidget::setItemString(QString s)
{
    ui->pushButton->setText(s);
}


