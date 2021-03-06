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

#include "createmembersrequest.h"
#include "createmembersrequest_p.h"
#include "createmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateMembersRequest
 * \brief The CreateMembersRequest class provides an interface for GuardDuty CreateMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail event logs, and DNS logs. It uses threat intelligence feeds (such as lists of malicious IPs
 *  and domains) and machine learning to identify unexpected, potentially unauthorized, and malicious activity within your
 *  AWS environment. This can include issues like escalations of privileges, uses of exposed credentials, or communication
 *  with malicious IPs, URLs, or domains. For example, GuardDuty can detect compromised EC2 instances that serve malware or
 *  mine bitcoin.
 * 
 *  </p
 * 
 *  GuardDuty also monitors AWS account access behavior for signs of compromise. Some examples of this are unauthorized
 *  infrastructure deployments such as EC2 instances deployed in a Region that has never been used, or unusual API calls
 *  like a password policy change to reduce password strength.
 * 
 *  </p
 * 
 *  GuardDuty informs you of the status of your AWS environment by producing security findings that you can view in the
 *  GuardDuty console or through Amazon CloudWatch events. For more information, see the <i> <a
 *  href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon GuardDuty User Guide</a> </i>.
 *
 * \sa GuardDutyClient::createMembers
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMembersRequest::CreateMembersRequest(const CreateMembersRequest &other)
    : GuardDutyRequest(new CreateMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMembersRequest object.
 */
CreateMembersRequest::CreateMembersRequest()
    : GuardDutyRequest(new CreateMembersRequestPrivate(GuardDutyRequest::CreateMembersAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMembersRequest::response(QNetworkReply * const reply) const
{
    return new CreateMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::CreateMembersRequestPrivate
 * \brief The CreateMembersRequestPrivate class provides private implementation for CreateMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const GuardDutyRequest::Action action, CreateMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMembersRequest
 * class' copy constructor.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const CreateMembersRequestPrivate &other, CreateMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
