/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "instrumentclusterbackend.h"

#include <QDebug>
#include <QSettings>
#include <QTimer>
#include "instrumentclustermodule.h"

Q_LOGGING_CATEGORY(qLcROInstrumentCluster, "example.ivi.instrumentcluster.instrumentclusterbackend.remoteobjects", QtInfoMsg)


QT_BEGIN_NAMESPACE


InstrumentClusterBackend::InstrumentClusterBackend(QObject *parent)
    : InstrumentClusterBackendInterface(parent)
    , m_node(nullptr)
    , m_helper(new QIviRemoteObjectReplicaHelper(qLcROInstrumentCluster(), this))
{
    InstrumentClusterModule::registerTypes();

}

InstrumentClusterBackend::~InstrumentClusterBackend()
{
    delete m_node;
}

void InstrumentClusterBackend::initialize()
{

    if (!connectToNode())
        return;

    if (m_replica->isInitialized()) {
        Q_EMIT speedChanged(m_replica->speed());
        Q_EMIT rpmChanged(m_replica->rpm());
        Q_EMIT fuelChanged(m_replica->fuel());
        Q_EMIT temperatureChanged(m_replica->temperature());
        Q_EMIT systemTypeChanged(m_replica->systemType());
        Q_EMIT currentWarningChanged(m_replica->currentWarning());
        Q_EMIT initializationDone();
    }

    QTimer::singleShot(3000, this, [this](){
        if(!m_replica->isInitialized())
            qCCritical(qLcROInstrumentCluster) << "Example.IVI.InstrumentCluster.InstrumentCluster wasn't initialized within the timeout period. Please make sure the server is running.";
    });
}




bool InstrumentClusterBackend::connectToNode()
{
    static QString configPath;
    if (configPath.isEmpty()) {
        if (qEnvironmentVariableIsSet("SERVER_CONF_PATH")) {
            configPath = QString::fromLocal8Bit(qgetenv("SERVER_CONF_PATH"));
        } else {
            configPath = QStringLiteral("./server.conf");
            qCInfo(qLcROInstrumentCluster) << "Environment variable SERVER_CONF_PATH not defined, using " << configPath;
        }
    }

    QSettings settings(configPath, QSettings::IniFormat);
    settings.beginGroup(QStringLiteral("instrumentcluster"));
    QUrl registryUrl = QUrl(settings.value(QStringLiteral("Registry"), QStringLiteral("local:instrumentcluster")).toString());
    if (m_url != registryUrl) {
        m_url = registryUrl;
        // QtRO doesn't allow to change the URL without destroying the Node
        delete m_node;
        m_node = new QRemoteObjectNode();
        if (!m_node->connectToNode(m_url)) {
            qCCritical(qLcROInstrumentCluster) << "Connection to" << m_url << "failed!";
            m_replica.reset();
            return false;
        }
        qCInfo(qLcROInstrumentCluster) << "Connecting to" << m_url;
        m_replica.reset(m_node->acquire<InstrumentClusterReplica>(QStringLiteral("Example.IVI.InstrumentCluster.InstrumentCluster")));
        setupConnections();
    }
    return true;
}

void InstrumentClusterBackend::setupConnections()
{
    connect(m_node, &QRemoteObjectNode::error, m_helper, &QIviRemoteObjectReplicaHelper::onNodeError);
    connect(m_helper, &QIviRemoteObjectReplicaHelper::errorChanged, this, &QIviFeatureInterface::errorChanged);

    connect(m_replica.data(), &QRemoteObjectReplica::stateChanged, m_helper, &QIviRemoteObjectReplicaHelper::onReplicaStateChanged);
    connect(m_replica.data(), &InstrumentClusterReplica::pendingResultAvailable, m_helper, &QIviRemoteObjectReplicaHelper::onPendingResultAvailable);
    //As the Replica is now initialized, this will trigger an update of all properties (not just the changed ones)
    connect(m_replica.data(), &QRemoteObjectReplica::initialized, this, &InstrumentClusterBackend::initialize);
    connect(m_replica.data(), &InstrumentClusterReplica::speedChanged, this, &InstrumentClusterBackend::speedChanged);
    connect(m_replica.data(), &InstrumentClusterReplica::rpmChanged, this, &InstrumentClusterBackend::rpmChanged);
    connect(m_replica.data(), &InstrumentClusterReplica::fuelChanged, this, &InstrumentClusterBackend::fuelChanged);
    connect(m_replica.data(), &InstrumentClusterReplica::temperatureChanged, this, &InstrumentClusterBackend::temperatureChanged);
    connect(m_replica.data(), &InstrumentClusterReplica::systemTypeChanged, this, &InstrumentClusterBackend::systemTypeChanged);
    connect(m_replica.data(), &InstrumentClusterReplica::currentWarningChanged, this, &InstrumentClusterBackend::currentWarningChanged);
}


QT_END_NAMESPACE
