#-------------------------------------------------
#
# Project created by QtCreator 2012-12-27T23:51:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xbian-installer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    storageprovider.cpp

HEADERS  += mainwindow.h \
    storageprovider.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    ProgressPresentation.qml
