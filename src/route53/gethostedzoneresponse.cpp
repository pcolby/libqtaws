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

#include "gethostedzoneresponse.h"
#include "gethostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetHostedZoneResponse
 *
 * @brief  Handles Route53 GetHostedZone responses.
 *
 * @see    Route53Client::getHostedZone
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHostedZoneResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneRequest(request));
    setReply(reply);
}

const GetHostedZoneRequest * GetHostedZoneResponse::request() const
{
    Q_D(const GetHostedZoneResponse);
    return static_cast<const GetHostedZoneRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHostedZone response.
 *
 * @param  response  Response to parse.
 */
void GetHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHostedZoneResponsePrivate
 *
 * @brief  Private implementation for GetHostedZoneResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHostedZoneResponse instance.
 */
GetHostedZoneResponsePrivate::GetHostedZoneResponsePrivate(
    GetHostedZoneQueueResponse * const q) : GetHostedZonePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHostedZoneResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHostedZoneResponsePrivate::GetHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS