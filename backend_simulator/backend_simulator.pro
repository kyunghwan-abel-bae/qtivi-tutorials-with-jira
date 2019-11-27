TEMPLATE = lib
TARGET = $$qtLibraryTarget(instrumentcluster_simulation)
DESTDIR = ../qtivi

LIBS += -L$$OUT_PWD/../ -l$$qtLibraryTarget(QtIviInstrumentCluster)
INCLUDEPATH += $$OUT_PWD/../frontend

QT += core ivicore
CONFIG += ivigenerator plugin

QFACE_FORMAT = backend_simulator
QFACE_SOURCES = ../instrument-cluster.qface
PLUGIN_TYPE = qtivi

RESOURCES += \
    simulation.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = $$OUT_PWD/../frontend/qml
