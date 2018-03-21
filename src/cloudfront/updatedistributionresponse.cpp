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

#include "updatedistributionresponse.h"
#include "updatedistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  UpdateDistributionResponse
 *
 * @brief  Handles CloudFront UpdateDistribution responses.
 *
 * @see    CloudFrontClient::updateDistribution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDistributionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateDistributionResponsePrivate(this), parent)
{
    setRequest(new UpdateDistributionRequest(request));
    setReply(reply);
}

const UpdateDistributionRequest * UpdateDistributionResponse::request() const
{
    Q_D(const UpdateDistributionResponse);
    return static_cast<const UpdateDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront UpdateDistribution response.
 *
 * @param  response  Response to parse.
 */
void UpdateDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDistributionResponsePrivate
 *
 * @brief  Private implementation for UpdateDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDistributionResponse instance.
 */
UpdateDistributionResponsePrivate::UpdateDistributionResponsePrivate(
    UpdateDistributionQueueResponse * const q) : UpdateDistributionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront UpdateDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDistributionResponsePrivate::UpdateDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS