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

#include "startmodelrequest.h"
#include "startmodelrequest_p.h"
#include "startmodelresponse.h"
#include "lookoutforvisionrequest_p.h"

namespace QtAws {
namespace LookoutforVision {

/*!
 * \class QtAws::LookoutforVision::StartModelRequest
 * \brief The StartModelRequest class provides an interface for LookoutforVision StartModel requests.
 *
 * \inmodule QtAwsLookoutforVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutforVisionClient::startModel
 */

/*!
 * Constructs a copy of \a other.
 */
StartModelRequest::StartModelRequest(const StartModelRequest &other)
    : LookoutforVisionRequest(new StartModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartModelRequest object.
 */
StartModelRequest::StartModelRequest()
    : LookoutforVisionRequest(new StartModelRequestPrivate(LookoutforVisionRequest::StartModelAction, this))
{

}

/*!
 * \reimp
 */
bool StartModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartModelRequest::response(QNetworkReply * const reply) const
{
    return new StartModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutforVision::StartModelRequestPrivate
 * \brief The StartModelRequestPrivate class provides private implementation for StartModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutforVision
 */

/*!
 * Constructs a StartModelRequestPrivate object for LookoutforVision \a action,
 * with public implementation \a q.
 */
StartModelRequestPrivate::StartModelRequestPrivate(
    const LookoutforVisionRequest::Action action, StartModelRequest * const q)
    : LookoutforVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartModelRequest
 * class' copy constructor.
 */
StartModelRequestPrivate::StartModelRequestPrivate(
    const StartModelRequestPrivate &other, StartModelRequest * const q)
    : LookoutforVisionRequestPrivate(other, q)
{

}

} // namespace LookoutforVision
} // namespace QtAws
