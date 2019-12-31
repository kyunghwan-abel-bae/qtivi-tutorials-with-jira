TEMPLATE = lib
TARGET = $$qtLibraryTarget(instrumentcluster_dbus)
DESTDIR = ../qtivi

QT += ivicore dbus
CONFIG += plugin

LIBS += -L$$OUT_PWD/../ -l$$qtLibraryTarget(QtIviInstrumentCluster)
INCLUDEPATH += $$OUT_PWD/../frontend $$PWD/../dbus_server

PLUGIN_TYPE = qtivi

cluster.files = ../dbus_server/instrumentcluster.xml
cluster.header_flags += -i dbus_conversion.h

DBUS_INTERFACES += cluster

HEADERS += \
    ../dbus_server/dbus_conversion.h \
    instrumentclusterbackend.h \
    instrumentclusterplugin.h

SOURCES += \
    instrumentclusterbackend.cpp \
    instrumentclusterplugin.cpp

OTHER_FILES += \
    instrumentcluster_dbus.json
