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

#include "createbytematchsetresponse.h"
#include "createbytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateByteMatchSetResponse
 *
 * @brief  Handles WAFRegional CreateByteMatchSet responses.
 *
 * @see    WAFRegionalClient::createByteMatchSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateByteMatchSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new CreateByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateByteMatchSetRequest(request));
    setReply(reply);
}

const CreateByteMatchSetRequest * CreateByteMatchSetResponse::request() const
{
    Q_D(const CreateByteMatchSetResponse);
    return static_cast<const CreateByteMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional CreateByteMatchSet response.
 *
 * @param  response  Response to parse.
 */
void CreateByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateByteMatchSetResponsePrivate
 *
 * @brief  Private implementation for CreateByteMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateByteMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateByteMatchSetResponse instance.
 */
CreateByteMatchSetResponsePrivate::CreateByteMatchSetResponsePrivate(
    CreateByteMatchSetQueueResponse * const q) : CreateByteMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional CreateByteMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateByteMatchSetResponsePrivate::CreateByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateByteMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS