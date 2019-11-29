/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QCoreApplication>
#include <QDir>
#include <QLockFile>

#include "instrumentclusterbackend.h"
#include "instrumentclusteradapter.h"

#include "core.h"
#include <QtIviCore/QIviSimulationEngine>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // single instance guard
    QLockFile lockFile(QStringLiteral("%1/%2.lock").arg(QDir::tempPath(), app.applicationName()));
    if (!lockFile.tryLock(100)) {
        qCritical("%s already running, aborting...", qPrintable(app.applicationName()));
        return EXIT_FAILURE;
    }

    auto simulationEngine = new QIviSimulationEngine(QStringLiteral("example.ivi.instrumentcluster"));

    auto instrumentClusterInstance = new InstrumentClusterBackend(simulationEngine);
    //Register the types for the SimulationEngine
    InstrumentClusterModule::registerQmlTypes(QStringLiteral("Example.IVI.InstrumentCluster.simulation"), 1, 0);
    simulationEngine->registerSimulationInstance(instrumentClusterInstance, "Example.IVI.InstrumentCluster.simulation", 1, 0, "InstrumentClusterBackend");
    simulationEngine->loadSimulationData(QStringLiteral(":/simulation/instrumentcluster_simulation_data.json"));
    simulationEngine->loadSimulation(QUrl(QStringLiteral("qrc:/simulation.qml")));

    //initialize all our backends
    instrumentClusterInstance->initialize();

    //Start Remoting the backends
    Core::instance()->host()->enableRemoting<InstrumentClusterAddressWrapper>(new InstrumentClusterQtRoAdapter(instrumentClusterInstance));

    return app.exec();
}
