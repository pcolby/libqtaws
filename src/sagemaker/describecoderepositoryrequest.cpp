/*
    Copyright 2013-2020 Paul Colby

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

#include "describecoderepositoryrequest.h"
#include "describecoderepositoryrequest_p.h"
#include "describecoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryRequest
 * \brief The DescribeCodeRepositoryRequest class provides an interface for SageMaker DescribeCodeRepository requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCodeRepositoryRequest::DescribeCodeRepositoryRequest(const DescribeCodeRepositoryRequest &other)
    : SageMakerRequest(new DescribeCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCodeRepositoryRequest object.
 */
DescribeCodeRepositoryRequest::DescribeCodeRepositoryRequest()
    : SageMakerRequest(new DescribeCodeRepositoryRequestPrivate(SageMakerRequest::DescribeCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryRequestPrivate
 * \brief The DescribeCodeRepositoryRequestPrivate class provides private implementation for DescribeCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeCodeRepositoryRequestPrivate::DescribeCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, DescribeCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCodeRepositoryRequest
 * class' copy constructor.
 */
DescribeCodeRepositoryRequestPrivate::DescribeCodeRepositoryRequestPrivate(
    const DescribeCodeRepositoryRequestPrivate &other, DescribeCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
