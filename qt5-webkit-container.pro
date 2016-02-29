#-------------------------------------------------
#
# Project created by QtCreator 2015-05-11T10:46:04
#
#-------------------------------------------------

QT       += core gui
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

VPATH += ./src
OBJECTS_DIR = ./build
MOC_DIR = ./build

TARGET = qt5-webkit-container
TEMPLATE = app

target.path = /usr/bin
INSTALLS += target

documentation.path = /usr/share/doc/qt5-webkit-container
documentation.files = README.md INSTALL.md
INSTALLS += documentation


SOURCES += main.cpp \
    container.cpp

HEADERS  += \
    container.h

FORMS    +=
