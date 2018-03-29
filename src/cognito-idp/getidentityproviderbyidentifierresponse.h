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

#ifndef QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERRESPONSE_H
#define QTAWS_GETIDENTITYPROVIDERBYIDENTIFIERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getidentityproviderbyidentifierrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetIdentityProviderByIdentifierResponsePrivate;

class QTAWS_EXPORT GetIdentityProviderByIdentifierResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetIdentityProviderByIdentifierResponse(const GetIdentityProviderByIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityProviderByIdentifierRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetIdentityProviderByIdentifierResponse)
    Q_DISABLE_COPY(GetIdentityProviderByIdentifierResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
