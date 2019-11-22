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
InstrumentClusterModule::InstrumentClusterModule(QObject *parent)
    : QObject(parent)
{
}

/*! \internal */
void InstrumentClusterModule::registerTypes()
{
}

/*! \internal */
void InstrumentClusterModule::registerQmlTypes(const QString& uri, int majorVersion, int minorVersion)
{
    qmlRegisterSingletonType<InstrumentClusterModule>(uri.toLatin1(), majorVersion, minorVersion,
                                        "InstrumentCluster",
                                        instrumentclustermodule_singletontype_provider);
    InstrumentCluster::registerQmlTypes(uri, majorVersion, minorVersion);
}

QT_END_NAMESPACE
