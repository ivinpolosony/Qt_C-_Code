#-------------------------------------------------
#
# Project created by QtCreator 2015-12-06T16:56:58
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EchoServer
TEMPLATE = app


SOURCES += main.cpp\
        mainview.cpp

HEADERS  += mainview.h

FORMS    += mainview.ui

CONFIG += mobility
MOBILITY = 

QMAKE_CXXFLAGS += -std=c++11
