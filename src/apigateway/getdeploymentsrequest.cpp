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

#include "getdeploymentsrequest.h"
#include "getdeploymentsrequest_p.h"
#include "getdeploymentsresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDeploymentsRequest
 *
 * @brief  Implements APIGateway GetDeployments requests.
 *
 * @see    APIGatewayClient::getDeployments
 */

/**
 * @brief  Constructs a new GetDeploymentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeploymentsResponse::GetDeploymentsResponse(

/**
 * @brief  Constructs a new GetDeploymentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeploymentsRequest::GetDeploymentsRequest(const GetDeploymentsRequest &other)
    : APIGatewayRequest(new GetDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeploymentsRequest object.
 */
GetDeploymentsRequest::GetDeploymentsRequest()
    : APIGatewayRequest(new GetDeploymentsRequestPrivate(APIGatewayRequest::GetDeploymentsAction, this))
{

}

bool GetDeploymentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeploymentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeploymentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeploymentsRequestPrivate
 *
 * @brief  Private implementation for GetDeploymentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetDeploymentsRequest instance.
 */
GetDeploymentsRequestPrivate::GetDeploymentsRequestPrivate(
    const APIGatewayRequest::Action action, GetDeploymentsRequest * const q)
    : GetDeploymentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeploymentsRequest instance.
 */
GetDeploymentsRequestPrivate::GetDeploymentsRequestPrivate(
    const GetDeploymentsRequestPrivate &other, GetDeploymentsRequest * const q)
    : GetDeploymentsPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
