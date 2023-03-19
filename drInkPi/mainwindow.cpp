#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDir>
#include <QDebug>
#include "listunitwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file;
    file.setFileName(":/text/assets/DrinkList.txt");
    if (file.open(QIODevice::ReadOnly)) {
        while (!file.atEnd())
        {
            //auto unit = new ListUnitWidget(this);
            auto unit = new ListUnitWidget(this);
            bool star = 0;
            QString s = QString(file.readLine(20));
            s.remove('\n');
            if (s.contains('*')) {
                s.remove('*');
                star = true;
            }
            unit->setItem(s, star);

            auto item = new QListWidgetItem();
             item->setSizeHint(unit->sizeHint());
            ui->listWidget->addItem(item);
            ui->listWidget->setItemWidget(item, unit);
        }

    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

