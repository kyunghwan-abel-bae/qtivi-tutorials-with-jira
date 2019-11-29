TEMPLATE = lib
TARGET = $$qtLibraryTarget(instrumentcluster_qtro)
DESTDIR = ../qtivi

QT += core ivicore
CONFIG += ivigenerator plugin

LIBS += -L$$OUT_PWD/../ -l$$qtLibraryTarget(QtIviInstrumentCluster)
INCLUDEPATH += $$OUT_PWD/../frontend

QFACE_FORMAT = backend_qtro
QFACE_SOURCES = ../instrument-cluster.qface
PLUGIN_TYPE = qtivi
