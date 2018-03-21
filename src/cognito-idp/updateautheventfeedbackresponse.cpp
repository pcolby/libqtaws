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

#include "updateautheventfeedbackresponse.h"
#include "updateautheventfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  UpdateAuthEventFeedbackResponse
 *
 * @brief  Handles CognitoIdentityProvider UpdateAuthEventFeedback responses.
 *
 * @see    CognitoIdentityProviderClient::updateAuthEventFeedback
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAuthEventFeedbackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new UpdateAuthEventFeedbackResponsePrivate(this), parent)
{
    setRequest(new UpdateAuthEventFeedbackRequest(request));
    setReply(reply);
}

const UpdateAuthEventFeedbackRequest * UpdateAuthEventFeedbackResponse::request() const
{
    Q_D(const UpdateAuthEventFeedbackResponse);
    return static_cast<const UpdateAuthEventFeedbackRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider UpdateAuthEventFeedback response.
 *
 * @param  response  Response to parse.
 */
void UpdateAuthEventFeedbackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAuthEventFeedbackResponsePrivate
 *
 * @brief  Private implementation for UpdateAuthEventFeedbackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAuthEventFeedbackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAuthEventFeedbackResponse instance.
 */
UpdateAuthEventFeedbackResponsePrivate::UpdateAuthEventFeedbackResponsePrivate(
    UpdateAuthEventFeedbackQueueResponse * const q) : UpdateAuthEventFeedbackPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider UpdateAuthEventFeedbackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAuthEventFeedbackResponsePrivate::UpdateAuthEventFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAuthEventFeedbackResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS