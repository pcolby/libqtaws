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

#include "describeterminationpolicytypesrequest.h"
#include "describeterminationpolicytypesrequest_p.h"
#include "describeterminationpolicytypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesRequest
 * \brief The DescribeTerminationPolicyTypesRequest class provides an interface for AutoScaling DescribeTerminationPolicyTypes requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
 *
 * \sa AutoScalingClient::describeTerminationPolicyTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTerminationPolicyTypesRequest::DescribeTerminationPolicyTypesRequest(const DescribeTerminationPolicyTypesRequest &other)
    : AutoScalingRequest(new DescribeTerminationPolicyTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTerminationPolicyTypesRequest object.
 */
DescribeTerminationPolicyTypesRequest::DescribeTerminationPolicyTypesRequest()
    : AutoScalingRequest(new DescribeTerminationPolicyTypesRequestPrivate(AutoScalingRequest::DescribeTerminationPolicyTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTerminationPolicyTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTerminationPolicyTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTerminationPolicyTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTerminationPolicyTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesRequestPrivate
 * \brief The DescribeTerminationPolicyTypesRequestPrivate class provides private implementation for DescribeTerminationPolicyTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeTerminationPolicyTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeTerminationPolicyTypesRequestPrivate::DescribeTerminationPolicyTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeTerminationPolicyTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTerminationPolicyTypesRequest
 * class' copy constructor.
 */
DescribeTerminationPolicyTypesRequestPrivate::DescribeTerminationPolicyTypesRequestPrivate(
    const DescribeTerminationPolicyTypesRequestPrivate &other, DescribeTerminationPolicyTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
