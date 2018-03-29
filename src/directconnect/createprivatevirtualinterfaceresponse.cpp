/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createprivatevirtualinterfaceresponse.h"
#include "createprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  CreatePrivateVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect CreatePrivateVirtualInterface responses.
 *
 * @see    DirectConnectClient::createPrivateVirtualInterface
 */

/**
 * @brief  Constructs a new CreatePrivateVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePrivateVirtualInterfaceResponse::CreatePrivateVirtualInterfaceResponse(
        const CreatePrivateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreatePrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new CreatePrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

const CreatePrivateVirtualInterfaceRequest * CreatePrivateVirtualInterfaceResponse::request() const
{
    Q_D(const CreatePrivateVirtualInterfaceResponse);
    return static_cast<const CreatePrivateVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreatePrivateVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void CreatePrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePrivateVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for CreatePrivateVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePrivateVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePrivateVirtualInterfaceResponse instance.
 */
CreatePrivateVirtualInterfaceResponsePrivate::CreatePrivateVirtualInterfaceResponsePrivate(
    CreatePrivateVirtualInterfaceQueueResponse * const q) : CreatePrivateVirtualInterfacePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreatePrivateVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePrivateVirtualInterfaceResponsePrivate::CreatePrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePrivateVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
