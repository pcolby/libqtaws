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

#include "deletetrailresponse.h"
#include "deletetrailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  DeleteTrailResponse
 *
 * @brief  Handles CloudTrail DeleteTrail responses.
 *
 * @see    CloudTrailClient::deleteTrail
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTrailResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new DeleteTrailResponsePrivate(this), parent)
{
    setRequest(new DeleteTrailRequest(request));
    setReply(reply);
}

const DeleteTrailRequest * DeleteTrailResponse::request() const
{
    Q_D(const DeleteTrailResponse);
    return static_cast<const DeleteTrailRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail DeleteTrail response.
 *
 * @param  response  Response to parse.
 */
void DeleteTrailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTrailResponsePrivate
 *
 * @brief  Private implementation for DeleteTrailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTrailResponse instance.
 */
DeleteTrailResponsePrivate::DeleteTrailResponsePrivate(
    DeleteTrailQueueResponse * const q) : DeleteTrailPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail DeleteTrailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTrailResponsePrivate::DeleteTrailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrailResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace AWS