/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#include "instrumentclustermodulefactory.h"

QT_BEGIN_NAMESPACE

/*!
    \class InstrumentClusterModuleFactory
    \inmodule Example.IVI.InstrumentCluster

    \brief The InstrumentClusterModuleFactory class provides factory methods for all structs defined in the Example.IVI.InstrumentCluster module.
*/
/*!
    \qmltype InstrumentCluster
    \instantiates InstrumentClusterModuleFactory
    \inqmlmodule Example.IVI.InstrumentCluster

    \brief The InstrumentCluster singleton holds all the enums defined in the Example.IVI.InstrumentCluster module and
    provides factory methods for all structs.

    The following enums are exported from this object:

    \section3 SystemType
    \include example.ivi.instrumentclustermodule_enum.qdocinc SystemType
*/
InstrumentClusterModuleFactory::InstrumentClusterModuleFactory(QObject *parent)
    : InstrumentClusterModule(parent)
{
}

/*!
    \qmlmethod Warning Example.IVI.InstrumentCluster::InstrumentCluster()

    Returns a default instance of Warning

    \sa Warning
*/
/*!
    Returns a default instance of Warning.

    \sa Warning
*/
Warning InstrumentClusterModuleFactory::warning() const
{
    return Warning();
}

/*!
    \qmlmethod Warning Example.IVI.InstrumentCluster::InstrumentCluster(const QString &color, const QString &text, const QString &icon)

    Returns a default instance of Warning

    \sa Warning
*/
/*!
    Returns a instance of Warning using the passed arguments.





    \sa Warning
*/
Warning InstrumentClusterModuleFactory::warning(const QString &color, const QString &text, const QString &icon) const
{
    return Warning(color, text, icon);
}


QT_END_NAMESPACE
