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

#include "batchdetectdominantlanguageresponse.h"
#include "batchdetectdominantlanguageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Comprehend {

/**
 * @class  BatchDetectDominantLanguageResponse
 *
 * @brief  Handles Comprehend BatchDetectDominantLanguage responses.
 *
 * @see    ComprehendClient::batchDetectDominantLanguage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDetectDominantLanguageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new BatchDetectDominantLanguageResponsePrivate(this), parent)
{
    setRequest(new BatchDetectDominantLanguageRequest(request));
    setReply(reply);
}

const BatchDetectDominantLanguageRequest * BatchDetectDominantLanguageResponse::request() const
{
    Q_D(const BatchDetectDominantLanguageResponse);
    return static_cast<const BatchDetectDominantLanguageRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend BatchDetectDominantLanguage response.
 *
 * @param  response  Response to parse.
 */
void BatchDetectDominantLanguageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDetectDominantLanguageResponsePrivate
 *
 * @brief  Private implementation for BatchDetectDominantLanguageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDetectDominantLanguageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDetectDominantLanguageResponse instance.
 */
BatchDetectDominantLanguageResponsePrivate::BatchDetectDominantLanguageResponsePrivate(
    BatchDetectDominantLanguageQueueResponse * const q) : BatchDetectDominantLanguagePrivate(q)
{

}

/**
 * @brief  Parse an Comprehend BatchDetectDominantLanguageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDetectDominantLanguageResponsePrivate::BatchDetectDominantLanguageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDetectDominantLanguageResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace AWS