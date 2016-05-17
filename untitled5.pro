include($$PWD/cpc2/cpp_boost/cpp_boost.pri)

QT       += core gui
QT += widgets

TARGET = untitled5
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp

HEADERS  += MainWindow.hpp

FORMS    += MainWindow.ui
