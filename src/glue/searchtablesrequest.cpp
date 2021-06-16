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

#include "searchtablesrequest.h"
#include "searchtablesrequest_p.h"
#include "searchtablesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::SearchTablesRequest
 * \brief The SearchTablesRequest class provides an interface for Glue SearchTables requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::searchTables
 */

/*!
 * Constructs a copy of \a other.
 */
SearchTablesRequest::SearchTablesRequest(const SearchTablesRequest &other)
    : GlueRequest(new SearchTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchTablesRequest object.
 */
SearchTablesRequest::SearchTablesRequest()
    : GlueRequest(new SearchTablesRequestPrivate(GlueRequest::SearchTablesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchTablesRequest::response(QNetworkReply * const reply) const
{
    return new SearchTablesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::SearchTablesRequestPrivate
 * \brief The SearchTablesRequestPrivate class provides private implementation for SearchTablesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a SearchTablesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
SearchTablesRequestPrivate::SearchTablesRequestPrivate(
    const GlueRequest::Action action, SearchTablesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchTablesRequest
 * class' copy constructor.
 */
SearchTablesRequestPrivate::SearchTablesRequestPrivate(
    const SearchTablesRequestPrivate &other, SearchTablesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
