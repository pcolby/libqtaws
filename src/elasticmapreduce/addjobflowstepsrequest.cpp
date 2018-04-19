/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "addjobflowstepsrequest.h"
#include "addjobflowstepsrequest_p.h"
#include "addjobflowstepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddJobFlowStepsRequest
 * \brief The AddJobFlowStepsRequest class provides an interface for EMR AddJobFlowSteps requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::addJobFlowSteps
 */

/*!
 * Constructs a copy of \a other.
 */
AddJobFlowStepsRequest::AddJobFlowStepsRequest(const AddJobFlowStepsRequest &other)
    : EMRRequest(new AddJobFlowStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddJobFlowStepsRequest object.
 */
AddJobFlowStepsRequest::AddJobFlowStepsRequest()
    : EMRRequest(new AddJobFlowStepsRequestPrivate(EMRRequest::AddJobFlowStepsAction, this))
{

}

/*!
 * \reimp
 */
bool AddJobFlowStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddJobFlowStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddJobFlowStepsRequest::response(QNetworkReply * const reply) const
{
    return new AddJobFlowStepsResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::AddJobFlowStepsRequestPrivate
 * \brief The AddJobFlowStepsRequestPrivate class provides private implementation for AddJobFlowStepsRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 *
 * Constructs a AddJobFlowStepsRequestPrivate object for EMR \a action with,
 * public implementation \a q.
 */
AddJobFlowStepsRequestPrivate::AddJobFlowStepsRequestPrivate(
    const EMRRequest::Action action, AddJobFlowStepsRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddJobFlowStepsRequest
 * class' copy constructor.
 */
AddJobFlowStepsRequestPrivate::AddJobFlowStepsRequestPrivate(
    const AddJobFlowStepsRequestPrivate &other, AddJobFlowStepsRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
