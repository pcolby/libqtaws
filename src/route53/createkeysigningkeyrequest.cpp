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

#include "createkeysigningkeyrequest.h"
#include "createkeysigningkeyrequest_p.h"
#include "createkeysigningkeyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateKeySigningKeyRequest
 * \brief The CreateKeySigningKeyRequest class provides an interface for Route53 CreateKeySigningKey requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createKeySigningKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateKeySigningKeyRequest::CreateKeySigningKeyRequest(const CreateKeySigningKeyRequest &other)
    : Route53Request(new CreateKeySigningKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateKeySigningKeyRequest object.
 */
CreateKeySigningKeyRequest::CreateKeySigningKeyRequest()
    : Route53Request(new CreateKeySigningKeyRequestPrivate(Route53Request::CreateKeySigningKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKeySigningKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateKeySigningKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKeySigningKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeySigningKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateKeySigningKeyRequestPrivate
 * \brief The CreateKeySigningKeyRequestPrivate class provides private implementation for CreateKeySigningKeyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateKeySigningKeyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateKeySigningKeyRequestPrivate::CreateKeySigningKeyRequestPrivate(
    const Route53Request::Action action, CreateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateKeySigningKeyRequest
 * class' copy constructor.
 */
CreateKeySigningKeyRequestPrivate::CreateKeySigningKeyRequestPrivate(
    const CreateKeySigningKeyRequestPrivate &other, CreateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
