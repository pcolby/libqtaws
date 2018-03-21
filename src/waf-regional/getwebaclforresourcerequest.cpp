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

#include "getwebaclforresourcerequest.h"
#include "getwebaclforresourcerequest_p.h"
#include "getwebaclforresourceresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  GetWebACLForResourceRequest
 *
 * @brief  Implements WAFRegional GetWebACLForResource requests.
 *
 * @see    WAFRegionalClient::getWebACLForResource
 */

/**
 * @brief  Constructs a new GetWebACLForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetWebACLForResourceResponse::GetWebACLForResourceResponse(

/**
 * @brief  Constructs a new GetWebACLForResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetWebACLForResourceRequest::GetWebACLForResourceRequest(const GetWebACLForResourceRequest &other)
    : WAFRegionalRequest(new GetWebACLForResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetWebACLForResourceRequest object.
 */
GetWebACLForResourceRequest::GetWebACLForResourceRequest()
    : WAFRegionalRequest(new GetWebACLForResourceRequestPrivate(WAFRegionalRequest::GetWebACLForResourceAction, this))
{

}

bool GetWebACLForResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetWebACLForResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetWebACLForResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * GetWebACLForResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetWebACLForResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetWebACLForResourceRequestPrivate
 *
 * @brief  Private implementation for GetWebACLForResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLForResourceRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public GetWebACLForResourceRequest instance.
 */
GetWebACLForResourceRequestPrivate::GetWebACLForResourceRequestPrivate(
    const WAFRegionalRequest::Action action, GetWebACLForResourceRequest * const q)
    : GetWebACLForResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLForResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetWebACLForResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetWebACLForResourceRequest instance.
 */
GetWebACLForResourceRequestPrivate::GetWebACLForResourceRequestPrivate(
    const GetWebACLForResourceRequestPrivate &other, GetWebACLForResourceRequest * const q)
    : GetWebACLForResourcePrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS