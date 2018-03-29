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

#include "setdefaultpolicyversionresponse.h"
#include "setdefaultpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  SetDefaultPolicyVersionResponse
 *
 * @brief  Handles IAM SetDefaultPolicyVersion responses.
 *
 * @see    IAMClient::setDefaultPolicyVersion
 */

/**
 * @brief  Constructs a new SetDefaultPolicyVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetDefaultPolicyVersionResponse::SetDefaultPolicyVersionResponse(
        const SetDefaultPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new SetDefaultPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new SetDefaultPolicyVersionRequest(request));
    setReply(reply);
}

const SetDefaultPolicyVersionRequest * SetDefaultPolicyVersionResponse::request() const
{
    Q_D(const SetDefaultPolicyVersionResponse);
    return static_cast<const SetDefaultPolicyVersionRequest *>(d->request);
}

/**
 * @brief  Parse a IAM SetDefaultPolicyVersion response.
 *
 * @param  response  Response to parse.
 */
void SetDefaultPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetDefaultPolicyVersionResponsePrivate
 *
 * @brief  Private implementation for SetDefaultPolicyVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetDefaultPolicyVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetDefaultPolicyVersionResponse instance.
 */
SetDefaultPolicyVersionResponsePrivate::SetDefaultPolicyVersionResponsePrivate(
    SetDefaultPolicyVersionQueueResponse * const q) : SetDefaultPolicyVersionPrivate(q)
{

}

/**
 * @brief  Parse an IAM SetDefaultPolicyVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetDefaultPolicyVersionResponsePrivate::SetDefaultPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetDefaultPolicyVersionResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
