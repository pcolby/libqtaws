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

#ifndef QTAWS_ADMINUSERGLOBALSIGNOUTRESPONSE_H
#define QTAWS_ADMINUSERGLOBALSIGNOUTRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminuserglobalsignoutrequest.h"

namespace AWS {

namespace CognitoIdentityProvider {

class AdminUserGlobalSignOutResponsePrivate;

class QTAWS_EXPORT AdminUserGlobalSignOutResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminUserGlobalSignOutResponse(const AdminUserGlobalSignOutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminUserGlobalSignOutRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AdminUserGlobalSignOutResponse)
    Q_DISABLE_COPY(AdminUserGlobalSignOutResponse)

};

} // namespace CognitoIdentityProvider
} // namespace AWS

#endif
