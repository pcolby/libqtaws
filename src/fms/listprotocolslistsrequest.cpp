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

#include "listprotocolslistsrequest.h"
#include "listprotocolslistsrequest_p.h"
#include "listprotocolslistsresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListProtocolsListsRequest
 * \brief The ListProtocolsListsRequest class provides an interface for FMS ListProtocolsLists requests.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::listProtocolsLists
 */

/*!
 * Constructs a copy of \a other.
 */
ListProtocolsListsRequest::ListProtocolsListsRequest(const ListProtocolsListsRequest &other)
    : FmsRequest(new ListProtocolsListsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProtocolsListsRequest object.
 */
ListProtocolsListsRequest::ListProtocolsListsRequest()
    : FmsRequest(new ListProtocolsListsRequestPrivate(FmsRequest::ListProtocolsListsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProtocolsListsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProtocolsListsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProtocolsListsRequest::response(QNetworkReply * const reply) const
{
    return new ListProtocolsListsResponse(*this, reply);
}

/*!
 * \class QtAws::FMS::ListProtocolsListsRequestPrivate
 * \brief The ListProtocolsListsRequestPrivate class provides private implementation for ListProtocolsListsRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a ListProtocolsListsRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListProtocolsListsRequestPrivate::ListProtocolsListsRequestPrivate(
    const FmsRequest::Action action, ListProtocolsListsRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProtocolsListsRequest
 * class' copy constructor.
 */
ListProtocolsListsRequestPrivate::ListProtocolsListsRequestPrivate(
    const ListProtocolsListsRequestPrivate &other, ListProtocolsListsRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
