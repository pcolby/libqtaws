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

#include "updatedeploymentrequest.h"
#include "updatedeploymentrequest_p.h"
#include "updatedeploymentresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateDeploymentRequest
 *
 * @brief  Implements APIGateway UpdateDeployment requests.
 *
 * @see    APIGatewayClient::updateDeployment
 */

/**
 * @brief  Constructs a new UpdateDeploymentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDeploymentRequest::UpdateDeploymentRequest(const UpdateDeploymentRequest &other)
    : APIGatewayRequest(new UpdateDeploymentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDeploymentRequest object.
 */
UpdateDeploymentRequest::UpdateDeploymentRequest()
    : APIGatewayRequest(new UpdateDeploymentRequestPrivate(APIGatewayRequest::UpdateDeploymentAction, this))
{

}

bool UpdateDeploymentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDeploymentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDeploymentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeploymentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDeploymentRequestPrivate
 *
 * @brief  Private implementation for UpdateDeploymentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeploymentRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateDeploymentRequest instance.
 */
UpdateDeploymentRequestPrivate::UpdateDeploymentRequestPrivate(
    const APIGatewayRequest::Action action, UpdateDeploymentRequest * const q)
    : UpdateDeploymentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeploymentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeploymentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDeploymentRequest instance.
 */
UpdateDeploymentRequestPrivate::UpdateDeploymentRequestPrivate(
    const UpdateDeploymentRequestPrivate &other, UpdateDeploymentRequest * const q)
    : UpdateDeploymentPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
