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

#include "getassignmentresponse.h"
#include "getassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  GetAssignmentResponse
 *
 * @brief  Handles MTurk GetAssignment responses.
 *
 * @see    MTurkClient::getAssignment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAssignmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetAssignmentResponsePrivate(this), parent)
{
    setRequest(new GetAssignmentRequest(request));
    setReply(reply);
}

const GetAssignmentRequest * GetAssignmentResponse::request() const
{
    Q_D(const GetAssignmentResponse);
    return static_cast<const GetAssignmentRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk GetAssignment response.
 *
 * @param  response  Response to parse.
 */
void GetAssignmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAssignmentResponsePrivate
 *
 * @brief  Private implementation for GetAssignmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAssignmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAssignmentResponse instance.
 */
GetAssignmentResponsePrivate::GetAssignmentResponsePrivate(
    GetAssignmentQueueResponse * const q) : GetAssignmentPrivate(q)
{

}

/**
 * @brief  Parse an MTurk GetAssignmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAssignmentResponsePrivate::GetAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssignmentResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
