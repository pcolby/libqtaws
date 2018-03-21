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

#include "createdeliverystreamresponse.h"
#include "createdeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Firehose {

/**
 * @class  CreateDeliveryStreamResponse
 *
 * @brief  Handles Firehose CreateDeliveryStream responses.
 *
 * @see    FirehoseClient::createDeliveryStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeliveryStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new CreateDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new CreateDeliveryStreamRequest(request));
    setReply(reply);
}

const CreateDeliveryStreamRequest * CreateDeliveryStreamResponse::request() const
{
    Q_D(const CreateDeliveryStreamResponse);
    return static_cast<const CreateDeliveryStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Firehose CreateDeliveryStream response.
 *
 * @param  response  Response to parse.
 */
void CreateDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDeliveryStreamResponsePrivate
 *
 * @brief  Private implementation for CreateDeliveryStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeliveryStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeliveryStreamResponse instance.
 */
CreateDeliveryStreamResponsePrivate::CreateDeliveryStreamResponsePrivate(
    CreateDeliveryStreamQueueResponse * const q) : CreateDeliveryStreamPrivate(q)
{

}

/**
 * @brief  Parse an Firehose CreateDeliveryStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeliveryStreamResponsePrivate::CreateDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeliveryStreamResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace AWS