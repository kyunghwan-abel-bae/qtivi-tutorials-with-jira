/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#ifndef INSTRUMENTCLUSTER_WARNING_H_
#define INSTRUMENTCLUSTER_WARNING_H_

#include "instrumentclustermodule.h"
#include <QObject>
#include <QDataStream>
#include <QDebug>

// edit by KH
//#include <QIviStandardItem>
#include <QtIviCore/QIviStandardItem>

QT_BEGIN_NAMESPACE

class WarningPrivate;

class Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT Warning : public QIviStandardItem
{
    Q_GADGET
    Q_PROPERTY(QString color READ color WRITE setColor)
    Q_PROPERTY(QString text READ text WRITE setText)
    Q_PROPERTY(QString icon READ icon WRITE setIcon)
    Q_CLASSINFO("IviPropertyDomains", "{\"iviVersion\":\"5.14.0\"}")

public:
    Q_INVOKABLE Warning();
    Q_INVOKABLE Warning(const Warning &rhs);
    Warning &operator=(const Warning &);
    Q_INVOKABLE Warning(const QString &color, const QString &text, const QString &icon);
    Q_INVOKABLE Warning(const QVariant &variant);
    ~Warning();

    QString type() const override;

    QString color() const;
    void setColor(const QString &color);
    QString text() const;
    void setText(const QString &text);
    QString icon() const;
    void setIcon(const QString &icon);

private:
    QSharedDataPointer<WarningPrivate> d;
    friend Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT bool operator==(const Warning &left, const Warning &right) Q_DECL_NOTHROW;
    friend Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT QDataStream &operator>>(QDataStream &stream, Warning &obj);
};
Q_DECLARE_TYPEINFO(Warning, Q_MOVABLE_TYPE);

Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT bool operator==(const Warning &left, const Warning &right) Q_DECL_NOTHROW;
Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT bool operator!=(const Warning &left, const Warning &right) Q_DECL_NOTHROW;

Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT QDataStream &operator<<(QDataStream &stream, const Warning &obj);
Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT QDataStream &operator>>(QDataStream &stream, Warning &obj);

Q_EXAMPLE_IVI_INSTRUMENTCLUSTER_EXPORT QDebug &operator<<(QDebug &dbg, const Warning &obj);

QT_END_NAMESPACE

Q_DECLARE_METATYPE(Warning)

#endif // INSTRUMENTCLUSTER_WARNING_H_
