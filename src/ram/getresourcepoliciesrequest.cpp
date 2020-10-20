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

#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesrequest_p.h"
#include "getresourcepoliciesresponse.h"
#include "ramrequest_p.h"

namespace QtAws {
namespace RAM {

/*!
 * \class QtAws::RAM::GetResourcePoliciesRequest
 * \brief The GetResourcePoliciesRequest class provides an interface for RAM GetResourcePolicies requests.
 *
 * \inmodule QtAwsRAM
 *
 *  Use AWS Resource Access Manager to share AWS resources between AWS accounts. To share a resource, you create a resource
 *  share, associate the resource with the resource share, and specify the principals that can access the resource. The
 *  following principals are
 * 
 *  supported> <ul> <li>
 * 
 *  The ID of an AWS
 * 
 *  accoun> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an OU from AWS
 * 
 *  Organization> </li> <li>
 * 
 *  The Amazon Resource Name (ARN) of an organization from AWS
 * 
 *  Organization> </li> </ul>
 * 
 *  If you specify an AWS account that doesn't exist in the same organization as the account that owns the resource share,
 *  the owner of the specified account receives an invitation to accept the resource share. After the owner accepts the
 *  invitation, they can access the resources in the resource share. An administrator of the specified account can use IAM
 *  policies to restrict access resources in the resource
 *
 * \sa RamClient::getResourcePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest(const GetResourcePoliciesRequest &other)
    : RamRequest(new GetResourcePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePoliciesRequest object.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest()
    : RamRequest(new GetResourcePoliciesRequestPrivate(RamRequest::GetResourcePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::RAM::GetResourcePoliciesRequestPrivate
 * \brief The GetResourcePoliciesRequestPrivate class provides private implementation for GetResourcePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsRAM
 */

/*!
 * Constructs a GetResourcePoliciesRequestPrivate object for Ram \a action,
 * with public implementation \a q.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const RamRequest::Action action, GetResourcePoliciesRequest * const q)
    : RamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePoliciesRequest
 * class' copy constructor.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const GetResourcePoliciesRequestPrivate &other, GetResourcePoliciesRequest * const q)
    : RamRequestPrivate(other, q)
{

}

} // namespace RAM
} // namespace QtAws
