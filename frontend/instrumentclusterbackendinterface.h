/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKENDINTERFACE_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKENDINTERFACE_H_

#include "instrumentclustermodule.h"


#include <QtIviCore/QIviFeatureInterface>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModelInterface>

QT_BEGIN_NAMESPACE

class Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT InstrumentClusterBackendInterface : public QIviFeatureInterface
{
    Q_OBJECT

public:
    explicit InstrumentClusterBackendInterface(QObject *parent = nullptr);
    ~InstrumentClusterBackendInterface();

    virtual void setSpeed(int speed) = 0;

Q_SIGNALS:
    void speedChanged(int speed=int(0));
};

#define InstrumentCluster_InstrumentCluster_iid ("Example.IVI.InstrumentCluster.InstrumentCluster")

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKENDINTERFACE_H_
