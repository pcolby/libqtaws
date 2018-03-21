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

#include "createdefaultvpcresponse.h"
#include "createdefaultvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateDefaultVpcResponse
 *
 * @brief  Handles EC2 CreateDefaultVpc responses.
 *
 * @see    EC2Client::createDefaultVpc
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDefaultVpcResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateDefaultVpcResponsePrivate(this), parent)
{
    setRequest(new CreateDefaultVpcRequest(request));
    setReply(reply);
}

const CreateDefaultVpcRequest * CreateDefaultVpcResponse::request() const
{
    Q_D(const CreateDefaultVpcResponse);
    return static_cast<const CreateDefaultVpcRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateDefaultVpc response.
 *
 * @param  response  Response to parse.
 */
void CreateDefaultVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDefaultVpcResponsePrivate
 *
 * @brief  Private implementation for CreateDefaultVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDefaultVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDefaultVpcResponse instance.
 */
CreateDefaultVpcResponsePrivate::CreateDefaultVpcResponsePrivate(
    CreateDefaultVpcQueueResponse * const q) : CreateDefaultVpcPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateDefaultVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDefaultVpcResponsePrivate::CreateDefaultVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDefaultVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS