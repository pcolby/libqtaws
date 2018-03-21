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

#include "startfacesearchrequest.h"
#include "startfacesearchrequest_p.h"
#include "startfacesearchresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  StartFaceSearchRequest
 *
 * @brief  Implements Rekognition StartFaceSearch requests.
 *
 * @see    RekognitionClient::startFaceSearch
 */

/**
 * @brief  Constructs a new StartFaceSearchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartFaceSearchResponse::StartFaceSearchResponse(

/**
 * @brief  Constructs a new StartFaceSearchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartFaceSearchRequest::StartFaceSearchRequest(const StartFaceSearchRequest &other)
    : RekognitionRequest(new StartFaceSearchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartFaceSearchRequest object.
 */
StartFaceSearchRequest::StartFaceSearchRequest()
    : RekognitionRequest(new StartFaceSearchRequestPrivate(RekognitionRequest::StartFaceSearchAction, this))
{

}

bool StartFaceSearchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartFaceSearchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartFaceSearchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * StartFaceSearchRequest::response(QNetworkReply * const reply) const
{
    return new StartFaceSearchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartFaceSearchRequestPrivate
 *
 * @brief  Private implementation for StartFaceSearchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartFaceSearchRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public StartFaceSearchRequest instance.
 */
StartFaceSearchRequestPrivate::StartFaceSearchRequestPrivate(
    const RekognitionRequest::Action action, StartFaceSearchRequest * const q)
    : StartFaceSearchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartFaceSearchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartFaceSearchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartFaceSearchRequest instance.
 */
StartFaceSearchRequestPrivate::StartFaceSearchRequestPrivate(
    const StartFaceSearchRequestPrivate &other, StartFaceSearchRequest * const q)
    : StartFaceSearchPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS