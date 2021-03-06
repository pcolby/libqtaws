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

#include "listinstanceprofiletagsrequest.h"
#include "listinstanceprofiletagsrequest_p.h"
#include "listinstanceprofiletagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListInstanceProfileTagsRequest
 * \brief The ListInstanceProfileTagsRequest class provides an interface for IAM ListInstanceProfileTags requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::listInstanceProfileTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceProfileTagsRequest::ListInstanceProfileTagsRequest(const ListInstanceProfileTagsRequest &other)
    : IamRequest(new ListInstanceProfileTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceProfileTagsRequest object.
 */
ListInstanceProfileTagsRequest::ListInstanceProfileTagsRequest()
    : IamRequest(new ListInstanceProfileTagsRequestPrivate(IamRequest::ListInstanceProfileTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceProfileTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceProfileTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceProfileTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfileTagsResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::ListInstanceProfileTagsRequestPrivate
 * \brief The ListInstanceProfileTagsRequestPrivate class provides private implementation for ListInstanceProfileTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListInstanceProfileTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListInstanceProfileTagsRequestPrivate::ListInstanceProfileTagsRequestPrivate(
    const IamRequest::Action action, ListInstanceProfileTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfileTagsRequest
 * class' copy constructor.
 */
ListInstanceProfileTagsRequestPrivate::ListInstanceProfileTagsRequestPrivate(
    const ListInstanceProfileTagsRequestPrivate &other, ListInstanceProfileTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
