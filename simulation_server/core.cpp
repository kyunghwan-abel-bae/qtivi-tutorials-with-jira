/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/



#include "core.h"
#include "instrumentclustermodule.h"
#include <QCoreApplication>
#include <QSettings>

QT_BEGIN_NAMESPACE

Core *Core::s_instance(nullptr);

Core::Core(QObject *parent)
    : QObject(parent)
    , m_host(nullptr)
{
    init();
}

Core::~Core()
{
}

void Core::init()
{
    InstrumentClusterModule::registerTypes();
    QString configPath(QStringLiteral("./server.conf"));
    if (qEnvironmentVariableIsSet("SERVER_CONF_PATH"))
        configPath = QString::fromLocal8Bit(qgetenv("SERVER_CONF_PATH"));
    else
        qDebug() << "Environment variable SERVER_CONF_PATH not defined, using " << configPath;
    QSettings settings(configPath, QSettings::IniFormat);
    settings.beginGroup(QStringLiteral("instrumentcluster"));
    QUrl url = QUrl(settings.value(QStringLiteral("Registry"), QStringLiteral("local:instrumentcluster")).toString());
    m_host = new QRemoteObjectRegistryHost(url);
    qDebug() << "registry at: " << m_host->registryUrl().toString();
    connect(m_host, &QRemoteObjectNode::error, this, &Core::reportError);
}

Core *Core::instance()
{
    if (!s_instance)
        s_instance = new Core(QCoreApplication::instance());
    Q_ASSERT(s_instance);
    return s_instance;
}

QRemoteObjectRegistryHost *Core::host() const
{
    Q_ASSERT(m_host);
    return m_host;
}

void Core::reportError(QRemoteObjectNode::ErrorCode code) const
{
    qWarning() << "QRemoteObjects Error: " << code;
}

QT_END_NAMESPACE
