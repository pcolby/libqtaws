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

#include "describescalingactivitiesrequest.h"
#include "describescalingactivitiesrequest_p.h"
#include "describescalingactivitiesresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeScalingActivitiesRequest
 *
 * @brief  Implements AutoScaling DescribeScalingActivities requests.
 *
 * @see    AutoScalingClient::describeScalingActivities
 */

/**
 * @brief  Constructs a new DescribeScalingActivitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeScalingActivitiesResponse::DescribeScalingActivitiesResponse(

/**
 * @brief  Constructs a new DescribeScalingActivitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest(const DescribeScalingActivitiesRequest &other)
    : AutoScalingRequest(new DescribeScalingActivitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeScalingActivitiesRequest object.
 */
DescribeScalingActivitiesRequest::DescribeScalingActivitiesRequest()
    : AutoScalingRequest(new DescribeScalingActivitiesRequestPrivate(AutoScalingRequest::DescribeScalingActivitiesAction, this))
{

}

bool DescribeScalingActivitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeScalingActivitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScalingActivitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DescribeScalingActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingActivitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeScalingActivitiesRequestPrivate
 *
 * @brief  Private implementation for DescribeScalingActivitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingActivitiesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeScalingActivitiesRequest instance.
 */
DescribeScalingActivitiesRequestPrivate::DescribeScalingActivitiesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeScalingActivitiesRequest * const q)
    : DescribeScalingActivitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingActivitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingActivitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScalingActivitiesRequest instance.
 */
DescribeScalingActivitiesRequestPrivate::DescribeScalingActivitiesRequestPrivate(
    const DescribeScalingActivitiesRequestPrivate &other, DescribeScalingActivitiesRequest * const q)
    : DescribeScalingActivitiesPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
