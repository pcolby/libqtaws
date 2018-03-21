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

#include "listactivitytypesrequest.h"
#include "listactivitytypesrequest_p.h"
#include "listactivitytypesresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  ListActivityTypesRequest
 *
 * @brief  Implements SWF ListActivityTypes requests.
 *
 * @see    SWFClient::listActivityTypes
 */

/**
 * @brief  Constructs a new ListActivityTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListActivityTypesResponse::ListActivityTypesResponse(

/**
 * @brief  Constructs a new ListActivityTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListActivityTypesRequest::ListActivityTypesRequest(const ListActivityTypesRequest &other)
    : SWFRequest(new ListActivityTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListActivityTypesRequest object.
 */
ListActivityTypesRequest::ListActivityTypesRequest()
    : SWFRequest(new ListActivityTypesRequestPrivate(SWFRequest::ListActivityTypesAction, this))
{

}

bool ListActivityTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListActivityTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListActivityTypesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * ListActivityTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListActivityTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListActivityTypesRequestPrivate
 *
 * @brief  Private implementation for ListActivityTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActivityTypesRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public ListActivityTypesRequest instance.
 */
ListActivityTypesRequestPrivate::ListActivityTypesRequestPrivate(
    const SWFRequest::Action action, ListActivityTypesRequest * const q)
    : ListActivityTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListActivityTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListActivityTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListActivityTypesRequest instance.
 */
ListActivityTypesRequestPrivate::ListActivityTypesRequestPrivate(
    const ListActivityTypesRequestPrivate &other, ListActivityTypesRequest * const q)
    : ListActivityTypesPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
