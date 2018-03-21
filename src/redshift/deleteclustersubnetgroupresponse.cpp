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

#include "deleteclustersubnetgroupresponse.h"
#include "deleteclustersubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterSubnetGroupResponse
 *
 * @brief  Handles Redshift DeleteClusterSubnetGroup responses.
 *
 * @see    RedshiftClient::deleteClusterSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteClusterSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterSubnetGroupRequest(request));
    setReply(reply);
}

const DeleteClusterSubnetGroupRequest * DeleteClusterSubnetGroupResponse::request() const
{
    Q_D(const DeleteClusterSubnetGroupResponse);
    return static_cast<const DeleteClusterSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteClusterSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteClusterSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClusterSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteClusterSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClusterSubnetGroupResponse instance.
 */
DeleteClusterSubnetGroupResponsePrivate::DeleteClusterSubnetGroupResponsePrivate(
    DeleteClusterSubnetGroupQueueResponse * const q) : DeleteClusterSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteClusterSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClusterSubnetGroupResponsePrivate::DeleteClusterSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterSubnetGroupResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS