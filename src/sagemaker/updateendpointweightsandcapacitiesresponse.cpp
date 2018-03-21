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

#include "updateendpointweightsandcapacitiesresponse.h"
#include "updateendpointweightsandcapacitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  UpdateEndpointWeightsAndCapacitiesResponse
 *
 * @brief  Handles SageMaker UpdateEndpointWeightsAndCapacities responses.
 *
 * @see    SageMakerClient::updateEndpointWeightsAndCapacities
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEndpointWeightsAndCapacitiesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateEndpointWeightsAndCapacitiesResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointWeightsAndCapacitiesRequest(request));
    setReply(reply);
}

const UpdateEndpointWeightsAndCapacitiesRequest * UpdateEndpointWeightsAndCapacitiesResponse::request() const
{
    Q_D(const UpdateEndpointWeightsAndCapacitiesResponse);
    return static_cast<const UpdateEndpointWeightsAndCapacitiesRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker UpdateEndpointWeightsAndCapacities response.
 *
 * @param  response  Response to parse.
 */
void UpdateEndpointWeightsAndCapacitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEndpointWeightsAndCapacitiesResponsePrivate
 *
 * @brief  Private implementation for UpdateEndpointWeightsAndCapacitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEndpointWeightsAndCapacitiesResponse instance.
 */
UpdateEndpointWeightsAndCapacitiesResponsePrivate::UpdateEndpointWeightsAndCapacitiesResponsePrivate(
    UpdateEndpointWeightsAndCapacitiesQueueResponse * const q) : UpdateEndpointWeightsAndCapacitiesPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker UpdateEndpointWeightsAndCapacitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEndpointWeightsAndCapacitiesResponsePrivate::UpdateEndpointWeightsAndCapacitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointWeightsAndCapacitiesResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS