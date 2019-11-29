/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTERPLUGIN_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTERPLUGIN_H_

#include <QVector>
#include <QtIviCore/QIviServiceInterface>

QT_BEGIN_NAMESPACE

class InstrumentClusterPlugin : public QObject, QIviServiceInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QIviServiceInterface_iid FILE "instrumentcluster.json")
    Q_INTERFACES(QIviServiceInterface)

public:
    typedef QVector<QIviFeatureInterface *> (InterfaceBuilder)(InstrumentClusterPlugin *);

    explicit InstrumentClusterPlugin(QObject *parent = nullptr);

    QStringList interfaces() const;
    QIviFeatureInterface* interfaceInstance(const QString& interface) const;

private:
    QVector<QIviFeatureInterface *> m_interfaces;
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTERPLUGIN_H_
