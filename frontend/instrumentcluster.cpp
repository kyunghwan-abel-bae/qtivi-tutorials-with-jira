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
    , m_rpm(int(0))
    , m_fuel(qreal(0.0))
    , m_temperature(qreal(0.0))
    , m_systemType(InstrumentClusterModule::Imperial)
    , m_currentWarning(Warning())
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
    onRpmChanged(int(0));
    onFuelChanged(qreal(0.0));
    onTemperatureChanged(qreal(0.0));
    onSystemTypeChanged(InstrumentClusterModule::Imperial);
    onCurrentWarningChanged(Warning());
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

/*! \internal */
void InstrumentClusterPrivate::onRpmChanged(int rpm)
{
    if (m_rpm != rpm) {
        auto q = getParent();
        m_rpm = rpm;
        Q_EMIT q->rpmChanged(rpm);
    }
}

/*! \internal */
void InstrumentClusterPrivate::onFuelChanged(qreal fuel)
{
    if (m_fuel != fuel) {
        auto q = getParent();
        m_fuel = fuel;
        Q_EMIT q->fuelChanged(fuel);
    }
}

/*! \internal */
void InstrumentClusterPrivate::onTemperatureChanged(qreal temperature)
{
    if (m_temperature != temperature) {
        auto q = getParent();
        m_temperature = temperature;
        Q_EMIT q->temperatureChanged(temperature);
    }
}

/*! \internal */
void InstrumentClusterPrivate::onSystemTypeChanged(InstrumentClusterModule::SystemType systemType)
{
    if (m_systemType != systemType) {
        auto q = getParent();
        m_systemType = systemType;
        Q_EMIT q->systemTypeChanged(systemType);
    }
}

/*! \internal */
void InstrumentClusterPrivate::onCurrentWarningChanged(const Warning &currentWarning)
{
    if (m_currentWarning != currentWarning) {
        auto q = getParent();
        m_currentWarning = currentWarning;
        Q_EMIT q->currentWarningChanged(currentWarning);
    }
}


bool InstrumentClusterPrivate::notify(const QByteArray &propertyName, const QVariant &value)
{
    auto q = getParent();
    if (propertyName == QByteArray("speed")) {
        Q_EMIT q->speedChanged(value.value<int>());
        return true;
    }
    if (propertyName == QByteArray("rpm")) {
        Q_EMIT q->rpmChanged(value.value<int>());
        return true;
    }
    if (propertyName == QByteArray("fuel")) {
        Q_EMIT q->fuelChanged(value.value<qreal>());
        return true;
    }
    if (propertyName == QByteArray("temperature")) {
        Q_EMIT q->temperatureChanged(value.value<qreal>());
        return true;
    }
    if (propertyName == QByteArray("systemType")) {
        Q_EMIT q->systemTypeChanged(value.value<InstrumentClusterModule::SystemType>());
        return true;
    }
    if (propertyName == QByteArray("currentWarning")) {
        Q_EMIT q->currentWarningChanged(value.value<Warning>());
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


/*!
    \property InstrumentCluster::rpm


*/

/*!
    \qmlproperty int InstrumentCluster::rpm



*/
int InstrumentCluster::rpm() const
{
    const auto d = InstrumentClusterPrivate::get(this);
    if (Q_UNLIKELY(d->m_propertyOverride))
        return d->m_propertyOverride->property(metaObject()->indexOfProperty("rpm")).value<int>();
    return d->m_rpm;
}


/*!
    \property InstrumentCluster::fuel


*/

/*!
    \qmlproperty qreal InstrumentCluster::fuel



*/
qreal InstrumentCluster::fuel() const
{
    const auto d = InstrumentClusterPrivate::get(this);
    if (Q_UNLIKELY(d->m_propertyOverride))
        return d->m_propertyOverride->property(metaObject()->indexOfProperty("fuel")).value<qreal>();
    return d->m_fuel;
}


/*!
    \property InstrumentCluster::temperature


*/

/*!
    \qmlproperty qreal InstrumentCluster::temperature



*/
qreal InstrumentCluster::temperature() const
{
    const auto d = InstrumentClusterPrivate::get(this);
    if (Q_UNLIKELY(d->m_propertyOverride))
        return d->m_propertyOverride->property(metaObject()->indexOfProperty("temperature")).value<qreal>();
    return d->m_temperature;
}


/*!
    \property InstrumentCluster::systemType


*/

/*!
    \qmlproperty InstrumentClusterModule::SystemType InstrumentCluster::systemType



    Available values are:
    \include example.ivi.instrumentclustermodule_enum.qdocinc SystemType
*/
InstrumentClusterModule::SystemType InstrumentCluster::systemType() const
{
    const auto d = InstrumentClusterPrivate::get(this);
    if (Q_UNLIKELY(d->m_propertyOverride))
        return d->m_propertyOverride->property(metaObject()->indexOfProperty("systemType")).value<InstrumentClusterModule::SystemType>();
    return d->m_systemType;
}


/*!
    \property InstrumentCluster::currentWarning


*/

/*!
    \qmlproperty Warning InstrumentCluster::currentWarning



*/
Warning InstrumentCluster::currentWarning() const
{
    const auto d = InstrumentClusterPrivate::get(this);
    if (Q_UNLIKELY(d->m_propertyOverride))
        return d->m_propertyOverride->property(metaObject()->indexOfProperty("currentWarning")).value<Warning>();
    return d->m_currentWarning;
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
    QObjectPrivate::connect(backend, &InstrumentClusterBackendInterface::rpmChanged,
        d, &InstrumentClusterPrivate::onRpmChanged);
    QObjectPrivate::connect(backend, &InstrumentClusterBackendInterface::fuelChanged,
        d, &InstrumentClusterPrivate::onFuelChanged);
    QObjectPrivate::connect(backend, &InstrumentClusterBackendInterface::temperatureChanged,
        d, &InstrumentClusterPrivate::onTemperatureChanged);
    QObjectPrivate::connect(backend, &InstrumentClusterBackendInterface::systemTypeChanged,
        d, &InstrumentClusterPrivate::onSystemTypeChanged);
    QObjectPrivate::connect(backend, &InstrumentClusterBackendInterface::currentWarningChanged,
        d, &InstrumentClusterPrivate::onCurrentWarningChanged);

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
