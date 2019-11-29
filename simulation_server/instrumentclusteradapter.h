/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTERQTROADAPTER_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTERQTROADAPTER_H_

#include <QIviRemoteObjectSourceHelper>

#include "instrumentclusterbackend.h"
#include "rep_instrumentcluster_source.h"
#include "rep_pagingmodel_source.h"

QT_BEGIN_NAMESPACE

/*
* When using the templated enableRemoting method of QtRO, there is no way to specify
* the name this object is remoted as.
* This template fixes the name to the interface qualified name
*/
template <class ObjectType>
struct InstrumentClusterAddressWrapper: public InstrumentClusterSourceAPI<ObjectType> {
    InstrumentClusterAddressWrapper(ObjectType *object, const QString &name = QStringLiteral("Example.IVI.InstrumentCluster.InstrumentCluster"))
        : InstrumentClusterSourceAPI<ObjectType>(object, name)
    {}
};

class InstrumentClusterQtRoAdapter : public InstrumentClusterSource
{
    Q_OBJECT
public:
    InstrumentClusterQtRoAdapter(InstrumentClusterBackend *parent = nullptr);


    int speed() const override;
    int rpm() const override;
    qreal fuel() const override;
    qreal temperature() const override;
    InstrumentClusterModule::SystemType systemType() const override;
    Warning currentWarning() const override;

public Q_SLOTS:


private:
    InstrumentClusterBackend *m_backend;
    QIviRemoteObjectSourceHelper<InstrumentClusterQtRoAdapter> m_helper;
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTERQTROADAPTER_H_
