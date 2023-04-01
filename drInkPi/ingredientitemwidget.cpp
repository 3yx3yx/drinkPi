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


