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

#include "createstreamresponse.h"
#include "createstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Kinesis {

/**
 * @class  CreateStreamResponse
 *
 * @brief  Handles Kinesis CreateStream responses.
 *
 * @see    KinesisClient::createStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new CreateStreamResponsePrivate(this), parent)
{
    setRequest(new CreateStreamRequest(request));
    setReply(reply);
}

const CreateStreamRequest * CreateStreamResponse::request() const
{
    Q_D(const CreateStreamResponse);
    return static_cast<const CreateStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis CreateStream response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateStreamResponsePrivate
 *
 * @brief  Private implementation for CreateStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamResponse instance.
 */
CreateStreamResponsePrivate::CreateStreamResponsePrivate(
    CreateStreamQueueResponse * const q) : CreateStreamPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis CreateStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamResponsePrivate::CreateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace AWS
