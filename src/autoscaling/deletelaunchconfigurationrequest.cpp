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

#include "deletelaunchconfigurationrequest.h"
#include "deletelaunchconfigurationrequest_p.h"
#include "deletelaunchconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteLaunchConfigurationRequest
 * \brief The DeleteLaunchConfigurationRequest class provides an interface for AutoScaling DeleteLaunchConfiguration requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::deleteLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest(const DeleteLaunchConfigurationRequest &other)
    : AutoScalingRequest(new DeleteLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchConfigurationRequest object.
 */
DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest()
    : AutoScalingRequest(new DeleteLaunchConfigurationRequestPrivate(AutoScalingRequest::DeleteLaunchConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteLaunchConfigurationRequestPrivate
 * \brief The DeleteLaunchConfigurationRequestPrivate class provides private implementation for DeleteLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 *
 * Constructs a DeleteLaunchConfigurationRequestPrivate object for AutoScaling \a action with,
 * public implementation \a q.
 */
DeleteLaunchConfigurationRequestPrivate::DeleteLaunchConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, DeleteLaunchConfigurationRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchConfigurationRequest
 * class' copy constructor.
 */
DeleteLaunchConfigurationRequestPrivate::DeleteLaunchConfigurationRequestPrivate(
    const DeleteLaunchConfigurationRequestPrivate &other, DeleteLaunchConfigurationRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
