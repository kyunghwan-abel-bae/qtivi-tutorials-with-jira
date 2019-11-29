/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef CORE_H
#define CORE_H

#include <QRemoteObjectNode>

QT_BEGIN_NAMESPACE

class Core : public QObject
{
    Q_OBJECT
private:
    Core(QObject *parent=nullptr);

public:
    virtual ~Core();
    void init();
    static Core *instance();
    QRemoteObjectRegistryHost *host() const;

private:
    void reportError(QRemoteObjectNode::ErrorCode code) const;

    static Core *s_instance;
    QRemoteObjectRegistryHost *m_host;
};

QT_END_NAMESPACE

#endif
