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
    \fn void InstrumentClusterBackendInterface::setSpeed(int speed);

    Setter for InstrumentCluster::speed.
    Sets the property \e speed to the new value passed by \a speed.


    This method is expected to emit a \l speedChanged() signal when the internal state changes
    due to this function call. The signal is even expected to be emitted if the given \a speed is out of range and no
    actual change takes place.

    \sa speedChanged()
*/

/*!
    \fn void InstrumentClusterBackendInterface::speedChanged(int speed);

    The signal is emitted when the \e speed property changed to \a speed.


    \sa setSpeed
    \sa InstrumentCluster::speed
*/

QT_END_NAMESPACE
