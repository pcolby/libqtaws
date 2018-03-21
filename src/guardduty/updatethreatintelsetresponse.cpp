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

#include "updatethreatintelsetresponse.h"
#include "updatethreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  UpdateThreatIntelSetResponse
 *
 * @brief  Handles GuardDuty UpdateThreatIntelSet responses.
 *
 * @see    GuardDutyClient::updateThreatIntelSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateThreatIntelSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UpdateThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new UpdateThreatIntelSetRequest(request));
    setReply(reply);
}

const UpdateThreatIntelSetRequest * UpdateThreatIntelSetResponse::request() const
{
    Q_D(const UpdateThreatIntelSetResponse);
    return static_cast<const UpdateThreatIntelSetRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty UpdateThreatIntelSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateThreatIntelSetResponsePrivate
 *
 * @brief  Private implementation for UpdateThreatIntelSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThreatIntelSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateThreatIntelSetResponse instance.
 */
UpdateThreatIntelSetResponsePrivate::UpdateThreatIntelSetResponsePrivate(
    UpdateThreatIntelSetQueueResponse * const q) : UpdateThreatIntelSetPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty UpdateThreatIntelSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateThreatIntelSetResponsePrivate::UpdateThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThreatIntelSetResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
