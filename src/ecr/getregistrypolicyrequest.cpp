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

#include "getregistrypolicyrequest.h"
#include "getregistrypolicyrequest_p.h"
#include "getregistrypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetRegistryPolicyRequest
 * \brief The GetRegistryPolicyRequest class provides an interface for ECR GetRegistryPolicy requests.
 *
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 *
 * \sa EcrClient::getRegistryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetRegistryPolicyRequest::GetRegistryPolicyRequest(const GetRegistryPolicyRequest &other)
    : EcrRequest(new GetRegistryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRegistryPolicyRequest object.
 */
GetRegistryPolicyRequest::GetRegistryPolicyRequest()
    : EcrRequest(new GetRegistryPolicyRequestPrivate(EcrRequest::GetRegistryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetRegistryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRegistryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegistryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::GetRegistryPolicyRequestPrivate
 * \brief The GetRegistryPolicyRequestPrivate class provides private implementation for GetRegistryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a GetRegistryPolicyRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
GetRegistryPolicyRequestPrivate::GetRegistryPolicyRequestPrivate(
    const EcrRequest::Action action, GetRegistryPolicyRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRegistryPolicyRequest
 * class' copy constructor.
 */
GetRegistryPolicyRequestPrivate::GetRegistryPolicyRequestPrivate(
    const GetRegistryPolicyRequestPrivate &other, GetRegistryPolicyRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
