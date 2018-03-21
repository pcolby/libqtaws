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

#include "deletecollectionrequest.h"
#include "deletecollectionrequest_p.h"
#include "deletecollectionresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  DeleteCollectionRequest
 *
 * @brief  Implements Rekognition DeleteCollection requests.
 *
 * @see    RekognitionClient::deleteCollection
 */

/**
 * @brief  Constructs a new DeleteCollectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCollectionResponse::DeleteCollectionResponse(

/**
 * @brief  Constructs a new DeleteCollectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCollectionRequest::DeleteCollectionRequest(const DeleteCollectionRequest &other)
    : RekognitionRequest(new DeleteCollectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCollectionRequest object.
 */
DeleteCollectionRequest::DeleteCollectionRequest()
    : RekognitionRequest(new DeleteCollectionRequestPrivate(RekognitionRequest::DeleteCollectionAction, this))
{

}

bool DeleteCollectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCollectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCollectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * DeleteCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCollectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCollectionRequestPrivate
 *
 * @brief  Private implementation for DeleteCollectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCollectionRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public DeleteCollectionRequest instance.
 */
DeleteCollectionRequestPrivate::DeleteCollectionRequestPrivate(
    const RekognitionRequest::Action action, DeleteCollectionRequest * const q)
    : DeleteCollectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCollectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCollectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCollectionRequest instance.
 */
DeleteCollectionRequestPrivate::DeleteCollectionRequestPrivate(
    const DeleteCollectionRequestPrivate &other, DeleteCollectionRequest * const q)
    : DeleteCollectionPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS
