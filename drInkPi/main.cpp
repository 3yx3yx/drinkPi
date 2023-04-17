
#include "mainwindow.h"

#include <QApplication>

#include <QtWidgets>


QApplication* mainApp;

int main(int argc, char *argv[]) {

    mainApp = new QApplication(argc, argv);
    MainWindow w;
    w.setWindowTitle("Drink Machine");
    w.setWindowFlag(Qt::WindowStaysOnBottomHint,1);
    w.setWindowFlag(Qt::FramelessWindowHint,1);
    w.showFullScreen();

    return mainApp->exec();
}
