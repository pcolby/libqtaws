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

#include "deletelaunchtemplateversionsresponse.h"
#include "deletelaunchtemplateversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteLaunchTemplateVersionsResponse
 *
 * @brief  Handles EC2 DeleteLaunchTemplateVersions responses.
 *
 * @see    EC2Client::deleteLaunchTemplateVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLaunchTemplateVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteLaunchTemplateVersionsResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchTemplateVersionsRequest(request));
    setReply(reply);
}

const DeleteLaunchTemplateVersionsRequest * DeleteLaunchTemplateVersionsResponse::request() const
{
    Q_D(const DeleteLaunchTemplateVersionsResponse);
    return static_cast<const DeleteLaunchTemplateVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteLaunchTemplateVersions response.
 *
 * @param  response  Response to parse.
 */
void DeleteLaunchTemplateVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLaunchTemplateVersionsResponsePrivate
 *
 * @brief  Private implementation for DeleteLaunchTemplateVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchTemplateVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLaunchTemplateVersionsResponse instance.
 */
DeleteLaunchTemplateVersionsResponsePrivate::DeleteLaunchTemplateVersionsResponsePrivate(
    DeleteLaunchTemplateVersionsQueueResponse * const q) : DeleteLaunchTemplateVersionsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteLaunchTemplateVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLaunchTemplateVersionsResponsePrivate::DeleteLaunchTemplateVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchTemplateVersionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS