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

#include "listtexttranslationjobsrequest.h"
#include "listtexttranslationjobsrequest_p.h"
#include "listtexttranslationjobsresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListTextTranslationJobsRequest
 * \brief The ListTextTranslationJobsRequest class provides an interface for Translate ListTextTranslationJobs requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listTextTranslationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTextTranslationJobsRequest::ListTextTranslationJobsRequest(const ListTextTranslationJobsRequest &other)
    : TranslateRequest(new ListTextTranslationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTextTranslationJobsRequest object.
 */
ListTextTranslationJobsRequest::ListTextTranslationJobsRequest()
    : TranslateRequest(new ListTextTranslationJobsRequestPrivate(TranslateRequest::ListTextTranslationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTextTranslationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTextTranslationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTextTranslationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTextTranslationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ListTextTranslationJobsRequestPrivate
 * \brief The ListTextTranslationJobsRequestPrivate class provides private implementation for ListTextTranslationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListTextTranslationJobsRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ListTextTranslationJobsRequestPrivate::ListTextTranslationJobsRequestPrivate(
    const TranslateRequest::Action action, ListTextTranslationJobsRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTextTranslationJobsRequest
 * class' copy constructor.
 */
ListTextTranslationJobsRequestPrivate::ListTextTranslationJobsRequestPrivate(
    const ListTextTranslationJobsRequestPrivate &other, ListTextTranslationJobsRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
