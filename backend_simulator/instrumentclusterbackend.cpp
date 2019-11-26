/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "instrumentclusterbackend.h"

#include <QDebug>
#include <QtIviCore/QIviSimulationEngine>


QT_BEGIN_NAMESPACE


InstrumentClusterBackend::InstrumentClusterBackend(QObject *parent)
    : InstrumentClusterBackend(nullptr, parent)
{
}

InstrumentClusterBackend::InstrumentClusterBackend(QIviSimulationEngine *engine, QObject *parent)
    : InstrumentClusterBackendInterface(parent)
    , m_speed(int(0))
    , m_rpm(int(0))
    , m_fuel(qreal(0.0))
    , m_temperature(qreal(0.0))
    , m_systemType(InstrumentClusterModule::Imperial)
    , m_currentWarning(Warning())
{
    //In some cases the engine is unused, this doesn't do any harm if it is still used
    Q_UNUSED(engine)
    qRegisterMetaType<QQmlPropertyMap*>();


    InstrumentClusterModule::registerTypes();
}

InstrumentClusterBackend::~InstrumentClusterBackend()
{
}


void InstrumentClusterBackend::initialize()
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "initialize", void);
    Q_EMIT speedChanged(m_speed);
    Q_EMIT rpmChanged(m_rpm);
    Q_EMIT fuelChanged(m_fuel);
    Q_EMIT temperatureChanged(m_temperature);
    Q_EMIT systemTypeChanged(m_systemType);
    Q_EMIT currentWarningChanged(m_currentWarning);


    Q_EMIT initializationDone();
}


int InstrumentClusterBackend::speed() const
{
    return m_speed;
}
int InstrumentClusterBackend::rpm() const
{
    return m_rpm;
}
qreal InstrumentClusterBackend::fuel() const
{
    return m_fuel;
}
qreal InstrumentClusterBackend::temperature() const
{
    return m_temperature;
}
InstrumentClusterModule::SystemType InstrumentClusterBackend::systemType() const
{
    return m_systemType;
}
Warning InstrumentClusterBackend::currentWarning() const
{
    return m_currentWarning;
}

void InstrumentClusterBackend::setSpeed(int speed)
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "setSpeed", void, speed);

    if (m_speed == speed)
        return;
    m_speed = speed;
    Q_EMIT speedChanged(m_speed);
}

void InstrumentClusterBackend::setRpm(int rpm)
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "setRpm", void, rpm);

    if (m_rpm == rpm)
        return;
    m_rpm = rpm;
    Q_EMIT rpmChanged(m_rpm);
}

void InstrumentClusterBackend::setFuel(qreal fuel)
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "setFuel", void, fuel);

    if (m_fuel == fuel)
        return;
    m_fuel = fuel;
    Q_EMIT fuelChanged(m_fuel);
}

void InstrumentClusterBackend::setTemperature(qreal temperature)
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "setTemperature", void, temperature);

    if (m_temperature == temperature)
        return;
    m_temperature = temperature;
    Q_EMIT temperatureChanged(m_temperature);
}

void InstrumentClusterBackend::setSystemType(InstrumentClusterModule::SystemType systemType)
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "setSystemType", void, systemType);

    if (m_systemType == systemType)
        return;
    m_systemType = systemType;
    Q_EMIT systemTypeChanged(m_systemType);
}

void InstrumentClusterBackend::setCurrentWarning(const Warning &currentWarning)
{
    QIVI_SIMULATION_TRY_CALL(InstrumentClusterBackend, "setCurrentWarning", void, currentWarning);

    if (m_currentWarning == currentWarning)
        return;
    m_currentWarning = currentWarning;
    Q_EMIT currentWarningChanged(m_currentWarning);
}



QT_END_NAMESPACE
