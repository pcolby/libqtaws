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

#include "getautomationexecutionresponse.h"
#include "getautomationexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetAutomationExecutionResponse
 *
 * @brief  Handles SSM GetAutomationExecution responses.
 *
 * @see    SSMClient::getAutomationExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAutomationExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetAutomationExecutionResponsePrivate(this), parent)
{
    setRequest(new GetAutomationExecutionRequest(request));
    setReply(reply);
}

const GetAutomationExecutionRequest * GetAutomationExecutionResponse::request() const
{
    Q_D(const GetAutomationExecutionResponse);
    return static_cast<const GetAutomationExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetAutomationExecution response.
 *
 * @param  response  Response to parse.
 */
void GetAutomationExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAutomationExecutionResponsePrivate
 *
 * @brief  Private implementation for GetAutomationExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAutomationExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAutomationExecutionResponse instance.
 */
GetAutomationExecutionResponsePrivate::GetAutomationExecutionResponsePrivate(
    GetAutomationExecutionQueueResponse * const q) : GetAutomationExecutionPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetAutomationExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAutomationExecutionResponsePrivate::GetAutomationExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAutomationExecutionResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
