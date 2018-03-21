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

#include "createuserpoolrequest.h"
#include "createuserpoolrequest_p.h"
#include "createuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  CreateUserPoolRequest
 *
 * @brief  Implements CognitoIdentityProvider CreateUserPool requests.
 *
 * @see    CognitoIdentityProviderClient::createUserPool
 */

/**
 * @brief  Constructs a new CreateUserPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserPoolResponse::CreateUserPoolResponse(

/**
 * @brief  Constructs a new CreateUserPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserPoolRequest::CreateUserPoolRequest(const CreateUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUserPoolRequest object.
 */
CreateUserPoolRequest::CreateUserPoolRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolAction, this))
{

}

bool CreateUserPoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUserPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserPoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * CreateUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUserPoolRequestPrivate
 *
 * @brief  Private implementation for CreateUserPoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public CreateUserPoolRequest instance.
 */
CreateUserPoolRequestPrivate::CreateUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolRequest * const q)
    : CreateUserPoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserPoolRequest instance.
 */
CreateUserPoolRequestPrivate::CreateUserPoolRequestPrivate(
    const CreateUserPoolRequestPrivate &other, CreateUserPoolRequest * const q)
    : CreateUserPoolPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
