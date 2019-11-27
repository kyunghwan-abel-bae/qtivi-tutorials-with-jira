/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#include "instrumentclusterplugin.h"

#include "instrumentclusterbackend.h"

#include <QStringList>
#include <QtIviCore/QIviSimulationEngine>

QT_BEGIN_NAMESPACE


/*!
   \class InstrumentClusterPlugin
   \inmodule Example.IVI.InstrumentCluster

*/
/*! \internal */
InstrumentClusterPlugin::InstrumentClusterPlugin(QObject *parent)
    : QObject(parent)
    , m_simulationEngine(new QIviSimulationEngine(QStringLiteral("example.ivi.instrumentcluster"), this))
{
    auto InstrumentClusterInstance = new InstrumentClusterBackend(m_simulationEngine, this);
    //Register the types for the SimulationEngine
    InstrumentClusterModule::registerQmlTypes(QStringLiteral("Example.IVI.InstrumentCluster.simulation"), 1, 0);
    m_simulationEngine->registerSimulationInstance(InstrumentClusterInstance, "Example.IVI.InstrumentCluster.simulation", 1, 0, "InstrumentClusterBackend");
    m_interfaces << InstrumentClusterInstance;
    m_simulationEngine->loadSimulationData(QStringLiteral(":/simulation/instrumentcluster_simulation_data.json"));
    m_simulationEngine->loadSimulation(QUrl(QStringLiteral("qrc:/simulation.qml")));
}

/*! \internal */
QStringList InstrumentClusterPlugin::interfaces() const
{
    QStringList list;
    list << InstrumentCluster_InstrumentCluster_iid;
    return list;
}

/*! \internal */
QIviFeatureInterface *InstrumentClusterPlugin::interfaceInstance(const QString &interface) const
{
     int index = interfaces().indexOf(interface);
     return index < 0 ? nullptr : m_interfaces.at(index);
}

QT_END_NAMESPACE
