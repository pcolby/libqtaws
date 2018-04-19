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

#include "deletegcmchannelrequest.h"
#include "deletegcmchannelrequest_p.h"
#include "deletegcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteGcmChannelRequest
 * \brief The DeleteGcmChannelRequest class provides an interface for Pinpoint DeleteGcmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteGcmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGcmChannelRequest::DeleteGcmChannelRequest(const DeleteGcmChannelRequest &other)
    : PinpointRequest(new DeleteGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGcmChannelRequest object.
 */
DeleteGcmChannelRequest::DeleteGcmChannelRequest()
    : PinpointRequest(new DeleteGcmChannelRequestPrivate(PinpointRequest::DeleteGcmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGcmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGcmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGcmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteGcmChannelRequestPrivate
 * \brief The DeleteGcmChannelRequestPrivate class provides private implementation for DeleteGcmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a DeleteGcmChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
DeleteGcmChannelRequestPrivate::DeleteGcmChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteGcmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGcmChannelRequest
 * class' copy constructor.
 */
DeleteGcmChannelRequestPrivate::DeleteGcmChannelRequestPrivate(
    const DeleteGcmChannelRequestPrivate &other, DeleteGcmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
