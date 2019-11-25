/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#include "instrumentclustermodule.h"
#include "instrumentclustermodulefactory.h"
#include "instrumentcluster.h"
#include <QtIviCore/QIviPendingReply>
#include <QQmlEngine>
#include <QDebug>
#include <QDataStream>

QT_BEGIN_NAMESPACE

/*! \internal */
QObject* instrumentclustermodule_singletontype_provider(QQmlEngine*, QJSEngine*)
{
    return new InstrumentClusterModuleFactory();
}

/*!
    \class InstrumentClusterModule
    \inmodule Example.IVI.InstrumentCluster

    \brief The InstrumentClusterModule class holds all the enums defined in the Example.IVI.InstrumentCluster module.
*/
/*!
    \enum InstrumentClusterModule::SystemType
    


    \value Imperial
    

    \value Metric
    

*/
InstrumentClusterModule::InstrumentClusterModule(QObject *parent)
    : QObject(parent)
{
}

/*! \internal */
InstrumentClusterModule::SystemType InstrumentClusterModule::toSystemType(quint32 v, bool *ok)
{
    if (ok)
        *ok = true;
    switch (v) {
    case 0: return Imperial;
    case 1: return Metric;
    default:
        if (ok)
            *ok = false;
        return Imperial;
    }
}

/*! \internal */
void InstrumentClusterModule::registerTypes()
{
    qRegisterMetaType<InstrumentClusterModule::SystemType>();
    qRegisterMetaTypeStreamOperators<InstrumentClusterModule::SystemType>();
    qIviRegisterPendingReplyType<InstrumentClusterModule::SystemType>();
    qRegisterMetaType<Warning>();
    qRegisterMetaTypeStreamOperators<Warning>();
    qIviRegisterPendingReplyType<Warning>();
}

/*! \internal */
void InstrumentClusterModule::registerQmlTypes(const QString& uri, int majorVersion, int minorVersion)
{
    qmlRegisterSingletonType<InstrumentClusterModule>(uri.toLatin1(), majorVersion, minorVersion,
                                        "InstrumentCluster",
                                        instrumentclustermodule_singletontype_provider);
    InstrumentCluster::registerQmlTypes(uri, majorVersion, minorVersion);
}

QDataStream &operator<<(QDataStream &out, InstrumentClusterModule::SystemType var)
{
    out << quint32(var);
    return out;
}

QDataStream &operator>>(QDataStream &in, InstrumentClusterModule::SystemType &var)
{
    bool ok;
    quint32 val;
    in >> val;
    var = InstrumentClusterModule::toSystemType(val, &ok);
    if (!ok)
        qWarning() << "Received an invalid enum value for type InstrumentClusterModule::SystemType, value =" << var;
    return in;
}

QT_END_NAMESPACE
