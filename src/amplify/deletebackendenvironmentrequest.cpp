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

#include "deletebackendenvironmentrequest.h"
#include "deletebackendenvironmentrequest_p.h"
#include "deletebackendenvironmentresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteBackendEnvironmentRequest
 * \brief The DeleteBackendEnvironmentRequest class provides an interface for Amplify DeleteBackendEnvironment requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteBackendEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackendEnvironmentRequest::DeleteBackendEnvironmentRequest(const DeleteBackendEnvironmentRequest &other)
    : AmplifyRequest(new DeleteBackendEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackendEnvironmentRequest object.
 */
DeleteBackendEnvironmentRequest::DeleteBackendEnvironmentRequest()
    : AmplifyRequest(new DeleteBackendEnvironmentRequestPrivate(AmplifyRequest::DeleteBackendEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackendEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackendEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackendEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackendEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteBackendEnvironmentRequestPrivate
 * \brief The DeleteBackendEnvironmentRequestPrivate class provides private implementation for DeleteBackendEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteBackendEnvironmentRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteBackendEnvironmentRequestPrivate::DeleteBackendEnvironmentRequestPrivate(
    const AmplifyRequest::Action action, DeleteBackendEnvironmentRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackendEnvironmentRequest
 * class' copy constructor.
 */
DeleteBackendEnvironmentRequestPrivate::DeleteBackendEnvironmentRequestPrivate(
    const DeleteBackendEnvironmentRequestPrivate &other, DeleteBackendEnvironmentRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
