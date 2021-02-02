/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Copyright (C) 2017 Mapbox, Inc.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtLocation module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
****************************************************************************/

#include "qgeoserviceproviderpluginmapboxgl.h"
#include "qgeomappingmanagerenginemapboxgl.h"

#include <QtGui/QOpenGLContext>

QT_BEGIN_NAMESPACE

QGeoServiceProviderFactoryMapboxGL::QGeoServiceProviderFactoryMapboxGL()
{
}

QGeoCodingManagerEngine *QGeoServiceProviderFactoryMapboxGL::createGeocodingManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    Q_UNUSED(parameters);
    Q_UNUSED(error);
    Q_UNUSED(errorString);

    return 0;
}

QGeoMappingManagerEngine *QGeoServiceProviderFactoryMapboxGL::createMappingManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    return new QGeoMappingManagerEngineMapboxGL(parameters, error, errorString);
}

QGeoRoutingManagerEngine *QGeoServiceProviderFactoryMapboxGL::createRoutingManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    Q_UNUSED(parameters);
    Q_UNUSED(error);
    Q_UNUSED(errorString);

    return 0;
}

QPlaceManagerEngine *QGeoServiceProviderFactoryMapboxGL::createPlaceManagerEngine(
    const QVariantMap &parameters, QGeoServiceProvider::Error *error, QString *errorString) const
{
    Q_UNUSED(parameters);
    Q_UNUSED(error);
    Q_UNUSED(errorString);

    return 0;
}

QT_END_NAMESPACE
