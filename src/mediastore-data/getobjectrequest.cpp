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

#include "getobjectrequest.h"
#include "getobjectrequest_p.h"
#include "getobjectresponse.h"
#include "mediastoredatarequest_p.h"

namespace AWS {
namespace MediaStoreData {

/**
 * @class  GetObjectRequest
 *
 * @brief  Implements MediaStoreData GetObject requests.
 *
 * @see    MediaStoreDataClient::getObject
 */

/**
 * @brief  Constructs a new GetObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectResponse::GetObjectResponse(

/**
 * @brief  Constructs a new GetObjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetObjectRequest::GetObjectRequest(const GetObjectRequest &other)
    : MediaStoreDataRequest(new GetObjectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetObjectRequest object.
 */
GetObjectRequest::GetObjectRequest()
    : MediaStoreDataRequest(new GetObjectRequestPrivate(MediaStoreDataRequest::GetObjectAction, this))
{

}

bool GetObjectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetObjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetObjectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaStoreDataClient::send
 */
AwsAbstractResponse * GetObjectRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetObjectRequestPrivate
 *
 * @brief  Private implementation for GetObjectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectRequestPrivate object.
 *
 * @param  action  MediaStoreData action being performed.
 * @param  q       Pointer to this object's public GetObjectRequest instance.
 */
GetObjectRequestPrivate::GetObjectRequestPrivate(
    const MediaStoreDataRequest::Action action, GetObjectRequest * const q)
    : GetObjectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetObjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetObjectRequest instance.
 */
GetObjectRequestPrivate::GetObjectRequestPrivate(
    const GetObjectRequestPrivate &other, GetObjectRequest * const q)
    : GetObjectPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace AWS