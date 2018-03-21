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

#include "updatenetworkprofilerequest.h"
#include "updatenetworkprofilerequest_p.h"
#include "updatenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  UpdateNetworkProfileRequest
 *
 * @brief  Implements DeviceFarm UpdateNetworkProfile requests.
 *
 * @see    DeviceFarmClient::updateNetworkProfile
 */

/**
 * @brief  Constructs a new UpdateNetworkProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNetworkProfileResponse::UpdateNetworkProfileResponse(

/**
 * @brief  Constructs a new UpdateNetworkProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest(const UpdateNetworkProfileRequest &other)
    : DeviceFarmRequest(new UpdateNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNetworkProfileRequest object.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest()
    : DeviceFarmRequest(new UpdateNetworkProfileRequestPrivate(DeviceFarmRequest::UpdateNetworkProfileAction, this))
{

}

bool UpdateNetworkProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNetworkProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNetworkProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * UpdateNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNetworkProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateNetworkProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNetworkProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public UpdateNetworkProfileRequest instance.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateNetworkProfileRequest * const q)
    : UpdateNetworkProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNetworkProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNetworkProfileRequest instance.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const UpdateNetworkProfileRequestPrivate &other, UpdateNetworkProfileRequest * const q)
    : UpdateNetworkProfilePrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS