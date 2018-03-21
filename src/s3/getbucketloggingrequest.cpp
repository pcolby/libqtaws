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

#include "getbucketloggingrequest.h"
#include "getbucketloggingrequest_p.h"
#include "getbucketloggingresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketLoggingRequest
 *
 * @brief  Implements S3 GetBucketLogging requests.
 *
 * @see    S3Client::getBucketLogging
 */

/**
 * @brief  Constructs a new GetBucketLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketLoggingResponse::GetBucketLoggingResponse(

/**
 * @brief  Constructs a new GetBucketLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketLoggingRequest::GetBucketLoggingRequest(const GetBucketLoggingRequest &other)
    : S3Request(new GetBucketLoggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketLoggingRequest object.
 */
GetBucketLoggingRequest::GetBucketLoggingRequest()
    : S3Request(new GetBucketLoggingRequestPrivate(S3Request::GetBucketLoggingAction, this))
{

}

bool GetBucketLoggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketLoggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketLoggingRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLoggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketLoggingRequestPrivate
 *
 * @brief  Private implementation for GetBucketLoggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLoggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketLoggingRequest instance.
 */
GetBucketLoggingRequestPrivate::GetBucketLoggingRequestPrivate(
    const S3Request::Action action, GetBucketLoggingRequest * const q)
    : GetBucketLoggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketLoggingRequest instance.
 */
GetBucketLoggingRequestPrivate::GetBucketLoggingRequestPrivate(
    const GetBucketLoggingRequestPrivate &other, GetBucketLoggingRequest * const q)
    : GetBucketLoggingPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS