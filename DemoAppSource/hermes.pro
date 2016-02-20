######################################################################
# Automatically generated by qmake (3.0) Thu Oct 1 20:26:09 2015
######################################################################
include (/usr/local/qwt-6.1.2/features/qwt.prf)
QT += core gui widgets

TEMPLATE = app
TARGET = hermes
INCLUDEPATH += .

# Input
HEADERS += configdialog.h \
           kit_model.h \
           kit_controller.h \
           gui_view.h \    
           rui_view.h \
           tcp_server.h \
           chart.h \
           hermes.h \
           can.h \
           i2c_bridge.h \
           spi_bridge.h \
           util.h \
           gpio.h \
           rui_thread.h \
           interfaces.h \
           pages.h \
           sensorTag.h \
           utilityFunctions.h \
           uart.h \
           ams_radon_reader.h \
           chart_thread.h \

SOURCES += configdialog.cpp \
	   kit_model.cpp \
	   kit_controller.cpp \
	   gui_view.cpp \
           chart.cpp \
           rui_view.cpp \
	   tcp_server.cpp \
           can.cpp \
           util.cpp \
           gpio.cpp \
           i2c_bridge.cpp \
           spi_bridge.cpp \
           rui_thread.cpp \
	   interfaces.cpp \
	   hermes.cpp \
           main.cpp \
           pages.cpp \
           sensorTag.cpp \
           utilityFunctions.cpp \
           ams_radon_reader.cpp \
           uart.cpp \
           chart_thread.cpp \

RESOURCES += hermes.qrc


CONFIG += qwt debug

