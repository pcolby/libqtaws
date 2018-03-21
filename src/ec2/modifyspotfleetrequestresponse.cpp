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

#include "modifyspotfleetrequestresponse.h"
#include "modifyspotfleetrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ModifySpotFleetRequestResponse
 *
 * @brief  Handles EC2 ModifySpotFleetRequest responses.
 *
 * @see    EC2Client::modifySpotFleetRequest
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifySpotFleetRequestResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ModifySpotFleetRequestResponsePrivate(this), parent)
{
    setRequest(new ModifySpotFleetRequestRequest(request));
    setReply(reply);
}

const ModifySpotFleetRequestRequest * ModifySpotFleetRequestResponse::request() const
{
    Q_D(const ModifySpotFleetRequestResponse);
    return static_cast<const ModifySpotFleetRequestRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ModifySpotFleetRequest response.
 *
 * @param  response  Response to parse.
 */
void ModifySpotFleetRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifySpotFleetRequestResponsePrivate
 *
 * @brief  Private implementation for ModifySpotFleetRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifySpotFleetRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifySpotFleetRequestResponse instance.
 */
ModifySpotFleetRequestResponsePrivate::ModifySpotFleetRequestResponsePrivate(
    ModifySpotFleetRequestQueueResponse * const q) : ModifySpotFleetRequestPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ModifySpotFleetRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifySpotFleetRequestResponsePrivate::ModifySpotFleetRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifySpotFleetRequestResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS