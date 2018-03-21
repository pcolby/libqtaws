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

#include "createdbinstancereadreplicarequest.h"
#include "createdbinstancereadreplicarequest_p.h"
#include "createdbinstancereadreplicaresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBInstanceReadReplicaRequest
 *
 * @brief  Implements RDS CreateDBInstanceReadReplica requests.
 *
 * @see    RDSClient::createDBInstanceReadReplica
 */

/**
 * @brief  Constructs a new CreateDBInstanceReadReplicaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBInstanceReadReplicaResponse::CreateDBInstanceReadReplicaResponse(

/**
 * @brief  Constructs a new CreateDBInstanceReadReplicaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBInstanceReadReplicaRequest::CreateDBInstanceReadReplicaRequest(const CreateDBInstanceReadReplicaRequest &other)
    : RDSRequest(new CreateDBInstanceReadReplicaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBInstanceReadReplicaRequest object.
 */
CreateDBInstanceReadReplicaRequest::CreateDBInstanceReadReplicaRequest()
    : RDSRequest(new CreateDBInstanceReadReplicaRequestPrivate(RDSRequest::CreateDBInstanceReadReplicaAction, this))
{

}

bool CreateDBInstanceReadReplicaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBInstanceReadReplicaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBInstanceReadReplicaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CreateDBInstanceReadReplicaRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBInstanceReadReplicaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBInstanceReadReplicaRequestPrivate
 *
 * @brief  Private implementation for CreateDBInstanceReadReplicaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBInstanceReadReplicaRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBInstanceReadReplicaRequest instance.
 */
CreateDBInstanceReadReplicaRequestPrivate::CreateDBInstanceReadReplicaRequestPrivate(
    const RDSRequest::Action action, CreateDBInstanceReadReplicaRequest * const q)
    : CreateDBInstanceReadReplicaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBInstanceReadReplicaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBInstanceReadReplicaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBInstanceReadReplicaRequest instance.
 */
CreateDBInstanceReadReplicaRequestPrivate::CreateDBInstanceReadReplicaRequestPrivate(
    const CreateDBInstanceReadReplicaRequestPrivate &other, CreateDBInstanceReadReplicaRequest * const q)
    : CreateDBInstanceReadReplicaPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS