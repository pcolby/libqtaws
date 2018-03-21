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

#include "deactivatemfadeviceresponse.h"
#include "deactivatemfadeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeactivateMFADeviceResponse
 *
 * @brief  Handles IAM DeactivateMFADevice responses.
 *
 * @see    IAMClient::deactivateMFADevice
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeactivateMFADeviceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeactivateMFADeviceResponsePrivate(this), parent)
{
    setRequest(new DeactivateMFADeviceRequest(request));
    setReply(reply);
}

const DeactivateMFADeviceRequest * DeactivateMFADeviceResponse::request() const
{
    Q_D(const DeactivateMFADeviceResponse);
    return static_cast<const DeactivateMFADeviceRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeactivateMFADevice response.
 *
 * @param  response  Response to parse.
 */
void DeactivateMFADeviceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeactivateMFADeviceResponsePrivate
 *
 * @brief  Private implementation for DeactivateMFADeviceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeactivateMFADeviceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeactivateMFADeviceResponse instance.
 */
DeactivateMFADeviceResponsePrivate::DeactivateMFADeviceResponsePrivate(
    DeactivateMFADeviceQueueResponse * const q) : DeactivateMFADevicePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeactivateMFADeviceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeactivateMFADeviceResponsePrivate::DeactivateMFADeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeactivateMFADeviceResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
