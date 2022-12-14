######################################################################
# Automatically generated by qmake (3.1) Mon Sep 19 15:05:16 2022
######################################################################

TEMPLATE = app
TARGET = QtPackMan.d
INCLUDEPATH += .

# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += BoardCells.h \
           BoardObject.h \
           Common.h \
           Controller.h \
           Cookie.h \
           GameCell.h \
           ListBoardObjects.h \
           Model.h \
           Player.h \
           Wall.h
SOURCES += BoardCells.cpp \
           Controller.cpp \
           Cookie.cpp \
           GameCell.cpp \
           ListBoardObjects.cpp \
           main.cpp \
           Model.cpp \
           Player.cpp \
           Wall.cpp

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
