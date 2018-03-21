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

#include "deleteidentitypoolrequest.h"
#include "deleteidentitypoolrequest_p.h"
#include "deleteidentitypoolresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  DeleteIdentityPoolRequest
 *
 * @brief  Implements CognitoIdentity DeleteIdentityPool requests.
 *
 * @see    CognitoIdentityClient::deleteIdentityPool
 */

/**
 * @brief  Constructs a new DeleteIdentityPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIdentityPoolResponse::DeleteIdentityPoolResponse(

/**
 * @brief  Constructs a new DeleteIdentityPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIdentityPoolRequest::DeleteIdentityPoolRequest(const DeleteIdentityPoolRequest &other)
    : CognitoIdentityRequest(new DeleteIdentityPoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIdentityPoolRequest object.
 */
DeleteIdentityPoolRequest::DeleteIdentityPoolRequest()
    : CognitoIdentityRequest(new DeleteIdentityPoolRequestPrivate(CognitoIdentityRequest::DeleteIdentityPoolAction, this))
{

}

bool DeleteIdentityPoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIdentityPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIdentityPoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * DeleteIdentityPoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityPoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIdentityPoolRequestPrivate
 *
 * @brief  Private implementation for DeleteIdentityPoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public DeleteIdentityPoolRequest instance.
 */
DeleteIdentityPoolRequestPrivate::DeleteIdentityPoolRequestPrivate(
    const CognitoIdentityRequest::Action action, DeleteIdentityPoolRequest * const q)
    : DeleteIdentityPoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIdentityPoolRequest instance.
 */
DeleteIdentityPoolRequestPrivate::DeleteIdentityPoolRequestPrivate(
    const DeleteIdentityPoolRequestPrivate &other, DeleteIdentityPoolRequest * const q)
    : DeleteIdentityPoolPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS