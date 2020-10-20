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

#include "deleteapprequest.h"
#include "deleteapprequest_p.h"
#include "deleteappresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteAppRequest
 * \brief The DeleteAppRequest class provides an interface for Amplify DeleteApp requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::deleteApp
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppRequest::DeleteAppRequest(const DeleteAppRequest &other)
    : AmplifyRequest(new DeleteAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppRequest object.
 */
DeleteAppRequest::DeleteAppRequest()
    : AmplifyRequest(new DeleteAppRequestPrivate(AmplifyRequest::DeleteAppAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::DeleteAppRequestPrivate
 * \brief The DeleteAppRequestPrivate class provides private implementation for DeleteAppRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteAppRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const AmplifyRequest::Action action, DeleteAppRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppRequest
 * class' copy constructor.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const DeleteAppRequestPrivate &other, DeleteAppRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
