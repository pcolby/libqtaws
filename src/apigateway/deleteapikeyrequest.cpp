/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteapikeyrequest.h"
#include "deleteapikeyrequest_p.h"
#include "deleteapikeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteApiKeyRequest
 * \brief The DeleteApiKeyRequest class provides an interface for APIGateway DeleteApiKey requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteApiKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest(const DeleteApiKeyRequest &other)
    : APIGatewayRequest(new DeleteApiKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApiKeyRequest object.
 */
DeleteApiKeyRequest::DeleteApiKeyRequest()
    : APIGatewayRequest(new DeleteApiKeyRequestPrivate(APIGatewayRequest::DeleteApiKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApiKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApiKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApiKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApiKeyResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::DeleteApiKeyRequestPrivate
 * \brief The DeleteApiKeyRequestPrivate class provides private implementation for DeleteApiKeyRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a DeleteApiKeyRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const APIGatewayRequest::Action action, DeleteApiKeyRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApiKeyRequest
 * class' copy constructor.
 */
DeleteApiKeyRequestPrivate::DeleteApiKeyRequestPrivate(
    const DeleteApiKeyRequestPrivate &other, DeleteApiKeyRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
