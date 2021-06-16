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

#include "updateaccountsettingsrequest.h"
#include "updateaccountsettingsrequest_p.h"
#include "updateaccountsettingsresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateAccountSettingsRequest
 * \brief The UpdateAccountSettingsRequest class provides an interface for QuickSight UpdateAccountSettings requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateAccountSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccountSettingsRequest::UpdateAccountSettingsRequest(const UpdateAccountSettingsRequest &other)
    : QuickSightRequest(new UpdateAccountSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccountSettingsRequest object.
 */
UpdateAccountSettingsRequest::UpdateAccountSettingsRequest()
    : QuickSightRequest(new UpdateAccountSettingsRequestPrivate(QuickSightRequest::UpdateAccountSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccountSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccountSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccountSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::UpdateAccountSettingsRequestPrivate
 * \brief The UpdateAccountSettingsRequestPrivate class provides private implementation for UpdateAccountSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateAccountSettingsRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
UpdateAccountSettingsRequestPrivate::UpdateAccountSettingsRequestPrivate(
    const QuickSightRequest::Action action, UpdateAccountSettingsRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountSettingsRequest
 * class' copy constructor.
 */
UpdateAccountSettingsRequestPrivate::UpdateAccountSettingsRequestPrivate(
    const UpdateAccountSettingsRequestPrivate &other, UpdateAccountSettingsRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
