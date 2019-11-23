#-------------------------------------------------
#
# Project created by QtCreator 2019-11-01T22:11:19
#
#-------------------------------------------------

QT       += core gui network multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Music_Play
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    MyLyric.cpp \
    showplaylist.cpp \
    playlistwidget.cpp \
    displayresult.cpp \
    videoplay.cpp \
    likemusicwidget.cpp \
    localmusicwidget.cpp

HEADERS += \
        mainwindow.h \
    MyLyric.h \
    showplaylist.h \
    playlistwidget.h \
    displayresult.h \
    videoplay.h \
    likemusicwidget.h \
    localmusicwidget.h

FORMS += \
        mainwindow.ui \
    displayresult.ui \
    videoplay.ui \
    playlistwidget.ui \
    likemusicwidget.ui \
    localmusicwidget.ui

DISTFILES += \
    Main.qml \
    style.qss

RESOURCES += \
    res.qrc
CONFIG += c++11
