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

#include "gettemplaterequest.h"
#include "gettemplaterequest_p.h"
#include "gettemplateresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  GetTemplateRequest
 *
 * @brief  Implements SES GetTemplate requests.
 *
 * @see    SESClient::getTemplate
 */

/**
 * @brief  Constructs a new GetTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTemplateRequest::GetTemplateRequest(const GetTemplateRequest &other)
    : SESRequest(new GetTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTemplateRequest object.
 */
GetTemplateRequest::GetTemplateRequest()
    : SESRequest(new GetTemplateRequestPrivate(SESRequest::GetTemplateAction, this))
{

}

bool GetTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * GetTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTemplateRequestPrivate
 *
 * @brief  Private implementation for GetTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTemplateRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public GetTemplateRequest instance.
 */
GetTemplateRequestPrivate::GetTemplateRequestPrivate(
    const SESRequest::Action action, GetTemplateRequest * const q)
    : GetTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTemplateRequest instance.
 */
GetTemplateRequestPrivate::GetTemplateRequestPrivate(
    const GetTemplateRequestPrivate &other, GetTemplateRequest * const q)
    : GetTemplatePrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
