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

#include "getdeploymentgroupresponse.h"
#include "getdeploymentgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  GetDeploymentGroupResponse
 *
 * @brief  Handles CodeDeploy GetDeploymentGroup responses.
 *
 * @see    CodeDeployClient::getDeploymentGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeploymentGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetDeploymentGroupResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentGroupRequest(request));
    setReply(reply);
}

const GetDeploymentGroupRequest * GetDeploymentGroupResponse::request() const
{
    Q_D(const GetDeploymentGroupResponse);
    return static_cast<const GetDeploymentGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy GetDeploymentGroup response.
 *
 * @param  response  Response to parse.
 */
void GetDeploymentGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeploymentGroupResponsePrivate
 *
 * @brief  Private implementation for GetDeploymentGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeploymentGroupResponse instance.
 */
GetDeploymentGroupResponsePrivate::GetDeploymentGroupResponsePrivate(
    GetDeploymentGroupQueueResponse * const q) : GetDeploymentGroupPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy GetDeploymentGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeploymentGroupResponsePrivate::GetDeploymentGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentGroupResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
