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

#include "describevolumestatusresponse.h"
#include "describevolumestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVolumeStatusResponse
 *
 * @brief  Handles EC2 DescribeVolumeStatus responses.
 *
 * @see    EC2Client::describeVolumeStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumeStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVolumeStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumeStatusRequest(request));
    setReply(reply);
}

const DescribeVolumeStatusRequest * DescribeVolumeStatusResponse::request() const
{
    Q_D(const DescribeVolumeStatusResponse);
    return static_cast<const DescribeVolumeStatusRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeVolumeStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeVolumeStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVolumeStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeVolumeStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumeStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVolumeStatusResponse instance.
 */
DescribeVolumeStatusResponsePrivate::DescribeVolumeStatusResponsePrivate(
    DescribeVolumeStatusQueueResponse * const q) : DescribeVolumeStatusPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeVolumeStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVolumeStatusResponsePrivate::DescribeVolumeStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumeStatusResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS