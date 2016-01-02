#-------------------------------------------------
#
# Project created by QtCreator 2015-06-06T15:37:26
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets printsupport
}
CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++0x

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = interpolation
TEMPLATE = app


SOURCES += main.cpp\
        qStcePlot/qcustomplot.cpp\
        qStcePlot/qstceplot.cpp \
        mainwindow.cpp \
    interpolationcontrol.cpp \
    interpolation.cpp \
    linearspline.cpp \
    cubicspline.cpp \
    polynomialinterpolation.cpp

HEADERS  +=\
        qStcePlot/qcustomplot.h\
        qStcePlot/qstceplot.h \
        mainwindow.h \
    interpolationcontrol.h \
    interpolation.h \
    linearspline.h \
    cubicspline.h \
    polynomialinterpolation.h \
    spline.h

FORMS    += \
    mainwindow.ui
