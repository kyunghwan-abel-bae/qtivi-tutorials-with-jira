/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "instrumentclusteradapter.h"
Q_LOGGING_CATEGORY(qLcROInstrumentCluster, "example.ivi.instrumentcluster.instrumentclusterbackend.remoteobjects", QtInfoMsg)

/*
* A simple QtRO Adapter which is derived from the repc generated *Source class
* Every setter/getter and signal is simply forwarded to the original backend
* Every operation is adapted to use the special PendingResult class as a return value
* to inform the client that the return value is not yet ready. Once the QIviPendingReply is ready
* the value is send with the pendingResultAvailable value
*/
InstrumentClusterQtRoAdapter::InstrumentClusterQtRoAdapter(InstrumentClusterBackend *parent)
    : InstrumentClusterSource(parent)
    , m_backend(parent)
    , m_helper(this, qLcROInstrumentCluster())
{
    connect(m_backend, &InstrumentClusterBackend::speedChanged, this, &InstrumentClusterQtRoAdapter::speedChanged);
    connect(m_backend, &InstrumentClusterBackend::rpmChanged, this, &InstrumentClusterQtRoAdapter::rpmChanged);
    connect(m_backend, &InstrumentClusterBackend::fuelChanged, this, &InstrumentClusterQtRoAdapter::fuelChanged);
    connect(m_backend, &InstrumentClusterBackend::temperatureChanged, this, &InstrumentClusterQtRoAdapter::temperatureChanged);
    connect(m_backend, &InstrumentClusterBackend::systemTypeChanged, this, &InstrumentClusterQtRoAdapter::systemTypeChanged);
    connect(m_backend, &InstrumentClusterBackend::currentWarningChanged, this, &InstrumentClusterQtRoAdapter::currentWarningChanged);
}


int InstrumentClusterQtRoAdapter::speed() const
{
    return m_backend->speed();
}
int InstrumentClusterQtRoAdapter::rpm() const
{
    return m_backend->rpm();
}
qreal InstrumentClusterQtRoAdapter::fuel() const
{
    return m_backend->fuel();
}
qreal InstrumentClusterQtRoAdapter::temperature() const
{
    return m_backend->temperature();
}
InstrumentClusterModule::SystemType InstrumentClusterQtRoAdapter::systemType() const
{
    return m_backend->systemType();
}
Warning InstrumentClusterQtRoAdapter::currentWarning() const
{
    return m_backend->currentWarning();
}


