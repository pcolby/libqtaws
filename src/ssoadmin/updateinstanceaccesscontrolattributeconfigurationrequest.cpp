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

#include "updateinstanceaccesscontrolattributeconfigurationrequest.h"
#include "updateinstanceaccesscontrolattributeconfigurationrequest_p.h"
#include "updateinstanceaccesscontrolattributeconfigurationresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::UpdateInstanceAccessControlAttributeConfigurationRequest
 * \brief The UpdateInstanceAccessControlAttributeConfigurationRequest class provides an interface for SSOAdmin UpdateInstanceAccessControlAttributeConfiguration requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::updateInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInstanceAccessControlAttributeConfigurationRequest::UpdateInstanceAccessControlAttributeConfigurationRequest(const UpdateInstanceAccessControlAttributeConfigurationRequest &other)
    : SSOAdminRequest(new UpdateInstanceAccessControlAttributeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInstanceAccessControlAttributeConfigurationRequest object.
 */
UpdateInstanceAccessControlAttributeConfigurationRequest::UpdateInstanceAccessControlAttributeConfigurationRequest()
    : SSOAdminRequest(new UpdateInstanceAccessControlAttributeConfigurationRequestPrivate(SSOAdminRequest::UpdateInstanceAccessControlAttributeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInstanceAccessControlAttributeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInstanceAccessControlAttributeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInstanceAccessControlAttributeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceAccessControlAttributeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::UpdateInstanceAccessControlAttributeConfigurationRequestPrivate
 * \brief The UpdateInstanceAccessControlAttributeConfigurationRequestPrivate class provides private implementation for UpdateInstanceAccessControlAttributeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a UpdateInstanceAccessControlAttributeConfigurationRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
UpdateInstanceAccessControlAttributeConfigurationRequestPrivate::UpdateInstanceAccessControlAttributeConfigurationRequestPrivate(
    const SSOAdminRequest::Action action, UpdateInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceAccessControlAttributeConfigurationRequest
 * class' copy constructor.
 */
UpdateInstanceAccessControlAttributeConfigurationRequestPrivate::UpdateInstanceAccessControlAttributeConfigurationRequestPrivate(
    const UpdateInstanceAccessControlAttributeConfigurationRequestPrivate &other, UpdateInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
