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

#include "modifyinstancefleetrequest.h"
#include "modifyinstancefleetrequest_p.h"
#include "modifyinstancefleetresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ModifyInstanceFleetRequest
 * \brief The ModifyInstanceFleetRequest class provides an interface for EMR ModifyInstanceFleet requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::modifyInstanceFleet
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyInstanceFleetRequest::ModifyInstanceFleetRequest(const ModifyInstanceFleetRequest &other)
    : EMRRequest(new ModifyInstanceFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyInstanceFleetRequest object.
 */
ModifyInstanceFleetRequest::ModifyInstanceFleetRequest()
    : EMRRequest(new ModifyInstanceFleetRequestPrivate(EMRRequest::ModifyInstanceFleetAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyInstanceFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceFleetRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceFleetResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::ModifyInstanceFleetRequestPrivate
 * \brief The ModifyInstanceFleetRequestPrivate class provides private implementation for ModifyInstanceFleetRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ModifyInstanceFleetRequestPrivate object for EMR \a action,
 * with public implementation \a q.
 */
ModifyInstanceFleetRequestPrivate::ModifyInstanceFleetRequestPrivate(
    const EMRRequest::Action action, ModifyInstanceFleetRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceFleetRequest
 * class' copy constructor.
 */
ModifyInstanceFleetRequestPrivate::ModifyInstanceFleetRequestPrivate(
    const ModifyInstanceFleetRequestPrivate &other, ModifyInstanceFleetRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
