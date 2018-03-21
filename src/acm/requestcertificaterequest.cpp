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

#include "requestcertificaterequest.h"
#include "requestcertificaterequest_p.h"
#include "requestcertificateresponse.h"
#include "acmrequest_p.h"

namespace AWS {
namespace ACM {

/**
 * @class  RequestCertificateRequest
 *
 * @brief  Implements ACM RequestCertificate requests.
 *
 * @see    ACMClient::requestCertificate
 */

/**
 * @brief  Constructs a new RequestCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestCertificateResponse::RequestCertificateResponse(

/**
 * @brief  Constructs a new RequestCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RequestCertificateRequest::RequestCertificateRequest(const RequestCertificateRequest &other)
    : ACMRequest(new RequestCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RequestCertificateRequest object.
 */
RequestCertificateRequest::RequestCertificateRequest()
    : ACMRequest(new RequestCertificateRequestPrivate(ACMRequest::RequestCertificateAction, this))
{

}

bool RequestCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RequestCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RequestCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ACMClient::send
 */
AwsAbstractResponse * RequestCertificateRequest::response(QNetworkReply * const reply) const
{
    return new RequestCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RequestCertificateRequestPrivate
 *
 * @brief  Private implementation for RequestCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestCertificateRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public RequestCertificateRequest instance.
 */
RequestCertificateRequestPrivate::RequestCertificateRequestPrivate(
    const ACMRequest::Action action, RequestCertificateRequest * const q)
    : RequestCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RequestCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RequestCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RequestCertificateRequest instance.
 */
RequestCertificateRequestPrivate::RequestCertificateRequestPrivate(
    const RequestCertificateRequestPrivate &other, RequestCertificateRequest * const q)
    : RequestCertificatePrivate(other, q)
{

}

} // namespace ACM
} // namespace AWS