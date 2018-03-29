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

#include "setdefaultpolicyversionrequest.h"
#include "setdefaultpolicyversionrequest_p.h"
#include "setdefaultpolicyversionresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  SetDefaultPolicyVersionRequest
 *
 * @brief  Implements IoT SetDefaultPolicyVersion requests.
 *
 * @see    IoTClient::setDefaultPolicyVersion
 */

/**
 * @brief  Constructs a new SetDefaultPolicyVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetDefaultPolicyVersionRequest::SetDefaultPolicyVersionRequest(const SetDefaultPolicyVersionRequest &other)
    : IoTRequest(new SetDefaultPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetDefaultPolicyVersionRequest object.
 */
SetDefaultPolicyVersionRequest::SetDefaultPolicyVersionRequest()
    : IoTRequest(new SetDefaultPolicyVersionRequestPrivate(IoTRequest::SetDefaultPolicyVersionAction, this))
{

}

bool SetDefaultPolicyVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetDefaultPolicyVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetDefaultPolicyVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * SetDefaultPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new SetDefaultPolicyVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetDefaultPolicyVersionRequestPrivate
 *
 * @brief  Private implementation for SetDefaultPolicyVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetDefaultPolicyVersionRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public SetDefaultPolicyVersionRequest instance.
 */
SetDefaultPolicyVersionRequestPrivate::SetDefaultPolicyVersionRequestPrivate(
    const IoTRequest::Action action, SetDefaultPolicyVersionRequest * const q)
    : SetDefaultPolicyVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetDefaultPolicyVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetDefaultPolicyVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetDefaultPolicyVersionRequest instance.
 */
SetDefaultPolicyVersionRequestPrivate::SetDefaultPolicyVersionRequestPrivate(
    const SetDefaultPolicyVersionRequestPrivate &other, SetDefaultPolicyVersionRequest * const q)
    : SetDefaultPolicyVersionPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
