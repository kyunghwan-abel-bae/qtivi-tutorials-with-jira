TARGET = ipc-server
DESTDIR = ..

QT = core ivicore
QT -= gui
CONFIG -= app_bundle
CONFIG += ivigenerator

LIBS += -L$$OUT_PWD/../ -l$$qtLibraryTarget(QtIviInstrumentCluster)
INCLUDEPATH += $$OUT_PWD/../frontend

QFACE_FORMAT = server_qtro_simulator
QFACE_SOURCES = ../instrument-cluster.qface

RESOURCES += ../backend_simulator/simulation.qrc

QML_IMPORT_PATH = $$OUT_PWD/../frontend/qml
