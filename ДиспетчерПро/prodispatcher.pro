#-------------------------------------------------
#
# Project created by QtCreator 2014-03-30T13:26:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settings.cpp \
    parameters.cpp \
    aboutdialog.cpp \
    logreader.cpp

HEADERS  += mainwindow.h \
    ../iec104.h \
    parameters.h \
    settings.h \
    aboutdialog.h \
    logreader.h

FORMS    += mainwindow.ui \
    aboutdialog.ui \
    logreader.ui

RESOURCES += \
    resources.qrc
