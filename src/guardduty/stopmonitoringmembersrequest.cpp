/*
    Copyright 2013-2019 Paul Colby

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

#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersrequest_p.h"
#include "stopmonitoringmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersRequest
 * \brief The StopMonitoringMembersRequest class provides an interface for GuardDuty StopMonitoringMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail event logs, and DNS logs. It uses threat intelligence feeds, such as lists of malicious IPs
 *  and domains, and machine learning to identify unexpected and potentially unauthorized and malicious activity within your
 *  AWS environment. This can include issues like escalations of privileges, uses of exposed credentials, or communication
 *  with malicious IPs, URLs, or domains. For example, GuardDuty can detect compromised EC2 instances serving malware or
 *  mining bitcoin. It also monitors AWS account access behavior for signs of compromise, such as unauthorized
 *  infrastructure deployments, like instances deployed in a region that has never been used, or unusual API calls, like a
 *  password policy change to reduce password strength. GuardDuty informs you of the status of your AWS environment by
 *  producing security findings that you can view in the GuardDuty console or through Amazon CloudWatch events. For more
 *  information, see <a href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html"> Amazon GuardDuty User
 *  Guide</a>.
 *
 * \sa GuardDutyClient::stopMonitoringMembers
 */

/*!
 * Constructs a copy of \a other.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest(const StopMonitoringMembersRequest &other)
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopMonitoringMembersRequest object.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest()
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(GuardDutyRequest::StopMonitoringMembersAction, this))
{

}

/*!
 * \reimp
 */
bool StopMonitoringMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopMonitoringMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMonitoringMembersRequest::response(QNetworkReply * const reply) const
{
    return new StopMonitoringMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersRequestPrivate
 * \brief The StopMonitoringMembersRequestPrivate class provides private implementation for StopMonitoringMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a StopMonitoringMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const GuardDutyRequest::Action action, StopMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopMonitoringMembersRequest
 * class' copy constructor.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const StopMonitoringMembersRequestPrivate &other, StopMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
