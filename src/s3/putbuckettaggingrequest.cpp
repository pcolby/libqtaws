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

#include "putbuckettaggingrequest.h"
#include "putbuckettaggingrequest_p.h"
#include "putbuckettaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketTaggingRequest
 *
 * @brief  Implements S3 PutBucketTagging requests.
 *
 * @see    S3Client::putBucketTagging
 */

/**
 * @brief  Constructs a new PutBucketTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketTaggingRequest::PutBucketTaggingRequest(const PutBucketTaggingRequest &other)
    : S3Request(new PutBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketTaggingRequest object.
 */
PutBucketTaggingRequest::PutBucketTaggingRequest()
    : S3Request(new PutBucketTaggingRequestPrivate(S3Request::PutBucketTaggingAction, this))
{

}

bool PutBucketTaggingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketTaggingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketTaggingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketTaggingRequestPrivate
 *
 * @brief  Private implementation for PutBucketTaggingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketTaggingRequest instance.
 */
PutBucketTaggingRequestPrivate::PutBucketTaggingRequestPrivate(
    const S3Request::Action action, PutBucketTaggingRequest * const q)
    : PutBucketTaggingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketTaggingRequest instance.
 */
PutBucketTaggingRequestPrivate::PutBucketTaggingRequestPrivate(
    const PutBucketTaggingRequestPrivate &other, PutBucketTaggingRequest * const q)
    : PutBucketTaggingPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
