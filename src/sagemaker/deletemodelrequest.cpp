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

#include "deletemodelrequest.h"
#include "deletemodelrequest_p.h"
#include "deletemodelresponse.h"
#include "sagemakerrequest_p.h"

namespace AWS {
namespace SageMaker {

/**
 * @class  DeleteModelRequest
 *
 * @brief  Implements SageMaker DeleteModel requests.
 *
 * @see    SageMakerClient::deleteModel
 */

/**
 * @brief  Constructs a new DeleteModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteModelResponse::DeleteModelResponse(

/**
 * @brief  Constructs a new DeleteModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteModelRequest::DeleteModelRequest(const DeleteModelRequest &other)
    : SageMakerRequest(new DeleteModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteModelRequest object.
 */
DeleteModelRequest::DeleteModelRequest()
    : SageMakerRequest(new DeleteModelRequestPrivate(SageMakerRequest::DeleteModelAction, this))
{

}

bool DeleteModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteModelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
AwsAbstractResponse * DeleteModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteModelRequestPrivate
 *
 * @brief  Private implementation for DeleteModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteModelRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public DeleteModelRequest instance.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelRequest * const q)
    : DeleteModelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteModelRequest instance.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const DeleteModelRequestPrivate &other, DeleteModelRequest * const q)
    : DeleteModelPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace AWS
