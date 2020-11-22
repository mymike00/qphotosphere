#include <QQmlExtensionPlugin>
#include <QDebug>
#include "qphotosphere.h"
#include "plugin.h"




    void PhotoSphere::registerTypes(const char *uri)
    {
        Q_ASSERT(uri == QLatin1String("PhotoSphere"));
        qmlRegisterType<QmlPhotoSphere>(uri, 1, 0, "PhotoSphere");
    }


