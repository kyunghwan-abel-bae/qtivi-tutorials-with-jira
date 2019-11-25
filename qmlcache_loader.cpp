#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,1,0,0,0,1,0,0,0,
8,0,2,0,0,0,7,0,0,0,2,0,0,0,168,0,
0,0,0,0,1,0,0,0,0,0,0,0,72,0,0,0,
0,0,1,0,0,0,0,0,0,0,118,0,0,0,0,0,
1,0,0,0,0,0,0,0,20,0,0,0,0,0,1,0,
0,0,0,0,0,0,96,0,0,0,0,0,1,0,0,0,
0,0,0,0,40,0,0,0,0,0,1,0,0,0,0,0,
0,0,146,0,0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,3,0,0,120,60,0,113,0,
109,0,108,0,7,11,99,88,156,0,84,0,111,0,112,0,
46,0,113,0,109,0,108,0,13,14,132,168,28,0,82,0,
105,0,103,0,104,0,116,0,68,0,105,0,97,0,108,0,
46,0,113,0,109,0,108,0,9,8,191,244,220,0,76,0,
97,0,98,0,101,0,108,0,46,0,113,0,109,0,108,0,
8,11,191,97,156,0,70,0,117,0,101,0,108,0,46,0,
113,0,109,0,108,0,11,10,81,49,124,0,67,0,108,0,
117,0,115,0,116,0,101,0,114,0,46,0,113,0,109,0,
108,0,8,15,127,97,124,0,68,0,105,0,97,0,108,0,
46,0,113,0,109,0,108,0,12,5,40,233,124,0,76,0,
101,0,102,0,116,0,68,0,105,0,97,0,108,0,46,0,
113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _qml_LeftDial_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Dial_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Cluster_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Fuel_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Label_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_RightDial_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_Top_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/LeftDial.qml"), &QmlCacheGeneratedCode::_qml_LeftDial_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Dial.qml"), &QmlCacheGeneratedCode::_qml_Dial_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Cluster.qml"), &QmlCacheGeneratedCode::_qml_Cluster_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Fuel.qml"), &QmlCacheGeneratedCode::_qml_Fuel_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Label.qml"), &QmlCacheGeneratedCode::_qml_Label_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/RightDial.qml"), &QmlCacheGeneratedCode::_qml_RightDial_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/Top.qml"), &QmlCacheGeneratedCode::_qml_Top_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(qml_qmlcache);
    return 1;
}
