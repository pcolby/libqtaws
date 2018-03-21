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

#include "enterstandbyrequest.h"
#include "enterstandbyrequest_p.h"
#include "enterstandbyresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  EnterStandbyRequest
 *
 * @brief  Implements AutoScaling EnterStandby requests.
 *
 * @see    AutoScalingClient::enterStandby
 */

/**
 * @brief  Constructs a new EnterStandbyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnterStandbyResponse::EnterStandbyResponse(

/**
 * @brief  Constructs a new EnterStandbyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnterStandbyRequest::EnterStandbyRequest(const EnterStandbyRequest &other)
    : AutoScalingRequest(new EnterStandbyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnterStandbyRequest object.
 */
EnterStandbyRequest::EnterStandbyRequest()
    : AutoScalingRequest(new EnterStandbyRequestPrivate(AutoScalingRequest::EnterStandbyAction, this))
{

}

bool EnterStandbyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnterStandbyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnterStandbyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * EnterStandbyRequest::response(QNetworkReply * const reply) const
{
    return new EnterStandbyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnterStandbyRequestPrivate
 *
 * @brief  Private implementation for EnterStandbyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnterStandbyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public EnterStandbyRequest instance.
 */
EnterStandbyRequestPrivate::EnterStandbyRequestPrivate(
    const AutoScalingRequest::Action action, EnterStandbyRequest * const q)
    : EnterStandbyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnterStandbyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnterStandbyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnterStandbyRequest instance.
 */
EnterStandbyRequestPrivate::EnterStandbyRequestPrivate(
    const EnterStandbyRequestPrivate &other, EnterStandbyRequest * const q)
    : EnterStandbyPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS