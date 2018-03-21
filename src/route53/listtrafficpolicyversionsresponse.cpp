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

#include "listtrafficpolicyversionsresponse.h"
#include "listtrafficpolicyversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListTrafficPolicyVersionsResponse
 *
 * @brief  Handles Route53 ListTrafficPolicyVersions responses.
 *
 * @see    Route53Client::listTrafficPolicyVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrafficPolicyVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListTrafficPolicyVersionsResponsePrivate(this), parent)
{
    setRequest(new ListTrafficPolicyVersionsRequest(request));
    setReply(reply);
}

const ListTrafficPolicyVersionsRequest * ListTrafficPolicyVersionsResponse::request() const
{
    Q_D(const ListTrafficPolicyVersionsResponse);
    return static_cast<const ListTrafficPolicyVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListTrafficPolicyVersions response.
 *
 * @param  response  Response to parse.
 */
void ListTrafficPolicyVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTrafficPolicyVersionsResponsePrivate
 *
 * @brief  Private implementation for ListTrafficPolicyVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrafficPolicyVersionsResponse instance.
 */
ListTrafficPolicyVersionsResponsePrivate::ListTrafficPolicyVersionsResponsePrivate(
    ListTrafficPolicyVersionsQueueResponse * const q) : ListTrafficPolicyVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListTrafficPolicyVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrafficPolicyVersionsResponsePrivate::ListTrafficPolicyVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrafficPolicyVersionsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
