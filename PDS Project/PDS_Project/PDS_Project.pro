#-------------------------------------------------
#
# Project created by QtCreator 2016-03-28T06:49:35
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PDS_Project
TEMPLATE = app
INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib -lopencv_shape -lopencv_stitching -lopencv_objdetect -lopencv_superres -lopencv_videostab -lopencv_calib3d -lopencv_features2d -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_video -lopencv_photo -lopencv_ml -lopencv_imgproc -lopencv_flann -lopencv_core -lopencv_hal

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
