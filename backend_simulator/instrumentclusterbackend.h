/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKEND_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKEND_H_

#include <QObject>
#include <QQmlPropertyMap>
#include "instrumentclusterbackendinterface.h"


QT_BEGIN_NAMESPACE

class QIviSimulationEngine;


class InstrumentClusterBackend : public InstrumentClusterBackendInterface
{
    Q_OBJECT

    Q_PROPERTY(int speed READ speed WRITE setSpeed  NOTIFY speedChanged FINAL)
    Q_PROPERTY(int rpm READ rpm WRITE setRpm  NOTIFY rpmChanged FINAL)
    Q_PROPERTY(qreal fuel READ fuel WRITE setFuel  NOTIFY fuelChanged FINAL)
    Q_PROPERTY(qreal temperature READ temperature WRITE setTemperature  NOTIFY temperatureChanged FINAL)
    Q_PROPERTY(InstrumentClusterModule::SystemType systemType READ systemType WRITE setSystemType  NOTIFY systemTypeChanged FINAL)
    Q_PROPERTY(Warning currentWarning READ currentWarning WRITE setCurrentWarning  NOTIFY currentWarningChanged FINAL)
public:
    explicit InstrumentClusterBackend(QObject *parent = nullptr);
    explicit InstrumentClusterBackend(QIviSimulationEngine *engine, QObject *parent = nullptr);
    ~InstrumentClusterBackend();


    Q_INVOKABLE void initialize() override;

    int speed() const;
    int rpm() const;
    qreal fuel() const;
    qreal temperature() const;
    InstrumentClusterModule::SystemType systemType() const;
    Warning currentWarning() const;

public Q_SLOTS:
    void setSpeed(int speed);
    void setRpm(int rpm);
    void setFuel(qreal fuel);
    void setTemperature(qreal temperature);
    void setSystemType(InstrumentClusterModule::SystemType systemType);
    void setCurrentWarning(const Warning &currentWarning);


protected:
    int m_speed;
    int m_rpm;
    qreal m_fuel;
    qreal m_temperature;
    InstrumentClusterModule::SystemType m_systemType;
    Warning m_currentWarning;
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKEND_H_
