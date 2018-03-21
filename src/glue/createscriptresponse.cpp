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

#include "createscriptresponse.h"
#include "createscriptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  CreateScriptResponse
 *
 * @brief  Handles Glue CreateScript responses.
 *
 * @see    GlueClient::createScript
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateScriptResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateScriptResponsePrivate(this), parent)
{
    setRequest(new CreateScriptRequest(request));
    setReply(reply);
}

const CreateScriptRequest * CreateScriptResponse::request() const
{
    Q_D(const CreateScriptResponse);
    return static_cast<const CreateScriptRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateScript response.
 *
 * @param  response  Response to parse.
 */
void CreateScriptResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateScriptResponsePrivate
 *
 * @brief  Private implementation for CreateScriptResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateScriptResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateScriptResponse instance.
 */
CreateScriptResponsePrivate::CreateScriptResponsePrivate(
    CreateScriptQueueResponse * const q) : CreateScriptPrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateScriptResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateScriptResponsePrivate::CreateScriptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScriptResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
