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

#include "deletetrafficpolicyinstanceresponse.h"
#include "deletetrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteTrafficPolicyInstanceResponse
 *
 * @brief  Handles Route53 DeleteTrafficPolicyInstance responses.
 *
 * @see    Route53Client::deleteTrafficPolicyInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTrafficPolicyInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

const DeleteTrafficPolicyInstanceRequest * DeleteTrafficPolicyInstanceResponse::request() const
{
    Q_D(const DeleteTrafficPolicyInstanceResponse);
    return static_cast<const DeleteTrafficPolicyInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 DeleteTrafficPolicyInstance response.
 *
 * @param  response  Response to parse.
 */
void DeleteTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTrafficPolicyInstanceResponsePrivate
 *
 * @brief  Private implementation for DeleteTrafficPolicyInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrafficPolicyInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTrafficPolicyInstanceResponse instance.
 */
DeleteTrafficPolicyInstanceResponsePrivate::DeleteTrafficPolicyInstanceResponsePrivate(
    DeleteTrafficPolicyInstanceQueueResponse * const q) : DeleteTrafficPolicyInstancePrivate(q)
{

}

/**
 * @brief  Parse an Route53 DeleteTrafficPolicyInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTrafficPolicyInstanceResponsePrivate::DeleteTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrafficPolicyInstanceResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS