#-------------------------------------------------
#
# Project created by QtCreator 2020-11-06T20:21:26
#
#-------------------------------------------------
#
# https://github.com/foreverlz1111/Arkham
#
#-------------------------------------------------
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT+=sql
TARGET = Arkham
TEMPLATE = app

ICON+=
SOURCES += main.cpp\
        loginsection.cpp \
        mainwindow.cpp \
        studentwindow.cpp

HEADERS  += mainwindow.h \
    loginsection.h \
    studentwindow.h

FORMS    += mainwindow.ui \
    loginsection.ui \
    studentwindow.ui

RC_ICONS = "ff2.ico"

RESOURCES += \
    Img.qrc
