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

#include "setipaddresstyperesponse.h"
#include "setipaddresstyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  SetIpAddressTypeResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 SetIpAddressType responses.
 *
 * @see    ElasticLoadBalancingv2Client::setIpAddressType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIpAddressTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new SetIpAddressTypeResponsePrivate(this), parent)
{
    setRequest(new SetIpAddressTypeRequest(request));
    setReply(reply);
}

const SetIpAddressTypeRequest * SetIpAddressTypeResponse::request() const
{
    Q_D(const SetIpAddressTypeResponse);
    return static_cast<const SetIpAddressTypeRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 SetIpAddressType response.
 *
 * @param  response  Response to parse.
 */
void SetIpAddressTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetIpAddressTypeResponsePrivate
 *
 * @brief  Private implementation for SetIpAddressTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetIpAddressTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIpAddressTypeResponse instance.
 */
SetIpAddressTypeResponsePrivate::SetIpAddressTypeResponsePrivate(
    SetIpAddressTypeQueueResponse * const q) : SetIpAddressTypePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 SetIpAddressTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIpAddressTypeResponsePrivate::SetIpAddressTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIpAddressTypeResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS