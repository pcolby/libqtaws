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

#include "setterminationprotectionrequest.h"
#include "setterminationprotectionrequest_p.h"
#include "setterminationprotectionresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  SetTerminationProtectionRequest
 *
 * @brief  Implements EMR SetTerminationProtection requests.
 *
 * @see    EMRClient::setTerminationProtection
 */

/**
 * @brief  Constructs a new SetTerminationProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTerminationProtectionResponse::SetTerminationProtectionResponse(

/**
 * @brief  Constructs a new SetTerminationProtectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetTerminationProtectionRequest::SetTerminationProtectionRequest(const SetTerminationProtectionRequest &other)
    : EMRRequest(new SetTerminationProtectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetTerminationProtectionRequest object.
 */
SetTerminationProtectionRequest::SetTerminationProtectionRequest()
    : EMRRequest(new SetTerminationProtectionRequestPrivate(EMRRequest::SetTerminationProtectionAction, this))
{

}

bool SetTerminationProtectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetTerminationProtectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetTerminationProtectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * SetTerminationProtectionRequest::response(QNetworkReply * const reply) const
{
    return new SetTerminationProtectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetTerminationProtectionRequestPrivate
 *
 * @brief  Private implementation for SetTerminationProtectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTerminationProtectionRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public SetTerminationProtectionRequest instance.
 */
SetTerminationProtectionRequestPrivate::SetTerminationProtectionRequestPrivate(
    const EMRRequest::Action action, SetTerminationProtectionRequest * const q)
    : SetTerminationProtectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetTerminationProtectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetTerminationProtectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetTerminationProtectionRequest instance.
 */
SetTerminationProtectionRequestPrivate::SetTerminationProtectionRequestPrivate(
    const SetTerminationProtectionRequestPrivate &other, SetTerminationProtectionRequest * const q)
    : SetTerminationProtectionPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS