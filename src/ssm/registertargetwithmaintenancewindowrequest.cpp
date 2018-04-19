/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "registertargetwithmaintenancewindowrequest.h"
#include "registertargetwithmaintenancewindowrequest_p.h"
#include "registertargetwithmaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::RegisterTargetWithMaintenanceWindowRequest
 * \brief The RegisterTargetWithMaintenanceWindowRequest class provides an interface for SSM RegisterTargetWithMaintenanceWindow requests.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Systems Manager
 * 
 *  Prerequisites</a>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::registerTargetWithMaintenanceWindow
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterTargetWithMaintenanceWindowRequest::RegisterTargetWithMaintenanceWindowRequest(const RegisterTargetWithMaintenanceWindowRequest &other)
    : SSMRequest(new RegisterTargetWithMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterTargetWithMaintenanceWindowRequest object.
 */
RegisterTargetWithMaintenanceWindowRequest::RegisterTargetWithMaintenanceWindowRequest()
    : SSMRequest(new RegisterTargetWithMaintenanceWindowRequestPrivate(SSMRequest::RegisterTargetWithMaintenanceWindowAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterTargetWithMaintenanceWindowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterTargetWithMaintenanceWindowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterTargetWithMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTargetWithMaintenanceWindowResponse(*this, reply);
}

/*!
 * \class QtAws::SSM::RegisterTargetWithMaintenanceWindowRequestPrivate
 * \brief The RegisterTargetWithMaintenanceWindowRequestPrivate class provides private implementation for RegisterTargetWithMaintenanceWindowRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a RegisterTargetWithMaintenanceWindowRequestPrivate object for SSM \a action,
 * with public implementation \a q.
 */
RegisterTargetWithMaintenanceWindowRequestPrivate::RegisterTargetWithMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, RegisterTargetWithMaintenanceWindowRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterTargetWithMaintenanceWindowRequest
 * class' copy constructor.
 */
RegisterTargetWithMaintenanceWindowRequestPrivate::RegisterTargetWithMaintenanceWindowRequestPrivate(
    const RegisterTargetWithMaintenanceWindowRequestPrivate &other, RegisterTargetWithMaintenanceWindowRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
