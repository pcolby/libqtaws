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

#include "putmethodresponserequest.h"
#include "putmethodresponserequest_p.h"
#include "putmethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::PutMethodResponseRequest
 * \brief The PutMethodResponseRequest class provides an interface for APIGateway PutMethodResponse requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::putMethodResponse
 */

/*!
 * Constructs a copy of \a other.
 */
PutMethodResponseRequest::PutMethodResponseRequest(const PutMethodResponseRequest &other)
    : APIGatewayRequest(new PutMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMethodResponseRequest object.
 */
PutMethodResponseRequest::PutMethodResponseRequest()
    : APIGatewayRequest(new PutMethodResponseRequestPrivate(APIGatewayRequest::PutMethodResponseAction, this))
{

}

/*!
 * \reimp
 */
bool PutMethodResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMethodResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutMethodResponseResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::PutMethodResponseRequestPrivate
 * \brief The PutMethodResponseRequestPrivate class provides private implementation for PutMethodResponseRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a PutMethodResponseRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
PutMethodResponseRequestPrivate::PutMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, PutMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMethodResponseRequest
 * class' copy constructor.
 */
PutMethodResponseRequestPrivate::PutMethodResponseRequestPrivate(
    const PutMethodResponseRequestPrivate &other, PutMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
