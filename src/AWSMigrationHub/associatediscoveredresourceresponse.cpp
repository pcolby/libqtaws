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

#include "associatediscoveredresourceresponse.h"
#include "associatediscoveredresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MigrationHub {

/**
 * @class  AssociateDiscoveredResourceResponse
 *
 * @brief  Handles MigrationHub AssociateDiscoveredResource responses.
 *
 * @see    MigrationHubClient::associateDiscoveredResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateDiscoveredResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new AssociateDiscoveredResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateDiscoveredResourceRequest(request));
    setReply(reply);
}

const AssociateDiscoveredResourceRequest * AssociateDiscoveredResourceResponse::request() const
{
    Q_D(const AssociateDiscoveredResourceResponse);
    return static_cast<const AssociateDiscoveredResourceRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub AssociateDiscoveredResource response.
 *
 * @param  response  Response to parse.
 */
void AssociateDiscoveredResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateDiscoveredResourceResponsePrivate
 *
 * @brief  Private implementation for AssociateDiscoveredResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateDiscoveredResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateDiscoveredResourceResponse instance.
 */
AssociateDiscoveredResourceResponsePrivate::AssociateDiscoveredResourceResponsePrivate(
    AssociateDiscoveredResourceQueueResponse * const q) : AssociateDiscoveredResourcePrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub AssociateDiscoveredResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateDiscoveredResourceResponsePrivate::AssociateDiscoveredResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDiscoveredResourceResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace AWS