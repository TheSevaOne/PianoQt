#-------------------------------------------------
#
# Project created by QtCreator 2023-12-24T15:35:10
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = piano
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    sounds.cpp \
    textbox.cpp \
    keyEvents.cpp \
    player.cpp \
    newwindow.cpp \
    colors.cpp \
    recording.cpp

HEADERS  += mainwindow.h \
    sounds.h \
    newwindow.h

FORMS    += mainwindow.ui \
    newwindow.ui

RESOURCES = qml.qrc
