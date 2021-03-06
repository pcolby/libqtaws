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

#include "listaddonsrequest.h"
#include "listaddonsrequest_p.h"
#include "listaddonsresponse.h"
#include "eksrequest_p.h"

namespace QtAws {
namespace EKS {

/*!
 * \class QtAws::EKS::ListAddonsRequest
 * \brief The ListAddonsRequest class provides an interface for EKS ListAddons requests.
 *
 * \inmodule QtAwsEKS
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on AWS
 *  without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an open-source system for
 *  automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::listAddons
 */

/*!
 * Constructs a copy of \a other.
 */
ListAddonsRequest::ListAddonsRequest(const ListAddonsRequest &other)
    : EksRequest(new ListAddonsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAddonsRequest object.
 */
ListAddonsRequest::ListAddonsRequest()
    : EksRequest(new ListAddonsRequestPrivate(EksRequest::ListAddonsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAddonsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAddonsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAddonsRequest::response(QNetworkReply * const reply) const
{
    return new ListAddonsResponse(*this, reply);
}

/*!
 * \class QtAws::EKS::ListAddonsRequestPrivate
 * \brief The ListAddonsRequestPrivate class provides private implementation for ListAddonsRequest.
 * \internal
 *
 * \inmodule QtAwsEKS
 */

/*!
 * Constructs a ListAddonsRequestPrivate object for Eks \a action,
 * with public implementation \a q.
 */
ListAddonsRequestPrivate::ListAddonsRequestPrivate(
    const EksRequest::Action action, ListAddonsRequest * const q)
    : EksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAddonsRequest
 * class' copy constructor.
 */
ListAddonsRequestPrivate::ListAddonsRequestPrivate(
    const ListAddonsRequestPrivate &other, ListAddonsRequest * const q)
    : EksRequestPrivate(other, q)
{

}

} // namespace EKS
} // namespace QtAws
