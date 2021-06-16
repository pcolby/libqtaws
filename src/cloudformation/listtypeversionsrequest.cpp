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

#include "listtypeversionsrequest.h"
#include "listtypeversionsrequest_p.h"
#include "listtypeversionsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListTypeVersionsRequest
 * \brief The ListTypeVersionsRequest class provides an interface for CloudFormation ListTypeVersions requests.
 *
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 *
 * \sa CloudFormationClient::listTypeVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTypeVersionsRequest::ListTypeVersionsRequest(const ListTypeVersionsRequest &other)
    : CloudFormationRequest(new ListTypeVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTypeVersionsRequest object.
 */
ListTypeVersionsRequest::ListTypeVersionsRequest()
    : CloudFormationRequest(new ListTypeVersionsRequestPrivate(CloudFormationRequest::ListTypeVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTypeVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTypeVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTypeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTypeVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFormation::ListTypeVersionsRequestPrivate
 * \brief The ListTypeVersionsRequestPrivate class provides private implementation for ListTypeVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListTypeVersionsRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
ListTypeVersionsRequestPrivate::ListTypeVersionsRequestPrivate(
    const CloudFormationRequest::Action action, ListTypeVersionsRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTypeVersionsRequest
 * class' copy constructor.
 */
ListTypeVersionsRequestPrivate::ListTypeVersionsRequestPrivate(
    const ListTypeVersionsRequestPrivate &other, ListTypeVersionsRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
