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

#include "resolveroomrequest.h"
#include "resolveroomrequest_p.h"
#include "resolveroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  ResolveRoomRequest
 *
 * @brief  Implements AlexaForBusiness ResolveRoom requests.
 *
 * @see    AlexaForBusinessClient::resolveRoom
 */

/**
 * @brief  Constructs a new ResolveRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResolveRoomResponse::ResolveRoomResponse(

/**
 * @brief  Constructs a new ResolveRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResolveRoomRequest::ResolveRoomRequest(const ResolveRoomRequest &other)
    : AlexaForBusinessRequest(new ResolveRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResolveRoomRequest object.
 */
ResolveRoomRequest::ResolveRoomRequest()
    : AlexaForBusinessRequest(new ResolveRoomRequestPrivate(AlexaForBusinessRequest::ResolveRoomAction, this))
{

}

bool ResolveRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResolveRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResolveRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * ResolveRoomRequest::response(QNetworkReply * const reply) const
{
    return new ResolveRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResolveRoomRequestPrivate
 *
 * @brief  Private implementation for ResolveRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public ResolveRoomRequest instance.
 */
ResolveRoomRequestPrivate::ResolveRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, ResolveRoomRequest * const q)
    : ResolveRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResolveRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResolveRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResolveRoomRequest instance.
 */
ResolveRoomRequestPrivate::ResolveRoomRequestPrivate(
    const ResolveRoomRequestPrivate &other, ResolveRoomRequest * const q)
    : ResolveRoomPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS