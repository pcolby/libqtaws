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

#include "schedulekeydeletionresponse.h"
#include "schedulekeydeletionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KMS {

/**
 * @class  ScheduleKeyDeletionResponse
 *
 * @brief  Handles KMS ScheduleKeyDeletion responses.
 *
 * @see    KMSClient::scheduleKeyDeletion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ScheduleKeyDeletionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ScheduleKeyDeletionResponsePrivate(this), parent)
{
    setRequest(new ScheduleKeyDeletionRequest(request));
    setReply(reply);
}

const ScheduleKeyDeletionRequest * ScheduleKeyDeletionResponse::request() const
{
    Q_D(const ScheduleKeyDeletionResponse);
    return static_cast<const ScheduleKeyDeletionRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ScheduleKeyDeletion response.
 *
 * @param  response  Response to parse.
 */
void ScheduleKeyDeletionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ScheduleKeyDeletionResponsePrivate
 *
 * @brief  Private implementation for ScheduleKeyDeletionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleKeyDeletionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ScheduleKeyDeletionResponse instance.
 */
ScheduleKeyDeletionResponsePrivate::ScheduleKeyDeletionResponsePrivate(
    ScheduleKeyDeletionQueueResponse * const q) : ScheduleKeyDeletionPrivate(q)
{

}

/**
 * @brief  Parse an KMS ScheduleKeyDeletionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ScheduleKeyDeletionResponsePrivate::ScheduleKeyDeletionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScheduleKeyDeletionResponse"));
    /// @todo
}

} // namespace KMS
} // namespace AWS