/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sendmessagesrequest.h"
#include "sendmessagesrequest_p.h"
#include "sendmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  SendMessagesRequest
 *
 * @brief  Implements Pinpoint SendMessages requests.
 *
 * @see    PinpointClient::sendMessages
 */

/**
 * @brief  Constructs a new SendMessagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendMessagesResponse::SendMessagesResponse(

/**
 * @brief  Constructs a new SendMessagesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendMessagesRequest::SendMessagesRequest(const SendMessagesRequest &other)
    : PinpointRequest(new SendMessagesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendMessagesRequest object.
 */
SendMessagesRequest::SendMessagesRequest()
    : PinpointRequest(new SendMessagesRequestPrivate(PinpointRequest::SendMessagesAction, this))
{

}

bool SendMessagesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendMessagesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendMessagesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * SendMessagesRequest::response(QNetworkReply * const reply) const
{
    return new SendMessagesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendMessagesRequestPrivate
 *
 * @brief  Private implementation for SendMessagesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendMessagesRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public SendMessagesRequest instance.
 */
SendMessagesRequestPrivate::SendMessagesRequestPrivate(
    const PinpointRequest::Action action, SendMessagesRequest * const q)
    : SendMessagesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendMessagesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendMessagesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendMessagesRequest instance.
 */
SendMessagesRequestPrivate::SendMessagesRequestPrivate(
    const SendMessagesRequestPrivate &other, SendMessagesRequest * const q)
    : SendMessagesPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS