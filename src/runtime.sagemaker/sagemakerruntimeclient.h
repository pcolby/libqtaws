/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SAGEMAKERRUNTIMECLIENT_H
#define QTAWS_SAGEMAKERRUNTIMECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace SageMakerRuntime {

class SageMakerRuntimeClientPrivate;
class InvokeEndpointResponse;

class QTAWS_EXPORT SageMakerRuntimeClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerRuntimeClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SageMakerRuntimeClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    InvokeEndpointResponse * invokeEndpoint(const InvokeEndpointRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerRuntimeClient)
    Q_DISABLE_COPY(SageMakerRuntimeClient)

};

} // namespace SageMakerRuntime
} // namespace AWS

#endif