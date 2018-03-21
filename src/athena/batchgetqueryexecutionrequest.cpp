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

#include "batchgetqueryexecutionrequest.h"
#include "batchgetqueryexecutionrequest_p.h"
#include "batchgetqueryexecutionresponse.h"
#include "athenarequest_p.h"

namespace AWS {
namespace Athena {

/**
 * @class  BatchGetQueryExecutionRequest
 *
 * @brief  Implements Athena BatchGetQueryExecution requests.
 *
 * @see    AthenaClient::batchGetQueryExecution
 */

/**
 * @brief  Constructs a new BatchGetQueryExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetQueryExecutionResponse::BatchGetQueryExecutionResponse(

/**
 * @brief  Constructs a new BatchGetQueryExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetQueryExecutionRequest::BatchGetQueryExecutionRequest(const BatchGetQueryExecutionRequest &other)
    : AthenaRequest(new BatchGetQueryExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetQueryExecutionRequest object.
 */
BatchGetQueryExecutionRequest::BatchGetQueryExecutionRequest()
    : AthenaRequest(new BatchGetQueryExecutionRequestPrivate(AthenaRequest::BatchGetQueryExecutionAction, this))
{

}

bool BatchGetQueryExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetQueryExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetQueryExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * BatchGetQueryExecutionRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetQueryExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetQueryExecutionRequestPrivate
 *
 * @brief  Private implementation for BatchGetQueryExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetQueryExecutionRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public BatchGetQueryExecutionRequest instance.
 */
BatchGetQueryExecutionRequestPrivate::BatchGetQueryExecutionRequestPrivate(
    const AthenaRequest::Action action, BatchGetQueryExecutionRequest * const q)
    : BatchGetQueryExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetQueryExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetQueryExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetQueryExecutionRequest instance.
 */
BatchGetQueryExecutionRequestPrivate::BatchGetQueryExecutionRequestPrivate(
    const BatchGetQueryExecutionRequestPrivate &other, BatchGetQueryExecutionRequest * const q)
    : BatchGetQueryExecutionPrivate(other, q)
{

}

} // namespace Athena
} // namespace AWS
