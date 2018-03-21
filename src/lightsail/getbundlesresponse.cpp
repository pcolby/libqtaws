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

#include "getbundlesresponse.h"
#include "getbundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetBundlesResponse
 *
 * @brief  Handles Lightsail GetBundles responses.
 *
 * @see    LightsailClient::getBundles
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBundlesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetBundlesResponsePrivate(this), parent)
{
    setRequest(new GetBundlesRequest(request));
    setReply(reply);
}

const GetBundlesRequest * GetBundlesResponse::request() const
{
    Q_D(const GetBundlesResponse);
    return static_cast<const GetBundlesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetBundles response.
 *
 * @param  response  Response to parse.
 */
void GetBundlesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBundlesResponsePrivate
 *
 * @brief  Private implementation for GetBundlesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBundlesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBundlesResponse instance.
 */
GetBundlesResponsePrivate::GetBundlesResponsePrivate(
    GetBundlesQueueResponse * const q) : GetBundlesPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetBundlesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBundlesResponsePrivate::GetBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBundlesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS