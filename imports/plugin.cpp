/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef EXAMPLE_IVI_INSTRUMENTCLUSTERQMLPLUGIN_H_
#define EXAMPLE_IVI_INSTRUMENTCLUSTERQMLPLUGIN_H_

#include <QtQml/qqmlextensionplugin.h>
#include <qqml.h>

#include "instrumentclustermodulefactory.h"

QT_BEGIN_NAMESPACE

class InstrumentClusterQmlPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
public:
    void registerTypes(const char *uri) override
    {
        Q_ASSERT(QLatin1String(uri) == QLatin1String("Example.IVI.InstrumentCluster"));
        Q_UNUSED(uri);

        InstrumentClusterModuleFactory::registerQmlTypes();
    }
};

QT_END_NAMESPACE

#include "plugin.moc"

#endif // EXAMPLE_IVI_INSTRUMENTCLUSTERQMLPLUGIN_H_

