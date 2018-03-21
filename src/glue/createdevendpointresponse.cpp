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

#include "createdevendpointresponse.h"
#include "createdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  CreateDevEndpointResponse
 *
 * @brief  Handles Glue CreateDevEndpoint responses.
 *
 * @see    GlueClient::createDevEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDevEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateDevEndpointRequest(request));
    setReply(reply);
}

const CreateDevEndpointRequest * CreateDevEndpointResponse::request() const
{
    Q_D(const CreateDevEndpointResponse);
    return static_cast<const CreateDevEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateDevEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDevEndpointResponsePrivate
 *
 * @brief  Private implementation for CreateDevEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDevEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDevEndpointResponse instance.
 */
CreateDevEndpointResponsePrivate::CreateDevEndpointResponsePrivate(
    CreateDevEndpointQueueResponse * const q) : CreateDevEndpointPrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateDevEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDevEndpointResponsePrivate::CreateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDevEndpointResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
