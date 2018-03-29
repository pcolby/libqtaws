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

#include "listprojectsrequest.h"
#include "listprojectsrequest_p.h"
#include "listprojectsresponse.h"
#include "mobilerequest_p.h"

namespace AWS {
namespace Mobile {

/**
 * @class  ListProjectsRequest
 *
 * @brief  Implements Mobile ListProjects requests.
 *
 * @see    MobileClient::listProjects
 */

/**
 * @brief  Constructs a new ListProjectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProjectsRequest::ListProjectsRequest(const ListProjectsRequest &other)
    : MobileRequest(new ListProjectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListProjectsRequest object.
 */
ListProjectsRequest::ListProjectsRequest()
    : MobileRequest(new ListProjectsRequestPrivate(MobileRequest::ListProjectsAction, this))
{

}

bool ListProjectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListProjectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProjectsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MobileClient::send
 */
AwsAbstractResponse * ListProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListProjectsRequestPrivate
 *
 * @brief  Private implementation for ListProjectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProjectsRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public ListProjectsRequest instance.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const MobileRequest::Action action, ListProjectsRequest * const q)
    : ListProjectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListProjectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProjectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProjectsRequest instance.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const ListProjectsRequestPrivate &other, ListProjectsRequest * const q)
    : ListProjectsPrivate(other, q)
{

}

} // namespace Mobile
} // namespace AWS
