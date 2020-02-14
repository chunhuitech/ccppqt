QT += core testlib
QT -= gui

TARGET = MyTestPros
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    maintest.cpp \
    cbitoperation.cpp \
    cmemalloc.cpp \
    swapdata.cpp

HEADERS += \
    maintest.h \
    cbitoperation.h \
    cmemalloc.h \
    swapdata.h \
    define.h

