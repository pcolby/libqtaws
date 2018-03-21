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

#include "describeworkspacebundlesrequest.h"
#include "describeworkspacebundlesrequest_p.h"
#include "describeworkspacebundlesresponse.h"
#include "workspacesrequest_p.h"

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspaceBundlesRequest
 *
 * @brief  Implements WorkSpaces DescribeWorkspaceBundles requests.
 *
 * @see    WorkSpacesClient::describeWorkspaceBundles
 */

/**
 * @brief  Constructs a new DescribeWorkspaceBundlesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspaceBundlesResponse::DescribeWorkspaceBundlesResponse(

/**
 * @brief  Constructs a new DescribeWorkspaceBundlesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeWorkspaceBundlesRequest::DescribeWorkspaceBundlesRequest(const DescribeWorkspaceBundlesRequest &other)
    : WorkSpacesRequest(new DescribeWorkspaceBundlesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeWorkspaceBundlesRequest object.
 */
DescribeWorkspaceBundlesRequest::DescribeWorkspaceBundlesRequest()
    : WorkSpacesRequest(new DescribeWorkspaceBundlesRequestPrivate(WorkSpacesRequest::DescribeWorkspaceBundlesAction, this))
{

}

bool DescribeWorkspaceBundlesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeWorkspaceBundlesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeWorkspaceBundlesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkSpacesClient::send
 */
AwsAbstractResponse * DescribeWorkspaceBundlesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceBundlesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeWorkspaceBundlesRequestPrivate
 *
 * @brief  Private implementation for DescribeWorkspaceBundlesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspaceBundlesRequestPrivate object.
 *
 * @param  action  WorkSpaces action being performed.
 * @param  q       Pointer to this object's public DescribeWorkspaceBundlesRequest instance.
 */
DescribeWorkspaceBundlesRequestPrivate::DescribeWorkspaceBundlesRequestPrivate(
    const WorkSpacesRequest::Action action, DescribeWorkspaceBundlesRequest * const q)
    : DescribeWorkspaceBundlesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspaceBundlesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceBundlesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeWorkspaceBundlesRequest instance.
 */
DescribeWorkspaceBundlesRequestPrivate::DescribeWorkspaceBundlesRequestPrivate(
    const DescribeWorkspaceBundlesRequestPrivate &other, DescribeWorkspaceBundlesRequest * const q)
    : DescribeWorkspaceBundlesPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace AWS