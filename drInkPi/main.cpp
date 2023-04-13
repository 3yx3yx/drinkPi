
#include "mainwindow.h"

#include <QApplication>

#include <QtWidgets>


QApplication* mainApp;

int main(int argc, char *argv[]) {
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    mainApp = new QApplication(argc, argv);
    MainWindow w;
    w.setWindowFlag(Qt::WindowStaysOnBottomHint,1);
    w.showFullScreen();


    return mainApp->exec();
}
