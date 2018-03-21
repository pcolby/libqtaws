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

#include "getresourceresponse.h"
#include "getresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetResourceResponse
 *
 * @brief  Handles APIGateway GetResource responses.
 *
 * @see    APIGatewayClient::getResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetResourceResponsePrivate(this), parent)
{
    setRequest(new GetResourceRequest(request));
    setReply(reply);
}

const GetResourceRequest * GetResourceResponse::request() const
{
    Q_D(const GetResourceResponse);
    return static_cast<const GetResourceRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetResource response.
 *
 * @param  response  Response to parse.
 */
void GetResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetResourceResponsePrivate
 *
 * @brief  Private implementation for GetResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourceResponse instance.
 */
GetResourceResponsePrivate::GetResourceResponsePrivate(
    GetResourceQueueResponse * const q) : GetResourcePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourceResponsePrivate::GetResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS