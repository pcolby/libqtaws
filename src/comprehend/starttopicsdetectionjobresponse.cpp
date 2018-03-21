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

#include "starttopicsdetectionjobresponse.h"
#include "starttopicsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Comprehend {

/**
 * @class  StartTopicsDetectionJobResponse
 *
 * @brief  Handles Comprehend StartTopicsDetectionJob responses.
 *
 * @see    ComprehendClient::startTopicsDetectionJob
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartTopicsDetectionJobResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartTopicsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartTopicsDetectionJobRequest(request));
    setReply(reply);
}

const StartTopicsDetectionJobRequest * StartTopicsDetectionJobResponse::request() const
{
    Q_D(const StartTopicsDetectionJobResponse);
    return static_cast<const StartTopicsDetectionJobRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend StartTopicsDetectionJob response.
 *
 * @param  response  Response to parse.
 */
void StartTopicsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartTopicsDetectionJobResponsePrivate
 *
 * @brief  Private implementation for StartTopicsDetectionJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTopicsDetectionJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartTopicsDetectionJobResponse instance.
 */
StartTopicsDetectionJobResponsePrivate::StartTopicsDetectionJobResponsePrivate(
    StartTopicsDetectionJobQueueResponse * const q) : StartTopicsDetectionJobPrivate(q)
{

}

/**
 * @brief  Parse an Comprehend StartTopicsDetectionJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartTopicsDetectionJobResponsePrivate::StartTopicsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTopicsDetectionJobResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace AWS