#-------------------------------------------------
#
# Project created by QtCreator 2012-07-19T09:07:13
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += network

TRANSLATIONS = Daleel_en.ts \
               Daleel_fr.ts \
               Daleel_ar.ts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Daleel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    updates.cpp \
    printing/textprinter.cpp

HEADERS  += mainwindow.h \
    updates.h \
    printing/textprinter.h

FORMS    += mainwindow.ui \
    updates.ui

RESOURCES += \
    resources.qrc

RC_FILE = app.rc
