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

#include "getdatasourceresponse.h"
#include "getdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  GetDataSourceResponse
 *
 * @brief  Handles AppSync GetDataSource responses.
 *
 * @see    AppSyncClient::getDataSource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataSourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetDataSourceResponsePrivate(this), parent)
{
    setRequest(new GetDataSourceRequest(request));
    setReply(reply);
}

const GetDataSourceRequest * GetDataSourceResponse::request() const
{
    Q_D(const GetDataSourceResponse);
    return static_cast<const GetDataSourceRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync GetDataSource response.
 *
 * @param  response  Response to parse.
 */
void GetDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDataSourceResponsePrivate
 *
 * @brief  Private implementation for GetDataSourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataSourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDataSourceResponse instance.
 */
GetDataSourceResponsePrivate::GetDataSourceResponsePrivate(
    GetDataSourceQueueResponse * const q) : GetDataSourcePrivate(q)
{

}

/**
 * @brief  Parse an AppSync GetDataSourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDataSourceResponsePrivate::GetDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataSourceResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS