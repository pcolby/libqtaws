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

#include "deletepermissionsetrequest.h"
#include "deletepermissionsetrequest_p.h"
#include "deletepermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeletePermissionSetRequest
 * \brief The DeletePermissionSetRequest class provides an interface for SSOAdmin DeletePermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deletePermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePermissionSetRequest::DeletePermissionSetRequest(const DeletePermissionSetRequest &other)
    : SSOAdminRequest(new DeletePermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePermissionSetRequest object.
 */
DeletePermissionSetRequest::DeletePermissionSetRequest()
    : SSOAdminRequest(new DeletePermissionSetRequestPrivate(SSOAdminRequest::DeletePermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new DeletePermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DeletePermissionSetRequestPrivate
 * \brief The DeletePermissionSetRequestPrivate class provides private implementation for DeletePermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeletePermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DeletePermissionSetRequestPrivate::DeletePermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, DeletePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePermissionSetRequest
 * class' copy constructor.
 */
DeletePermissionSetRequestPrivate::DeletePermissionSetRequestPrivate(
    const DeletePermissionSetRequestPrivate &other, DeletePermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
