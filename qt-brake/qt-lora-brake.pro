TEMPLATE = app
TARGET = qt-lora-brake

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    plusminus.cpp

HEADERS += \
    plusminus.h
