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

#include "registerrdsdbinstanceresponse.h"
#include "registerrdsdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  RegisterRdsDbInstanceResponse
 *
 * @brief  Handles OpsWorks RegisterRdsDbInstance responses.
 *
 * @see    OpsWorksClient::registerRdsDbInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterRdsDbInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new RegisterRdsDbInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterRdsDbInstanceRequest(request));
    setReply(reply);
}

const RegisterRdsDbInstanceRequest * RegisterRdsDbInstanceResponse::request() const
{
    Q_D(const RegisterRdsDbInstanceResponse);
    return static_cast<const RegisterRdsDbInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RegisterRdsDbInstance response.
 *
 * @param  response  Response to parse.
 */
void RegisterRdsDbInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterRdsDbInstanceResponsePrivate
 *
 * @brief  Private implementation for RegisterRdsDbInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterRdsDbInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterRdsDbInstanceResponse instance.
 */
RegisterRdsDbInstanceResponsePrivate::RegisterRdsDbInstanceResponsePrivate(
    RegisterRdsDbInstanceQueueResponse * const q) : RegisterRdsDbInstancePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RegisterRdsDbInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterRdsDbInstanceResponsePrivate::RegisterRdsDbInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterRdsDbInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS