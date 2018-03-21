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

#include "updateaccountrequest.h"
#include "updateaccountrequest_p.h"
#include "updateaccountresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateAccountRequest
 *
 * @brief  Implements APIGateway UpdateAccount requests.
 *
 * @see    APIGatewayClient::updateAccount
 */

/**
 * @brief  Constructs a new UpdateAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccountResponse::UpdateAccountResponse(

/**
 * @brief  Constructs a new UpdateAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAccountRequest::UpdateAccountRequest(const UpdateAccountRequest &other)
    : APIGatewayRequest(new UpdateAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAccountRequest object.
 */
UpdateAccountRequest::UpdateAccountRequest()
    : APIGatewayRequest(new UpdateAccountRequestPrivate(APIGatewayRequest::UpdateAccountAction, this))
{

}

bool UpdateAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateAccountRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAccountRequestPrivate
 *
 * @brief  Private implementation for UpdateAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateAccountRequest instance.
 */
UpdateAccountRequestPrivate::UpdateAccountRequestPrivate(
    const APIGatewayRequest::Action action, UpdateAccountRequest * const q)
    : UpdateAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAccountRequest instance.
 */
UpdateAccountRequestPrivate::UpdateAccountRequestPrivate(
    const UpdateAccountRequestPrivate &other, UpdateAccountRequest * const q)
    : UpdateAccountPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS