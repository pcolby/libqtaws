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

#include "tagqueuerequest.h"
#include "tagqueuerequest_p.h"
#include "tagqueueresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  TagQueueRequest
 *
 * @brief  Implements SQS TagQueue requests.
 *
 * @see    SQSClient::tagQueue
 */

/**
 * @brief  Constructs a new TagQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagQueueResponse::TagQueueResponse(

/**
 * @brief  Constructs a new TagQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagQueueRequest::TagQueueRequest(const TagQueueRequest &other)
    : SQSRequest(new TagQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagQueueRequest object.
 */
TagQueueRequest::TagQueueRequest()
    : SQSRequest(new TagQueueRequestPrivate(SQSRequest::TagQueueAction, this))
{

}

bool TagQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * TagQueueRequest::response(QNetworkReply * const reply) const
{
    return new TagQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagQueueRequestPrivate
 *
 * @brief  Private implementation for TagQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagQueueRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public TagQueueRequest instance.
 */
TagQueueRequestPrivate::TagQueueRequestPrivate(
    const SQSRequest::Action action, TagQueueRequest * const q)
    : TagQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagQueueRequest instance.
 */
TagQueueRequestPrivate::TagQueueRequestPrivate(
    const TagQueueRequestPrivate &other, TagQueueRequest * const q)
    : TagQueuePrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
