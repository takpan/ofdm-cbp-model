#-------------------------------------------------
#
# Project created by QtCreator 2017-06-08T14:40:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OFDM
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tablemodel.cpp \
    stochastic.cpp \
    sctablemodel.cpp

HEADERS  += mainwindow.h \
    tablemodel.h \
    stochastic.h \
    sctablemodel.h

FORMS    += mainwindow.ui
