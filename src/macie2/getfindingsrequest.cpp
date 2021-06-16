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

#include "getfindingsrequest.h"
#include "getfindingsrequest_p.h"
#include "getfindingsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetFindingsRequest
 * \brief The GetFindingsRequest class provides an interface for Macie2 GetFindings requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getFindings
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingsRequest::GetFindingsRequest(const GetFindingsRequest &other)
    : Macie2Request(new GetFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingsRequest object.
 */
GetFindingsRequest::GetFindingsRequest()
    : Macie2Request(new GetFindingsRequestPrivate(Macie2Request::GetFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetFindingsRequestPrivate
 * \brief The GetFindingsRequestPrivate class provides private implementation for GetFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetFindingsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const Macie2Request::Action action, GetFindingsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsRequest
 * class' copy constructor.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const GetFindingsRequestPrivate &other, GetFindingsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
