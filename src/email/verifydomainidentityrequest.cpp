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

#include "verifydomainidentityrequest.h"
#include "verifydomainidentityrequest_p.h"
#include "verifydomainidentityresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  VerifyDomainIdentityRequest
 *
 * @brief  Implements SES VerifyDomainIdentity requests.
 *
 * @see    SESClient::verifyDomainIdentity
 */

/**
 * @brief  Constructs a new VerifyDomainIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
VerifyDomainIdentityResponse::VerifyDomainIdentityResponse(

/**
 * @brief  Constructs a new VerifyDomainIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifyDomainIdentityRequest::VerifyDomainIdentityRequest(const VerifyDomainIdentityRequest &other)
    : SESRequest(new VerifyDomainIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new VerifyDomainIdentityRequest object.
 */
VerifyDomainIdentityRequest::VerifyDomainIdentityRequest()
    : SESRequest(new VerifyDomainIdentityRequestPrivate(SESRequest::VerifyDomainIdentityAction, this))
{

}

bool VerifyDomainIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an VerifyDomainIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifyDomainIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * VerifyDomainIdentityRequest::response(QNetworkReply * const reply) const
{
    return new VerifyDomainIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  VerifyDomainIdentityRequestPrivate
 *
 * @brief  Private implementation for VerifyDomainIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new VerifyDomainIdentityRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public VerifyDomainIdentityRequest instance.
 */
VerifyDomainIdentityRequestPrivate::VerifyDomainIdentityRequestPrivate(
    const SESRequest::Action action, VerifyDomainIdentityRequest * const q)
    : VerifyDomainIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new VerifyDomainIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifyDomainIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifyDomainIdentityRequest instance.
 */
VerifyDomainIdentityRequestPrivate::VerifyDomainIdentityRequestPrivate(
    const VerifyDomainIdentityRequestPrivate &other, VerifyDomainIdentityRequest * const q)
    : VerifyDomainIdentityPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
