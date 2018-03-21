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

#include "deleteplacementgroupresponse.h"
#include "deleteplacementgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeletePlacementGroupResponse
 *
 * @brief  Handles EC2 DeletePlacementGroup responses.
 *
 * @see    EC2Client::deletePlacementGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePlacementGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeletePlacementGroupResponsePrivate(this), parent)
{
    setRequest(new DeletePlacementGroupRequest(request));
    setReply(reply);
}

const DeletePlacementGroupRequest * DeletePlacementGroupResponse::request() const
{
    Q_D(const DeletePlacementGroupResponse);
    return static_cast<const DeletePlacementGroupRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeletePlacementGroup response.
 *
 * @param  response  Response to parse.
 */
void DeletePlacementGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePlacementGroupResponsePrivate
 *
 * @brief  Private implementation for DeletePlacementGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlacementGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePlacementGroupResponse instance.
 */
DeletePlacementGroupResponsePrivate::DeletePlacementGroupResponsePrivate(
    DeletePlacementGroupQueueResponse * const q) : DeletePlacementGroupPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeletePlacementGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePlacementGroupResponsePrivate::DeletePlacementGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlacementGroupResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS