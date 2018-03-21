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

#include "getslottypeversionsrequest.h"
#include "getslottypeversionsrequest_p.h"
#include "getslottypeversionsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetSlotTypeVersionsRequest
 *
 * @brief  Implements LexModelBuildingService GetSlotTypeVersions requests.
 *
 * @see    LexModelBuildingServiceClient::getSlotTypeVersions
 */

/**
 * @brief  Constructs a new GetSlotTypeVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSlotTypeVersionsResponse::GetSlotTypeVersionsResponse(

/**
 * @brief  Constructs a new GetSlotTypeVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSlotTypeVersionsRequest::GetSlotTypeVersionsRequest(const GetSlotTypeVersionsRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypeVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSlotTypeVersionsRequest object.
 */
GetSlotTypeVersionsRequest::GetSlotTypeVersionsRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypeVersionsRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypeVersionsAction, this))
{

}

bool GetSlotTypeVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSlotTypeVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSlotTypeVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetSlotTypeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSlotTypeVersionsRequestPrivate
 *
 * @brief  Private implementation for GetSlotTypeVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeVersionsRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetSlotTypeVersionsRequest instance.
 */
GetSlotTypeVersionsRequestPrivate::GetSlotTypeVersionsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypeVersionsRequest * const q)
    : GetSlotTypeVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSlotTypeVersionsRequest instance.
 */
GetSlotTypeVersionsRequestPrivate::GetSlotTypeVersionsRequestPrivate(
    const GetSlotTypeVersionsRequestPrivate &other, GetSlotTypeVersionsRequest * const q)
    : GetSlotTypeVersionsPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
