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

#include "describespotfleetinstancesrequest.h"
#include "describespotfleetinstancesrequest_p.h"
#include "describespotfleetinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSpotFleetInstancesRequest
 *
 * @brief  Implements EC2 DescribeSpotFleetInstances requests.
 *
 * @see    EC2Client::describeSpotFleetInstances
 */

/**
 * @brief  Constructs a new DescribeSpotFleetInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSpotFleetInstancesRequest::DescribeSpotFleetInstancesRequest(const DescribeSpotFleetInstancesRequest &other)
    : EC2Request(new DescribeSpotFleetInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSpotFleetInstancesRequest object.
 */
DescribeSpotFleetInstancesRequest::DescribeSpotFleetInstancesRequest()
    : EC2Request(new DescribeSpotFleetInstancesRequestPrivate(EC2Request::DescribeSpotFleetInstancesAction, this))
{

}

bool DescribeSpotFleetInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSpotFleetInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSpotFleetInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeSpotFleetInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSpotFleetInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSpotFleetInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeSpotFleetInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSpotFleetInstancesRequest instance.
 */
DescribeSpotFleetInstancesRequestPrivate::DescribeSpotFleetInstancesRequestPrivate(
    const EC2Request::Action action, DescribeSpotFleetInstancesRequest * const q)
    : DescribeSpotFleetInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotFleetInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSpotFleetInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSpotFleetInstancesRequest instance.
 */
DescribeSpotFleetInstancesRequestPrivate::DescribeSpotFleetInstancesRequestPrivate(
    const DescribeSpotFleetInstancesRequestPrivate &other, DescribeSpotFleetInstancesRequest * const q)
    : DescribeSpotFleetInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
