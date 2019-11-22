/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTERMODULE_H_
#define INSTRUMENTCLUSTERMODULE_H_

#include "instrumentclusterglobal.h"
#include <QObject>

QT_BEGIN_NAMESPACE

class Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT InstrumentClusterModule : public QObject
{
    Q_OBJECT

public:
    InstrumentClusterModule(QObject *parent=nullptr);


    static void registerTypes();
    static void registerQmlTypes(const QString& uri = QStringLiteral("Example.IVI.InstrumentCluster"), int majorVersion = 1, int minorVersion = 0);
};


QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTERMODULE_H_
