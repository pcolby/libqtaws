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

#include "describeec2instancelimitsrequest.h"
#include "describeec2instancelimitsrequest_p.h"
#include "describeec2instancelimitsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeEC2InstanceLimitsRequest
 *
 * @brief  Implements GameLift DescribeEC2InstanceLimits requests.
 *
 * @see    GameLiftClient::describeEC2InstanceLimits
 */

/**
 * @brief  Constructs a new DescribeEC2InstanceLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEC2InstanceLimitsResponse::DescribeEC2InstanceLimitsResponse(

/**
 * @brief  Constructs a new DescribeEC2InstanceLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEC2InstanceLimitsRequest::DescribeEC2InstanceLimitsRequest(const DescribeEC2InstanceLimitsRequest &other)
    : GameLiftRequest(new DescribeEC2InstanceLimitsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEC2InstanceLimitsRequest object.
 */
DescribeEC2InstanceLimitsRequest::DescribeEC2InstanceLimitsRequest()
    : GameLiftRequest(new DescribeEC2InstanceLimitsRequestPrivate(GameLiftRequest::DescribeEC2InstanceLimitsAction, this))
{

}

bool DescribeEC2InstanceLimitsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEC2InstanceLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEC2InstanceLimitsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeEC2InstanceLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEC2InstanceLimitsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEC2InstanceLimitsRequestPrivate
 *
 * @brief  Private implementation for DescribeEC2InstanceLimitsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEC2InstanceLimitsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeEC2InstanceLimitsRequest instance.
 */
DescribeEC2InstanceLimitsRequestPrivate::DescribeEC2InstanceLimitsRequestPrivate(
    const GameLiftRequest::Action action, DescribeEC2InstanceLimitsRequest * const q)
    : DescribeEC2InstanceLimitsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEC2InstanceLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEC2InstanceLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEC2InstanceLimitsRequest instance.
 */
DescribeEC2InstanceLimitsRequestPrivate::DescribeEC2InstanceLimitsRequestPrivate(
    const DescribeEC2InstanceLimitsRequestPrivate &other, DescribeEC2InstanceLimitsRequest * const q)
    : DescribeEC2InstanceLimitsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS