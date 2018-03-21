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

#include "createsegmentresponse.h"
#include "createsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  CreateSegmentResponse
 *
 * @brief  Handles Pinpoint CreateSegment responses.
 *
 * @see    PinpointClient::createSegment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSegmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateSegmentResponsePrivate(this), parent)
{
    setRequest(new CreateSegmentRequest(request));
    setReply(reply);
}

const CreateSegmentRequest * CreateSegmentResponse::request() const
{
    Q_D(const CreateSegmentResponse);
    return static_cast<const CreateSegmentRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint CreateSegment response.
 *
 * @param  response  Response to parse.
 */
void CreateSegmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSegmentResponsePrivate
 *
 * @brief  Private implementation for CreateSegmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSegmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSegmentResponse instance.
 */
CreateSegmentResponsePrivate::CreateSegmentResponsePrivate(
    CreateSegmentQueueResponse * const q) : CreateSegmentPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint CreateSegmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSegmentResponsePrivate::CreateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSegmentResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace AWS