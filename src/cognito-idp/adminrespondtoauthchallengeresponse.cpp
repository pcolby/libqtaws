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

#include "adminrespondtoauthchallengeresponse.h"
#include "adminrespondtoauthchallengeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminRespondToAuthChallengeResponse
 *
 * @brief  Handles CognitoIdentityProvider AdminRespondToAuthChallenge responses.
 *
 * @see    CognitoIdentityProviderClient::adminRespondToAuthChallenge
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminRespondToAuthChallengeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminRespondToAuthChallengeResponsePrivate(this), parent)
{
    setRequest(new AdminRespondToAuthChallengeRequest(request));
    setReply(reply);
}

const AdminRespondToAuthChallengeRequest * AdminRespondToAuthChallengeResponse::request() const
{
    Q_D(const AdminRespondToAuthChallengeResponse);
    return static_cast<const AdminRespondToAuthChallengeRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider AdminRespondToAuthChallenge response.
 *
 * @param  response  Response to parse.
 */
void AdminRespondToAuthChallengeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AdminRespondToAuthChallengeResponsePrivate
 *
 * @brief  Private implementation for AdminRespondToAuthChallengeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminRespondToAuthChallengeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AdminRespondToAuthChallengeResponse instance.
 */
AdminRespondToAuthChallengeResponsePrivate::AdminRespondToAuthChallengeResponsePrivate(
    AdminRespondToAuthChallengeQueueResponse * const q) : AdminRespondToAuthChallengePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider AdminRespondToAuthChallengeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AdminRespondToAuthChallengeResponsePrivate::AdminRespondToAuthChallengeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminRespondToAuthChallengeResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS