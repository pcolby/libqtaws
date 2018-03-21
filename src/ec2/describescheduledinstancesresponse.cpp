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

#include "describescheduledinstancesresponse.h"
#include "describescheduledinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeScheduledInstancesResponse
 *
 * @brief  Handles EC2 DescribeScheduledInstances responses.
 *
 * @see    EC2Client::describeScheduledInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScheduledInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeScheduledInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduledInstancesRequest(request));
    setReply(reply);
}

const DescribeScheduledInstancesRequest * DescribeScheduledInstancesResponse::request() const
{
    Q_D(const DescribeScheduledInstancesResponse);
    return static_cast<const DescribeScheduledInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeScheduledInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeScheduledInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeScheduledInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeScheduledInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeScheduledInstancesResponse instance.
 */
DescribeScheduledInstancesResponsePrivate::DescribeScheduledInstancesResponsePrivate(
    DescribeScheduledInstancesQueueResponse * const q) : DescribeScheduledInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeScheduledInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeScheduledInstancesResponsePrivate::DescribeScheduledInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduledInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS