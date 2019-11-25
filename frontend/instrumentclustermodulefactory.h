/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTERMODULEFACTORY_H_
#define INSTRUMENTCLUSTERMODULEFACTORY_H_

#include "instrumentclustermodule.h"
#include <QObject>

#include "warning.h"

QT_BEGIN_NAMESPACE

class Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT InstrumentClusterModuleFactory : public InstrumentClusterModule
{
    Q_OBJECT

public:
    InstrumentClusterModuleFactory(QObject *parent = nullptr);

    Q_INVOKABLE Warning warning() const;
    Q_INVOKABLE Warning warning(const QString &color, const QString &text, const QString &icon) const;
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTERMODULEFACTORY_H_
