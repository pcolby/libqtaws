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

#include "associateconnectionwithlagresponse.h"
#include "associateconnectionwithlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  AssociateConnectionWithLagResponse
 *
 * @brief  Handles DirectConnect AssociateConnectionWithLag responses.
 *
 * @see    DirectConnectClient::associateConnectionWithLag
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateConnectionWithLagResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AssociateConnectionWithLagResponsePrivate(this), parent)
{
    setRequest(new AssociateConnectionWithLagRequest(request));
    setReply(reply);
}

const AssociateConnectionWithLagRequest * AssociateConnectionWithLagResponse::request() const
{
    Q_D(const AssociateConnectionWithLagResponse);
    return static_cast<const AssociateConnectionWithLagRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect AssociateConnectionWithLag response.
 *
 * @param  response  Response to parse.
 */
void AssociateConnectionWithLagResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateConnectionWithLagResponsePrivate
 *
 * @brief  Private implementation for AssociateConnectionWithLagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateConnectionWithLagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateConnectionWithLagResponse instance.
 */
AssociateConnectionWithLagResponsePrivate::AssociateConnectionWithLagResponsePrivate(
    AssociateConnectionWithLagQueueResponse * const q) : AssociateConnectionWithLagPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect AssociateConnectionWithLagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateConnectionWithLagResponsePrivate::AssociateConnectionWithLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateConnectionWithLagResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS