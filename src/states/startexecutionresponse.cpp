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

#include "startexecutionresponse.h"
#include "startexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  StartExecutionResponse
 *
 * @brief  Handles SFN StartExecution responses.
 *
 * @see    SFNClient::startExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new StartExecutionResponsePrivate(this), parent)
{
    setRequest(new StartExecutionRequest(request));
    setReply(reply);
}

const StartExecutionRequest * StartExecutionResponse::request() const
{
    Q_D(const StartExecutionResponse);
    return static_cast<const StartExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SFN StartExecution response.
 *
 * @param  response  Response to parse.
 */
void StartExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartExecutionResponsePrivate
 *
 * @brief  Private implementation for StartExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartExecutionResponse instance.
 */
StartExecutionResponsePrivate::StartExecutionResponsePrivate(
    StartExecutionQueueResponse * const q) : StartExecutionPrivate(q)
{

}

/**
 * @brief  Parse an SFN StartExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartExecutionResponsePrivate::StartExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartExecutionResponse"));
    /// @todo
}

} // namespace SFN
} // namespace AWS