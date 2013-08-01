#-------------------------------------------------
#
# Project created by QtCreator 2013-08-01T15:36:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtRegister
TEMPLATE = app

INCLUDEPATH += D:/libs/openssl32/include
LIBS += -L"D:/libs/openssl32/lib" -llibeay32 -lAdvapi32

SOURCES += main.cpp \
    register.cpp \
    CyoDecode.cpp \
    CyoEncode.cpp

HEADERS  += \
    register.h \
    CyoEncode.h \
    CyoDecode.h

FORMS    += \
    register.ui

RESOURCES += \
    register.qrc
