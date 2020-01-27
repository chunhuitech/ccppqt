QT += core testlib
QT -= gui

TARGET = MyTestPros
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    pointertest.cpp \
    swapdata.cpp

HEADERS += \
    pointertest.h \
    swapdata.h

