/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#include "instrumentcluster.h"
#include "instrumentcluster_p.h"
#include "instrumentclusterbackendinterface.h"

#include <QQmlEngine>
#include <QIviServiceObject>
#include <QIviProxyServiceObject>

QT_BEGIN_NAMESPACE

/*!
    \class InstrumentCluster
    \inmodule Example.IVI.InstrumentCluster


*/

/*!
    \qmltype InstrumentCluster
    \instantiates InstrumentCluster
    \inqmlmodule Example.IVI.InstrumentCluster
    \inherits AbstractFeature



*/

/*! \internal */
InstrumentClusterPrivate::InstrumentClusterPrivate(const QString &interface, InstrumentCluster *parent)
    : QIviAbstractFeaturePrivate(interface, parent)
    , q_ptr(parent)
    , m_speed(int(0))
{
    m_supportsPropertyOverriding = true;
}

/*! \internal */
InstrumentClusterPrivate *InstrumentClusterPrivate::get(InstrumentCluster *v)
{
    return reinterpret_cast<InstrumentClusterPrivate *>(v->d_ptr.data());
}

/*! \internal */
const InstrumentClusterPrivate *InstrumentClusterPrivate::get(const InstrumentCluster *v)
{
    return reinterpret_cast<const InstrumentClusterPrivate *>(v->d_ptr.data());
}

/*! \internal */
InstrumentCluster *InstrumentClusterPrivate::getParent()
{
    return q_ptr;
}

/*! \internal */
void InstrumentClusterPrivate::clearToDefaults()
{
    onSpeedChanged(int(0));
}

/*! \internal */
void InstrumentClusterPrivate::onSpeedChanged(int speed)
{
    if (m_speed != speed) {
        auto q = getParent();
        m_speed = speed;
        Q_EMIT q->speedChanged(speed);
    }
}


bool InstrumentClusterPrivate::notify(const QByteArray &propertyName, const QVariant &value)
{
    auto q = getParent();
    if (propertyName == QByteArray("speed")) {
        Q_EMIT q->speedChanged(value.value<int>());
        return true;
    }
    return QIviAbstractFeaturePrivate::notify(propertyName, value);
}

/*!
    Default constructs an instance of InstrumentCluster.
*/
InstrumentCluster::InstrumentCluster(QObject *parent)
    : QIviAbstractFeature(*new InstrumentClusterPrivate(QLatin1String(InstrumentCluster_InstrumentCluster_iid), this), parent)
{
}

/*! \internal */
InstrumentCluster::~InstrumentCluster()
{
}

/*! \internal */
void InstrumentCluster::registerQmlTypes(const QString& uri, int majorVersion, int minorVersion)
{
    qmlRegisterType<InstrumentCluster>(uri.toLatin1(), majorVersion, minorVersion, "InstrumentCluster");
}


/*!
    \property InstrumentCluster::speed


*/

/*!
    \qmlproperty int InstrumentCluster::speed



*/
int InstrumentCluster::speed() const
{
    const auto d = InstrumentClusterPrivate::get(this);
    if (Q_UNLIKELY(d->m_propertyOverride))
        return d->m_propertyOverride->property(metaObject()->indexOfProperty("speed")).value<int>();
    return d->m_speed;
}

void InstrumentCluster::setSpeed(int speed)
{
    auto d = InstrumentClusterPrivate::get(this);
    bool forceUpdate = false;
    if (Q_UNLIKELY(d->m_propertyOverride)) {
        const int pi = metaObject()->indexOfProperty("speed");
        if (d->m_propertyOverride->isOverridden(pi)) {
            Q_EMIT speedChanged(d->m_propertyOverride->property(pi).value<int>());
            return;
        }
        forceUpdate = property("speedDirtyOverride").isValid();
        if (forceUpdate)
            setProperty("speedDirtyOverride", {});
        QVariant v = QVariant::fromValue<int>(speed);
        d->m_propertyOverride->setProperty(pi, v);
    }
    if (!forceUpdate && d->m_speed == speed)
        return;
    if (InstrumentClusterBackendInterface *backend = instrumentclusterBackend())
        backend->setSpeed(speed);
    else
        Q_EMIT speedChanged(d->m_speed);
}



/*! \internal */
void InstrumentCluster::connectToServiceObject(QIviServiceObject *serviceObject)
{
    auto d = InstrumentClusterPrivate::get(this);

    auto *backend = instrumentclusterBackend();
    if (!backend)
        return;

    QObjectPrivate::connect(backend, &InstrumentClusterBackendInterface::speedChanged,
        d, &InstrumentClusterPrivate::onSpeedChanged);

    QIviAbstractFeature::connectToServiceObject(serviceObject);
}

/*! \internal */
void InstrumentCluster::clearServiceObject()
{
    auto d = InstrumentClusterPrivate::get(this);
    d->clearToDefaults();
}

/*! \internal */
InstrumentClusterBackendInterface *InstrumentCluster::instrumentclusterBackend() const
{
    if (QIviServiceObject *so = serviceObject())
        return so->interfaceInstance<InstrumentClusterBackendInterface*>(interfaceName());
    return nullptr;
}

QT_END_NAMESPACE

#include "moc_instrumentcluster.cpp"
