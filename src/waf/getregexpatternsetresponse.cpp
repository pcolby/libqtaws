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

#include "getregexpatternsetresponse.h"
#include "getregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  GetRegexPatternSetResponse
 *
 * @brief  Handles WAF GetRegexPatternSet responses.
 *
 * @see    WAFClient::getRegexPatternSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegexPatternSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexPatternSetRequest(request));
    setReply(reply);
}

const GetRegexPatternSetRequest * GetRegexPatternSetResponse::request() const
{
    Q_D(const GetRegexPatternSetResponse);
    return static_cast<const GetRegexPatternSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetRegexPatternSet response.
 *
 * @param  response  Response to parse.
 */
void GetRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRegexPatternSetResponsePrivate
 *
 * @brief  Private implementation for GetRegexPatternSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegexPatternSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegexPatternSetResponse instance.
 */
GetRegexPatternSetResponsePrivate::GetRegexPatternSetResponsePrivate(
    GetRegexPatternSetQueueResponse * const q) : GetRegexPatternSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF GetRegexPatternSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegexPatternSetResponsePrivate::GetRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
