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

#include "deletebucketlifecyclerequest.h"
#include "deletebucketlifecyclerequest_p.h"
#include "deletebucketlifecycleresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketLifecycleRequest
 *
 * @brief  Implements S3 DeleteBucketLifecycle requests.
 *
 * @see    S3Client::deleteBucketLifecycle
 */

/**
 * @brief  Constructs a new DeleteBucketLifecycleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketLifecycleResponse::DeleteBucketLifecycleResponse(

/**
 * @brief  Constructs a new DeleteBucketLifecycleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest(const DeleteBucketLifecycleRequest &other)
    : S3Request(new DeleteBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBucketLifecycleRequest object.
 */
DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest()
    : S3Request(new DeleteBucketLifecycleRequestPrivate(S3Request::DeleteBucketLifecycleAction, this))
{

}

bool DeleteBucketLifecycleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBucketLifecycleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketLifecycleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * DeleteBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketLifecycleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBucketLifecycleRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketLifecycleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketLifecycleRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketLifecycleRequest instance.
 */
DeleteBucketLifecycleRequestPrivate::DeleteBucketLifecycleRequestPrivate(
    const S3Request::Action action, DeleteBucketLifecycleRequest * const q)
    : DeleteBucketLifecyclePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketLifecycleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketLifecycleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketLifecycleRequest instance.
 */
DeleteBucketLifecycleRequestPrivate::DeleteBucketLifecycleRequestPrivate(
    const DeleteBucketLifecycleRequestPrivate &other, DeleteBucketLifecycleRequest * const q)
    : DeleteBucketLifecyclePrivate(other, q)
{

}

} // namespace S3
} // namespace AWS