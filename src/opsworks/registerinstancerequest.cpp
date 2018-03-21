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

#include "registerinstancerequest.h"
#include "registerinstancerequest_p.h"
#include "registerinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  RegisterInstanceRequest
 *
 * @brief  Implements OpsWorks RegisterInstance requests.
 *
 * @see    OpsWorksClient::registerInstance
 */

/**
 * @brief  Constructs a new RegisterInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterInstanceResponse::RegisterInstanceResponse(

/**
 * @brief  Constructs a new RegisterInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterInstanceRequest::RegisterInstanceRequest(const RegisterInstanceRequest &other)
    : OpsWorksRequest(new RegisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterInstanceRequest object.
 */
RegisterInstanceRequest::RegisterInstanceRequest()
    : OpsWorksRequest(new RegisterInstanceRequestPrivate(OpsWorksRequest::RegisterInstanceAction, this))
{

}

bool RegisterInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * RegisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterInstanceRequestPrivate
 *
 * @brief  Private implementation for RegisterInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public RegisterInstanceRequest instance.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const OpsWorksRequest::Action action, RegisterInstanceRequest * const q)
    : RegisterInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterInstanceRequest instance.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const RegisterInstanceRequestPrivate &other, RegisterInstanceRequest * const q)
    : RegisterInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS