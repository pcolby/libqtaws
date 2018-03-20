include(../../common.pri)

TARGET = logs
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudwatchlogsclient.h \
    cloudwatchlogsclient_p.h \

SOURCES += \
    cloudwatchlogsclient.cpp \

win32:CONFIG += skip_target_version_ext
