/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#include "instrumentclusterbackendinterface.h"

QT_BEGIN_NAMESPACE

/*!
    \class InstrumentClusterBackendInterface
    \inmodule Example.IVI.InstrumentCluster
    \ingroup backends
    \inherits QIviFeatureInterface
    \keyword Example.IVI.InstrumentCluster.InstrumentCluster

    \brief Backend interface for InstrumentCluster.

    The InstrumentClusterBackendInterface is the interface used by \l InstrumentCluster.

    The interface is discovered by a \l InstrumentCluster object, which connects to it and sets up
    the connections to it.

    \sa InstrumentCluster
 */
InstrumentClusterBackendInterface::InstrumentClusterBackendInterface(QObject *parent)
    : QIviFeatureInterface(parent)
{
}

InstrumentClusterBackendInterface::~InstrumentClusterBackendInterface()
{
}


/*!
    \fn void InstrumentClusterBackendInterface::speedChanged(int speed);

    The signal is emitted when the \e speed property changed to \a speed.


    \sa InstrumentCluster::speed
*/
/*!
    \fn void InstrumentClusterBackendInterface::rpmChanged(int rpm);

    The signal is emitted when the \e rpm property changed to \a rpm.


    \sa InstrumentCluster::rpm
*/
/*!
    \fn void InstrumentClusterBackendInterface::fuelChanged(qreal fuel);

    The signal is emitted when the \e fuel property changed to \a fuel.


    \sa InstrumentCluster::fuel
*/
/*!
    \fn void InstrumentClusterBackendInterface::temperatureChanged(qreal temperature);

    The signal is emitted when the \e temperature property changed to \a temperature.


    \sa InstrumentCluster::temperature
*/
/*!
    \fn void InstrumentClusterBackendInterface::systemTypeChanged(InstrumentClusterModule::SystemType systemType);

    The signal is emitted when the \e systemType property changed to \a systemType.


    \sa InstrumentCluster::systemType
*/
/*!
    \fn void InstrumentClusterBackendInterface::currentWarningChanged(const Warning &currentWarning);

    The signal is emitted when the \e currentWarning property changed to \a currentWarning.


    \sa InstrumentCluster::currentWarning
*/

QT_END_NAMESPACE
