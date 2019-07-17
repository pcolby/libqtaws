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

#include "getsatelliterequest.h"
#include "getsatelliterequest_p.h"
#include "getsatelliteresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetSatelliteRequest
 * \brief The GetSatelliteRequest class provides an interface for GroundStation GetSatellite requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getSatellite
 */

/*!
 * Constructs a copy of \a other.
 */
GetSatelliteRequest::GetSatelliteRequest(const GetSatelliteRequest &other)
    : GroundStationRequest(new GetSatelliteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSatelliteRequest object.
 */
GetSatelliteRequest::GetSatelliteRequest()
    : GroundStationRequest(new GetSatelliteRequestPrivate(GroundStationRequest::GetSatelliteAction, this))
{

}

/*!
 * \reimp
 */
bool GetSatelliteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSatelliteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSatelliteRequest::response(QNetworkReply * const reply) const
{
    return new GetSatelliteResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetSatelliteRequestPrivate
 * \brief The GetSatelliteRequestPrivate class provides private implementation for GetSatelliteRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetSatelliteRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetSatelliteRequestPrivate::GetSatelliteRequestPrivate(
    const GroundStationRequest::Action action, GetSatelliteRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSatelliteRequest
 * class' copy constructor.
 */
GetSatelliteRequestPrivate::GetSatelliteRequestPrivate(
    const GetSatelliteRequestPrivate &other, GetSatelliteRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
