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

#include "creategrantrequest.h"
#include "creategrantrequest_p.h"
#include "creategrantresponse.h"
#include "licensemanagerrequest_p.h"

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateGrantRequest
 * \brief The CreateGrantRequest class provides an interface for LicenseManager CreateGrant requests.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::createGrant
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGrantRequest::CreateGrantRequest(const CreateGrantRequest &other)
    : LicenseManagerRequest(new CreateGrantRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGrantRequest object.
 */
CreateGrantRequest::CreateGrantRequest()
    : LicenseManagerRequest(new CreateGrantRequestPrivate(LicenseManagerRequest::CreateGrantAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGrantRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGrantResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGrantRequest::response(QNetworkReply * const reply) const
{
    return new CreateGrantResponse(*this, reply);
}

/*!
 * \class QtAws::LicenseManager::CreateGrantRequestPrivate
 * \brief The CreateGrantRequestPrivate class provides private implementation for CreateGrantRequest.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateGrantRequestPrivate object for LicenseManager \a action,
 * with public implementation \a q.
 */
CreateGrantRequestPrivate::CreateGrantRequestPrivate(
    const LicenseManagerRequest::Action action, CreateGrantRequest * const q)
    : LicenseManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGrantRequest
 * class' copy constructor.
 */
CreateGrantRequestPrivate::CreateGrantRequestPrivate(
    const CreateGrantRequestPrivate &other, CreateGrantRequest * const q)
    : LicenseManagerRequestPrivate(other, q)
{

}

} // namespace LicenseManager
} // namespace QtAws
