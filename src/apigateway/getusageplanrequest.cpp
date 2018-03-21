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

#include "getusageplanrequest.h"
#include "getusageplanrequest_p.h"
#include "getusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetUsagePlanRequest
 *
 * @brief  Implements APIGateway GetUsagePlan requests.
 *
 * @see    APIGatewayClient::getUsagePlan
 */

/**
 * @brief  Constructs a new GetUsagePlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUsagePlanResponse::GetUsagePlanResponse(

/**
 * @brief  Constructs a new GetUsagePlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUsagePlanRequest::GetUsagePlanRequest(const GetUsagePlanRequest &other)
    : APIGatewayRequest(new GetUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUsagePlanRequest object.
 */
GetUsagePlanRequest::GetUsagePlanRequest()
    : APIGatewayRequest(new GetUsagePlanRequestPrivate(APIGatewayRequest::GetUsagePlanAction, this))
{

}

bool GetUsagePlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUsagePlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUsagePlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUsagePlanRequestPrivate
 *
 * @brief  Private implementation for GetUsagePlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetUsagePlanRequest instance.
 */
GetUsagePlanRequestPrivate::GetUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, GetUsagePlanRequest * const q)
    : GetUsagePlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUsagePlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUsagePlanRequest instance.
 */
GetUsagePlanRequestPrivate::GetUsagePlanRequestPrivate(
    const GetUsagePlanRequestPrivate &other, GetUsagePlanRequest * const q)
    : GetUsagePlanPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
