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

#include "updatesqlinjectionmatchsetresponse.h"
#include "updatesqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateSqlInjectionMatchSetResponse
 *
 * @brief  Handles WAFRegional UpdateSqlInjectionMatchSet responses.
 *
 * @see    WAFRegionalClient::updateSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSqlInjectionMatchSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateSqlInjectionMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateSqlInjectionMatchSetRequest(request));
    setReply(reply);
}

const UpdateSqlInjectionMatchSetRequest * UpdateSqlInjectionMatchSetResponse::request() const
{
    Q_D(const UpdateSqlInjectionMatchSetResponse);
    return static_cast<const UpdateSqlInjectionMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateSqlInjectionMatchSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSqlInjectionMatchSetResponsePrivate
 *
 * @brief  Private implementation for UpdateSqlInjectionMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSqlInjectionMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSqlInjectionMatchSetResponse instance.
 */
UpdateSqlInjectionMatchSetResponsePrivate::UpdateSqlInjectionMatchSetResponsePrivate(
    UpdateSqlInjectionMatchSetQueueResponse * const q) : UpdateSqlInjectionMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateSqlInjectionMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSqlInjectionMatchSetResponsePrivate::UpdateSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSqlInjectionMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS