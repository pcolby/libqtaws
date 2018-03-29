/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CONFIGSERVICECLIENT_P_H
#define QTAWS_CONFIGSERVICECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace AWS {
namespace ConfigService {

class ConfigServiceClient;

class QTAWS_EXPORT ConfigServiceClientPrivate : public AwsAbstractClientPrivate {

public:
    ConfigServiceClientPrivate(ConfigServiceClient * const q);

private:
    Q_DECLARE_PUBLIC(ConfigServiceClient)
    Q_DISABLE_COPY(ConfigServiceClientPrivate)

};

} // namespace ConfigService
} // namespace AWS

#endif
