/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getusageplankeyrequest.h"
#include "getusageplankeyrequest_p.h"
#include "getusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetUsagePlanKeyRequest
 * \brief The GetUsagePlanKeyRequest class provides an interface for APIGateway GetUsagePlanKey requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getUsagePlanKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlanKeyRequest::GetUsagePlanKeyRequest(const GetUsagePlanKeyRequest &other)
    : APIGatewayRequest(new GetUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlanKeyRequest object.
 */
GetUsagePlanKeyRequest::GetUsagePlanKeyRequest()
    : APIGatewayRequest(new GetUsagePlanKeyRequestPrivate(APIGatewayRequest::GetUsagePlanKeyAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlanKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlanKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanKeyResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::GetUsagePlanKeyRequestPrivate
 * \brief The GetUsagePlanKeyRequestPrivate class provides private implementation for GetUsagePlanKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a GetUsagePlanKeyRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlanKeyRequestPrivate::GetUsagePlanKeyRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlanKeyRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanKeyRequest
 * class' copy constructor.
 */
GetUsagePlanKeyRequestPrivate::GetUsagePlanKeyRequestPrivate(
    const GetUsagePlanKeyRequestPrivate &other, GetUsagePlanKeyRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
