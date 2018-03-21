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

#include "stoploggingrequest.h"
#include "stoploggingrequest_p.h"
#include "stoploggingresponse.h"
#include "cloudtrailrequest_p.h"

namespace AWS {
namespace CloudTrail {

/**
 * @class  StopLoggingRequest
 *
 * @brief  Implements CloudTrail StopLogging requests.
 *
 * @see    CloudTrailClient::stopLogging
 */

/**
 * @brief  Constructs a new StopLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopLoggingResponse::StopLoggingResponse(

/**
 * @brief  Constructs a new StopLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopLoggingRequest::StopLoggingRequest(const StopLoggingRequest &other)
    : CloudTrailRequest(new StopLoggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopLoggingRequest object.
 */
StopLoggingRequest::StopLoggingRequest()
    : CloudTrailRequest(new StopLoggingRequestPrivate(CloudTrailRequest::StopLoggingAction, this))
{

}

bool StopLoggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopLoggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * StopLoggingRequest::response(QNetworkReply * const reply) const
{
    return new StopLoggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopLoggingRequestPrivate
 *
 * @brief  Private implementation for StopLoggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopLoggingRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public StopLoggingRequest instance.
 */
StopLoggingRequestPrivate::StopLoggingRequestPrivate(
    const CloudTrailRequest::Action action, StopLoggingRequest * const q)
    : StopLoggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopLoggingRequest instance.
 */
StopLoggingRequestPrivate::StopLoggingRequestPrivate(
    const StopLoggingRequestPrivate &other, StopLoggingRequest * const q)
    : StopLoggingPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace AWS