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


#include <QtIviCore/QIviAbstractFeature>
#include <QtIviCore/QIviPendingReply>
#include <QtIviCore/QIviPagingModel>

QT_BEGIN_NAMESPACE

class InstrumentClusterPrivate;
class InstrumentClusterBackendInterface;

class Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT InstrumentCluster : public QIviAbstractFeature
{
    Q_OBJECT
    Q_PROPERTY(int speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_CLASSINFO("IviPropertyDomains", "{\"iviVersion\":\"5.14.0\"}")

public:
    explicit InstrumentCluster(QObject *parent = nullptr);
    ~InstrumentCluster();

    static void registerQmlTypes(const QString& uri, int majorVersion=1, int minorVersion=0);

    int speed() const;

public Q_SLOTS:
    void setSpeed(int speed);

Q_SIGNALS:
    void speedChanged(int speed);

protected:
    InstrumentClusterBackendInterface *instrumentclusterBackend() const;

    void connectToServiceObject(QIviServiceObject *service) Q_DECL_OVERRIDE;
    void clearServiceObject() Q_DECL_OVERRIDE;

private:
    Q_PRIVATE_SLOT(d_func(), void onSpeedChanged(int speed))
    Q_DECLARE_PRIVATE(InstrumentCluster)
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTER_H_
