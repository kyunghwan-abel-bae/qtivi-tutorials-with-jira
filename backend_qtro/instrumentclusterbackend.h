/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKEND_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKEND_H_

#include <QRemoteObjectNode>
#include <QIviRemoteObjectReplicaHelper>
#include "instrumentclusterbackendinterface.h"
#include "rep_instrumentcluster_replica.h"


QT_BEGIN_NAMESPACE


class InstrumentClusterBackend : public InstrumentClusterBackendInterface
{
    Q_OBJECT

public:
    explicit InstrumentClusterBackend(QObject *parent = nullptr);
    ~InstrumentClusterBackend();

    void initialize() override;

public Q_SLOTS:



protected Q_SLOTS:

protected:
    bool connectToNode();
    void setupConnections();

    QSharedPointer<InstrumentClusterReplica> m_replica;
    QRemoteObjectNode* m_node= nullptr;
    QUrl m_url;
    QHash<quint64, QIviPendingReplyBase> m_pendingReplies;
    QIviRemoteObjectReplicaHelper *m_helper;
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTERBACKEND_H_
