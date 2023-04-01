#include "beverageitemwidget.h"
#include "ui_beverageitemwidget.h"

beverageItemWidget::beverageItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::beverageItemWidget)
{
    ui->setupUi(this);
}

beverageItemWidget::~beverageItemWidget()
{
    delete ui;
}

void beverageItemWidget::setWidget(int pumpN, QString s, QStringList list)
{
    ui->pumpNumLabel->setText(QString::number(pumpN));
    ui->comboBox->clear();
    ui->comboBox->addItem("none");
    ui->comboBox->addItems(list);
    ui->comboBox->setCurrentText(s);
}
