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

#include "initializeservicerequest.h"
#include "initializeservicerequest_p.h"
#include "initializeserviceresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::InitializeServiceRequest
 * \brief The InitializeServiceRequest class provides an interface for mgn InitializeService requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::initializeService
 */

/*!
 * Constructs a copy of \a other.
 */
InitializeServiceRequest::InitializeServiceRequest(const InitializeServiceRequest &other)
    : mgnRequest(new InitializeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitializeServiceRequest object.
 */
InitializeServiceRequest::InitializeServiceRequest()
    : mgnRequest(new InitializeServiceRequestPrivate(mgnRequest::InitializeServiceAction, this))
{

}

/*!
 * \reimp
 */
bool InitializeServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitializeServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitializeServiceRequest::response(QNetworkReply * const reply) const
{
    return new InitializeServiceResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::InitializeServiceRequestPrivate
 * \brief The InitializeServiceRequestPrivate class provides private implementation for InitializeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a InitializeServiceRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
InitializeServiceRequestPrivate::InitializeServiceRequestPrivate(
    const mgnRequest::Action action, InitializeServiceRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitializeServiceRequest
 * class' copy constructor.
 */
InitializeServiceRequestPrivate::InitializeServiceRequestPrivate(
    const InitializeServiceRequestPrivate &other, InitializeServiceRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
