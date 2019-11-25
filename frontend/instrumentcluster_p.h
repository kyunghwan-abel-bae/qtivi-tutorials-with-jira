/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTER_INSTRUMENTCLUSTERPRIVATE_H_
#define INSTRUMENTCLUSTER_INSTRUMENTCLUSTERPRIVATE_H_

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "instrumentclustermodule.h"

#include <QtIviCore/private/qiviabstractfeature_p.h>
#include <QIviPagingModelInterface>

QT_BEGIN_NAMESPACE

class InstrumentCluster;

class InstrumentClusterPrivate : public QIviAbstractFeaturePrivate
{
public:
    InstrumentClusterPrivate(const QString &interface, InstrumentCluster *parent);

    static InstrumentClusterPrivate *get(InstrumentCluster *p);
    static const InstrumentClusterPrivate *get(const InstrumentCluster *p);
    InstrumentCluster *getParent();

    void clearToDefaults();

    void onSpeedChanged(int speed);

    bool notify(const QByteArray &propertyName, const QVariant &value) override;

    InstrumentCluster * const q_ptr;
    int m_speed;

    Q_DECLARE_PUBLIC(InstrumentCluster)
};

QT_END_NAMESPACE

#endif // INSTRUMENTCLUSTER_INSTRUMENTCLUSTERPRIVATE_H_
