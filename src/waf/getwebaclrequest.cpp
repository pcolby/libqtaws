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

#include "getwebaclrequest.h"
#include "getwebaclrequest_p.h"
#include "getwebaclresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  GetWebACLRequest
 *
 * @brief  Implements WAF GetWebACL requests.
 *
 * @see    WAFClient::getWebACL
 */

/**
 * @brief  Constructs a new GetWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetWebACLResponse::GetWebACLResponse(

/**
 * @brief  Constructs a new GetWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetWebACLRequest::GetWebACLRequest(const GetWebACLRequest &other)
    : WAFRequest(new GetWebACLRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetWebACLRequest object.
 */
GetWebACLRequest::GetWebACLRequest()
    : WAFRequest(new GetWebACLRequestPrivate(WAFRequest::GetWebACLAction, this))
{

}

bool GetWebACLRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetWebACLResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * GetWebACLRequest::response(QNetworkReply * const reply) const
{
    return new GetWebACLResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetWebACLRequestPrivate
 *
 * @brief  Private implementation for GetWebACLRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetWebACLRequest instance.
 */
GetWebACLRequestPrivate::GetWebACLRequestPrivate(
    const WAFRequest::Action action, GetWebACLRequest * const q)
    : GetWebACLPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetWebACLRequest instance.
 */
GetWebACLRequestPrivate::GetWebACLRequestPrivate(
    const GetWebACLRequestPrivate &other, GetWebACLRequest * const q)
    : GetWebACLPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS