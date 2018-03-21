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

#include "listapikeysresponse.h"
#include "listapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  ListApiKeysResponse
 *
 * @brief  Handles AppSync ListApiKeys responses.
 *
 * @see    AppSyncClient::listApiKeys
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListApiKeysResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListApiKeysResponsePrivate(this), parent)
{
    setRequest(new ListApiKeysRequest(request));
    setReply(reply);
}

const ListApiKeysRequest * ListApiKeysResponse::request() const
{
    Q_D(const ListApiKeysResponse);
    return static_cast<const ListApiKeysRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync ListApiKeys response.
 *
 * @param  response  Response to parse.
 */
void ListApiKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListApiKeysResponsePrivate
 *
 * @brief  Private implementation for ListApiKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApiKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListApiKeysResponse instance.
 */
ListApiKeysResponsePrivate::ListApiKeysResponsePrivate(
    ListApiKeysQueueResponse * const q) : ListApiKeysPrivate(q)
{

}

/**
 * @brief  Parse an AppSync ListApiKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListApiKeysResponsePrivate::ListApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApiKeysResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS