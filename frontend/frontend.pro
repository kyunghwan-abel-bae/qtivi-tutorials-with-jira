TARGET = $$qtLibraryTarget(QtIviInstrumentCluster)
TEMPLATE = lib
DESTDIR = ..

QT += ivicore ivicore-private qml quick

DEFINES += QT_BUILD_EXAMPLE_IVI_INSTRUMENTCLUSTER_LIB
CONFIG += ivigenerator
QFACE_SOURCES = ../instrument-cluster.qface
