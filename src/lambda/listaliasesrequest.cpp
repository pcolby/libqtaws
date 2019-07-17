/*
    Copyright 2013-2019 Paul Colby

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

#include "listaliasesrequest.h"
#include "listaliasesrequest_p.h"
#include "listaliasesresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::ListAliasesRequest
 * \brief The ListAliasesRequest class provides an interface for Lambda ListAliases requests.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::listAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListAliasesRequest::ListAliasesRequest(const ListAliasesRequest &other)
    : LambdaRequest(new ListAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAliasesRequest object.
 */
ListAliasesRequest::ListAliasesRequest()
    : LambdaRequest(new ListAliasesRequestPrivate(LambdaRequest::ListAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::ListAliasesRequestPrivate
 * \brief The ListAliasesRequestPrivate class provides private implementation for ListAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a ListAliasesRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
ListAliasesRequestPrivate::ListAliasesRequestPrivate(
    const LambdaRequest::Action action, ListAliasesRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAliasesRequest
 * class' copy constructor.
 */
ListAliasesRequestPrivate::ListAliasesRequestPrivate(
    const ListAliasesRequestPrivate &other, ListAliasesRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
