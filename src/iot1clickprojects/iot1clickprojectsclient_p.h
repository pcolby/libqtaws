/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IOT1CLICKPROJECTSCLIENT_P_H
#define QTAWS_IOT1CLICKPROJECTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsClient;

class IoT1ClickProjectsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoT1ClickProjectsClientPrivate(IoT1ClickProjectsClient * const q);

private:
    Q_DECLARE_PUBLIC(IoT1ClickProjectsClient)
    Q_DISABLE_COPY(IoT1ClickProjectsClientPrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
