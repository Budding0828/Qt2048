#-------------------------------------------------
#
# Project created by QtCreator 2018-08-23T17:02:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test2048
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamelogic.cpp

HEADERS  += mainwindow.h \
    gamelogic.h

FORMS    += mainwindow.ui
