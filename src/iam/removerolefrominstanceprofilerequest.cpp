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

#include "removerolefrominstanceprofilerequest.h"
#include "removerolefrominstanceprofilerequest_p.h"
#include "removerolefrominstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  RemoveRoleFromInstanceProfileRequest
 *
 * @brief  Implements IAM RemoveRoleFromInstanceProfile requests.
 *
 * @see    IAMClient::removeRoleFromInstanceProfile
 */

/**
 * @brief  Constructs a new RemoveRoleFromInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveRoleFromInstanceProfileResponse::RemoveRoleFromInstanceProfileResponse(

/**
 * @brief  Constructs a new RemoveRoleFromInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveRoleFromInstanceProfileRequest::RemoveRoleFromInstanceProfileRequest(const RemoveRoleFromInstanceProfileRequest &other)
    : IAMRequest(new RemoveRoleFromInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveRoleFromInstanceProfileRequest object.
 */
RemoveRoleFromInstanceProfileRequest::RemoveRoleFromInstanceProfileRequest()
    : IAMRequest(new RemoveRoleFromInstanceProfileRequestPrivate(IAMRequest::RemoveRoleFromInstanceProfileAction, this))
{

}

bool RemoveRoleFromInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveRoleFromInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveRoleFromInstanceProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * RemoveRoleFromInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new RemoveRoleFromInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveRoleFromInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for RemoveRoleFromInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveRoleFromInstanceProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public RemoveRoleFromInstanceProfileRequest instance.
 */
RemoveRoleFromInstanceProfileRequestPrivate::RemoveRoleFromInstanceProfileRequestPrivate(
    const IAMRequest::Action action, RemoveRoleFromInstanceProfileRequest * const q)
    : RemoveRoleFromInstanceProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveRoleFromInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveRoleFromInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveRoleFromInstanceProfileRequest instance.
 */
RemoveRoleFromInstanceProfileRequestPrivate::RemoveRoleFromInstanceProfileRequestPrivate(
    const RemoveRoleFromInstanceProfileRequestPrivate &other, RemoveRoleFromInstanceProfileRequest * const q)
    : RemoveRoleFromInstanceProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
