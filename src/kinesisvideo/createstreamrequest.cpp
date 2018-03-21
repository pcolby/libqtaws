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

#include "createstreamrequest.h"
#include "createstreamrequest_p.h"
#include "createstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace AWS {
namespace KinesisVideo {

/**
 * @class  CreateStreamRequest
 *
 * @brief  Implements KinesisVideo CreateStream requests.
 *
 * @see    KinesisVideoClient::createStream
 */

/**
 * @brief  Constructs a new CreateStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamResponse::CreateStreamResponse(

/**
 * @brief  Constructs a new CreateStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStreamRequest::CreateStreamRequest(const CreateStreamRequest &other)
    : KinesisVideoRequest(new CreateStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStreamRequest object.
 */
CreateStreamRequest::CreateStreamRequest()
    : KinesisVideoRequest(new CreateStreamRequestPrivate(KinesisVideoRequest::CreateStreamAction, this))
{

}

bool CreateStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
AwsAbstractResponse * CreateStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStreamRequestPrivate
 *
 * @brief  Private implementation for CreateStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public CreateStreamRequest instance.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const KinesisVideoRequest::Action action, CreateStreamRequest * const q)
    : CreateStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStreamRequest instance.
 */
CreateStreamRequestPrivate::CreateStreamRequestPrivate(
    const CreateStreamRequestPrivate &other, CreateStreamRequest * const q)
    : CreateStreamPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace AWS
