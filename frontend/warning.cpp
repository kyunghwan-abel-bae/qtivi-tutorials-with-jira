/****************************************************************************
** Generated from 'Example.IVI.InstrumentCluster.qface'
**
** Created by: The QFace generator (QtAS 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/


#include "warning.h"

#include <qiviqmlconversion_helper.h>

QT_BEGIN_NAMESPACE

class WarningPrivate : public QSharedData
{
public:
    WarningPrivate()
        : QSharedData()
        , m_color(QString())
        , m_text(QString())
        , m_icon(QString())
    {}

    WarningPrivate(const WarningPrivate &other)
        : QSharedData(other)
        , m_color(other.m_color)
        , m_text(other.m_text)
        , m_icon(other.m_icon)
    {}

    WarningPrivate(const QString &color, const QString &text, const QString &icon)
        : QSharedData()
        , m_color(color)
        , m_text(text)
        , m_icon(icon)
    {}

    QString m_color;
    QString m_text;
    QString m_icon;
};

/*!
    \class Warning
    \inmodule Example.IVI.InstrumentCluster


*/

Warning::Warning()
    : QIviStandardItem()
    , d(new WarningPrivate)
{
}

Warning::Warning(const Warning &rhs)
    : QIviStandardItem(rhs)
    , d(rhs.d)
{
}

Warning &Warning::operator=(const Warning &rhs)
{
    QIviStandardItem::operator=(rhs);
    if (this != &rhs)
        d.operator=(rhs.d);
    return *this;
}

Warning::Warning(const QString &color, const QString &text, const QString &icon)
    : QIviStandardItem()
    , d(new WarningPrivate(color, text, icon))
{
}

Warning::Warning(const QVariant &variant)
    : Warning()
{
    QVariant value = qtivi_convertFromJSON(variant);
    // First try to convert the values to a Map or a List
    // This is needed as it could also store a QStringList or a Hash
    if (value.canConvert(QVariant::Map))
        value.convert(QVariant::Map);
    if (value.canConvert(QVariant::List))
        value.convert(QVariant::List);

    if (value.type() == QVariant::Map) {
        QVariantMap map = value.toMap();
        if (map.contains(QStringLiteral("color")))
            d->m_color = map.value(QStringLiteral("color")).value<QString>();
        if (map.contains(QStringLiteral("text")))
            d->m_text = map.value(QStringLiteral("text")).value<QString>();
        if (map.contains(QStringLiteral("icon")))
            d->m_icon = map.value(QStringLiteral("icon")).value<QString>();
    } else if (value.type() == QVariant::List) {
        QVariantList values = value.toList();
        d->m_color = values.value(0).value<QString>();
        d->m_text = values.value(1).value<QString>();
        d->m_icon = values.value(2).value<QString>();
    }
}

/*! \internal */
Warning::~Warning()
{
}

QString Warning::type() const
{
    return QLatin1String("warning");
}


/*!
    \property Warning::color


*/
QString Warning::color() const
{
    return d->m_color;
}

void Warning::setColor(const QString &color)
{
    d->m_color = color;
}


/*!
    \property Warning::text


*/
QString Warning::text() const
{
    return d->m_text;
}

void Warning::setText(const QString &text)
{
    d->m_text = text;
}


/*!
    \property Warning::icon


*/
QString Warning::icon() const
{
    return d->m_icon;
}

void Warning::setIcon(const QString &icon)
{
    d->m_icon = icon;
}


bool operator==(const Warning &left, const Warning &right) Q_DECL_NOTHROW
{
    if (left.d == right.d)
        return true;
    return (
        left.color() == right.color() &&
        left.text() == right.text() &&
        left.icon() == right.icon() 
    );
}

bool operator!=(const Warning &left, const Warning &right) Q_DECL_NOTHROW
{
    return !(left == right);
}

QDataStream &operator<<(QDataStream &stream, const Warning &obj)
{
    stream << obj.color();
    stream << obj.text();
    stream << obj.icon();
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Warning &obj)
{
    stream >> obj.d->m_color;
    stream >> obj.d->m_text;
    stream >> obj.d->m_icon;
    return stream;
}

QDebug &operator<<(QDebug &dbg, const Warning &obj)
{
    Q_UNUSED(obj);
    dbg << "Warning";
    return dbg;
}

QT_END_NAMESPACE
