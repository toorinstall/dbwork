#-------------------------------------------------
#
# Project created by QtCreator 2020-08-06T10:18:08
#
#-------------------------------------------------

QT       += core gui sql

CONFIG += c++17

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestProj
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    cdbmanager.cpp \
        main.cpp \
        fmainwindow.cpp \
    ccode.cpp

HEADERS += \
    cdbmanager.h \
    director.h \
        fmainwindow.h \
    ccode.h \
    singleton.h \
    codebuilder.h

FORMS += \
        fmainwindow.ui \
