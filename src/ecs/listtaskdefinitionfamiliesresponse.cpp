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

#include "listtaskdefinitionfamiliesresponse.h"
#include "listtaskdefinitionfamiliesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  ListTaskDefinitionFamiliesResponse
 *
 * @brief  Handles ECS ListTaskDefinitionFamilies responses.
 *
 * @see    ECSClient::listTaskDefinitionFamilies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTaskDefinitionFamiliesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new ListTaskDefinitionFamiliesResponsePrivate(this), parent)
{
    setRequest(new ListTaskDefinitionFamiliesRequest(request));
    setReply(reply);
}

const ListTaskDefinitionFamiliesRequest * ListTaskDefinitionFamiliesResponse::request() const
{
    Q_D(const ListTaskDefinitionFamiliesResponse);
    return static_cast<const ListTaskDefinitionFamiliesRequest *>(d->request);
}

/**
 * @brief  Parse a ECS ListTaskDefinitionFamilies response.
 *
 * @param  response  Response to parse.
 */
void ListTaskDefinitionFamiliesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTaskDefinitionFamiliesResponsePrivate
 *
 * @brief  Private implementation for ListTaskDefinitionFamiliesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTaskDefinitionFamiliesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTaskDefinitionFamiliesResponse instance.
 */
ListTaskDefinitionFamiliesResponsePrivate::ListTaskDefinitionFamiliesResponsePrivate(
    ListTaskDefinitionFamiliesQueueResponse * const q) : ListTaskDefinitionFamiliesPrivate(q)
{

}

/**
 * @brief  Parse an ECS ListTaskDefinitionFamiliesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTaskDefinitionFamiliesResponsePrivate::ListTaskDefinitionFamiliesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTaskDefinitionFamiliesResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS