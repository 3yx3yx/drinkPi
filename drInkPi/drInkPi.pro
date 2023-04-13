QT       += core gui multimedia multimediawidgets dbus

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
#QTPLUGIN += qtvirtualkeyboardplugin
#QT += svg

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bcm2835.c \
    beverageitemwidget.cpp \
    ingredientitemwidget.cpp \
    listunitwidget.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    bcm2835.h \
    beverageitemwidget.h \
    ingredientitemwidget.h \
    listunitwidget.h \
    mainwindow.h

FORMS += \
    beverageitemwidget.ui \
    ingredientitemwidget.ui \
    listunitwidget.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /home/pi/$${TARGET}
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=
