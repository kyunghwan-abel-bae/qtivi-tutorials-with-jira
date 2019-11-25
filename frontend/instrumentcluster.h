/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTER_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTER_H_

#include "instrumentclustermodule.h"

#include "warning.h"

#include <QtIviCore/QIviAbstractFeature>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModel>

QT_BEGIN_NAMESPACE

class InstrumentClusterPrivate;
class InstrumentClusterBackendInterface;

class Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT InstrumentCluster : public QIviAbstractFeature
{
    Q_OBJECT
    Q_PROPERTY(int speed READ speed NOTIFY speedChanged)
    Q_PROPERTY(int rpm READ rpm NOTIFY rpmChanged)
    Q_PROPERTY(qreal fuel READ fuel NOTIFY fuelChanged)
    Q_PROPERTY(qreal temperature READ temperature NOTIFY temperatureChanged)
    Q_PROPERTY(InstrumentClusterModule::SystemType systemType READ systemType NOTIFY systemTypeChanged)
    Q_PROPERTY(Warning currentWarning READ currentWarning NOTIFY currentWarningChanged)
    Q_CLASSINFO("IviPropertyDomains", "{\"iviVersion\":\"5.14.0\"}")

public:
    explicit InstrumentCluster(QObject *parent = nullptr);
    ~InstrumentCluster();

    static void registerQmlTypes(const QString& uri, int majorVersion=1, int minorVersion=0);

    int speed() const;
    int rpm() const;
    qreal fuel() const;
    qreal temperature() const;
    InstrumentClusterModule::SystemType systemType() const;
    Warning currentWarning() const;

public Q_SLOTS:

Q_SIGNALS:
    void speedChanged(int speed);
    void rpmChanged(int rpm);
    void fuelChanged(qreal fuel);
    void temperatureChanged(qreal temperature);
    void systemTypeChanged(InstrumentClusterModule::SystemType systemType);
    void currentWarningChanged(const Warning &currentWarning);

protected:
    InstrumentClusterBackendInterface *instrumentclusterBackend() const;

    void connectToServiceObject(QIviServiceObject *service) Q_DECL_OVERRIDE;
    void clearServiceObject() Q_DECL_OVERRIDE;

private:
    Q_PRIVATE_SLOT(d_func(), void onSpeedChanged(int speed))
    Q_PRIVATE_SLOT(d_func(), void onRpmChanged(int rpm))
    Q_PRIVATE_SLOT(d_func(), void onFuelChanged(qreal fuel))
    Q_PRIVATE_SLOT(d_func(), void onTemperatureChanged(qreal temperature))
    Q_PRIVATE_SLOT(d_func(), void onSystemTypeChanged(InstrumentClusterModule::SystemType systemType))
    Q_PRIVATE_SLOT(d_func(), void onCurrentWarningChanged(const Warning &currentWarning))
    Q_DECLARE_PRIVATE(InstrumentCluster)
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTER_H_
