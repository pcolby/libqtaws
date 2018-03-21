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

#include "listattachedindicesrequest.h"
#include "listattachedindicesrequest_p.h"
#include "listattachedindicesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListAttachedIndicesRequest
 *
 * @brief  Implements CloudDirectory ListAttachedIndices requests.
 *
 * @see    CloudDirectoryClient::listAttachedIndices
 */

/**
 * @brief  Constructs a new ListAttachedIndicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedIndicesResponse::ListAttachedIndicesResponse(

/**
 * @brief  Constructs a new ListAttachedIndicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttachedIndicesRequest::ListAttachedIndicesRequest(const ListAttachedIndicesRequest &other)
    : CloudDirectoryRequest(new ListAttachedIndicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttachedIndicesRequest object.
 */
ListAttachedIndicesRequest::ListAttachedIndicesRequest()
    : CloudDirectoryRequest(new ListAttachedIndicesRequestPrivate(CloudDirectoryRequest::ListAttachedIndicesAction, this))
{

}

bool ListAttachedIndicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttachedIndicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttachedIndicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListAttachedIndicesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedIndicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttachedIndicesRequestPrivate
 *
 * @brief  Private implementation for ListAttachedIndicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedIndicesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListAttachedIndicesRequest instance.
 */
ListAttachedIndicesRequestPrivate::ListAttachedIndicesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListAttachedIndicesRequest * const q)
    : ListAttachedIndicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedIndicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedIndicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttachedIndicesRequest instance.
 */
ListAttachedIndicesRequestPrivate::ListAttachedIndicesRequestPrivate(
    const ListAttachedIndicesRequestPrivate &other, ListAttachedIndicesRequest * const q)
    : ListAttachedIndicesPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
