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

#include "listeventsdetectionjobsrequest.h"
#include "listeventsdetectionjobsrequest_p.h"
#include "listeventsdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEventsDetectionJobsRequest
 * \brief The ListEventsDetectionJobsRequest class provides an interface for Comprehend ListEventsDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEventsDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventsDetectionJobsRequest::ListEventsDetectionJobsRequest(const ListEventsDetectionJobsRequest &other)
    : ComprehendRequest(new ListEventsDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventsDetectionJobsRequest object.
 */
ListEventsDetectionJobsRequest::ListEventsDetectionJobsRequest()
    : ComprehendRequest(new ListEventsDetectionJobsRequestPrivate(ComprehendRequest::ListEventsDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventsDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventsDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventsDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListEventsDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListEventsDetectionJobsRequestPrivate
 * \brief The ListEventsDetectionJobsRequestPrivate class provides private implementation for ListEventsDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEventsDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListEventsDetectionJobsRequestPrivate::ListEventsDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListEventsDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventsDetectionJobsRequest
 * class' copy constructor.
 */
ListEventsDetectionJobsRequestPrivate::ListEventsDetectionJobsRequestPrivate(
    const ListEventsDetectionJobsRequestPrivate &other, ListEventsDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
