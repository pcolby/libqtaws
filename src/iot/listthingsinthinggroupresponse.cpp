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

#include "listthingsinthinggroupresponse.h"
#include "listthingsinthinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListThingsInThingGroupResponse
 *
 * @brief  Handles IoT ListThingsInThingGroup responses.
 *
 * @see    IoTClient::listThingsInThingGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThingsInThingGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListThingsInThingGroupResponsePrivate(this), parent)
{
    setRequest(new ListThingsInThingGroupRequest(request));
    setReply(reply);
}

const ListThingsInThingGroupRequest * ListThingsInThingGroupResponse::request() const
{
    Q_D(const ListThingsInThingGroupResponse);
    return static_cast<const ListThingsInThingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListThingsInThingGroup response.
 *
 * @param  response  Response to parse.
 */
void ListThingsInThingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThingsInThingGroupResponsePrivate
 *
 * @brief  Private implementation for ListThingsInThingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThingsInThingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThingsInThingGroupResponse instance.
 */
ListThingsInThingGroupResponsePrivate::ListThingsInThingGroupResponsePrivate(
    ListThingsInThingGroupQueueResponse * const q) : ListThingsInThingGroupPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListThingsInThingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThingsInThingGroupResponsePrivate::ListThingsInThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThingsInThingGroupResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS