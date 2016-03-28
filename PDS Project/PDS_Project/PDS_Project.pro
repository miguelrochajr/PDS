#-------------------------------------------------
#
# Project created by QtCreator 2016-03-28T06:49:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PDS_Project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    databasae.cpp \
    subsdialog.cpp \
    userdata.cpp

HEADERS  += mainwindow.h \
    databasae.h \
    subsdialog.h \
    userdata.h

FORMS    += mainwindow.ui \
    subsdialog.ui \
    userdata.ui
