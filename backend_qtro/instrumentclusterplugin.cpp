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

QT_BEGIN_NAMESPACE

InstrumentClusterPlugin::InstrumentClusterPlugin(QObject *parent)
    : QObject(parent)
{
    m_interfaces << new InstrumentClusterBackend(this);
}

QStringList InstrumentClusterPlugin::interfaces() const
{
    QStringList list;
    list << InstrumentCluster_InstrumentCluster_iid;
    return list;
}

QIviFeatureInterface *InstrumentClusterPlugin::interfaceInstance(const QString &interface) const
{
     int index = interfaces().indexOf(interface);
     return index < 0 ? nullptr : m_interfaces.at(index);
}

QT_END_NAMESPACE
