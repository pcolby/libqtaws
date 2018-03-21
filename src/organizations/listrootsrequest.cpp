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

#include "listrootsrequest.h"
#include "listrootsrequest_p.h"
#include "listrootsresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  ListRootsRequest
 *
 * @brief  Implements Organizations ListRoots requests.
 *
 * @see    OrganizationsClient::listRoots
 */

/**
 * @brief  Constructs a new ListRootsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRootsResponse::ListRootsResponse(

/**
 * @brief  Constructs a new ListRootsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRootsRequest::ListRootsRequest(const ListRootsRequest &other)
    : OrganizationsRequest(new ListRootsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRootsRequest object.
 */
ListRootsRequest::ListRootsRequest()
    : OrganizationsRequest(new ListRootsRequestPrivate(OrganizationsRequest::ListRootsAction, this))
{

}

bool ListRootsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRootsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRootsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListRootsRequest::response(QNetworkReply * const reply) const
{
    return new ListRootsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRootsRequestPrivate
 *
 * @brief  Private implementation for ListRootsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRootsRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListRootsRequest instance.
 */
ListRootsRequestPrivate::ListRootsRequestPrivate(
    const OrganizationsRequest::Action action, ListRootsRequest * const q)
    : ListRootsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRootsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRootsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRootsRequest instance.
 */
ListRootsRequestPrivate::ListRootsRequestPrivate(
    const ListRootsRequestPrivate &other, ListRootsRequest * const q)
    : ListRootsPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
