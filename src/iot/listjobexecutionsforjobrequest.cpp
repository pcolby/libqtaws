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

#include "listjobexecutionsforjobrequest.h"
#include "listjobexecutionsforjobrequest_p.h"
#include "listjobexecutionsforjobresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListJobExecutionsForJobRequest
 *
 * @brief  Implements IoT ListJobExecutionsForJob requests.
 *
 * @see    IoTClient::listJobExecutionsForJob
 */

/**
 * @brief  Constructs a new ListJobExecutionsForJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobExecutionsForJobResponse::ListJobExecutionsForJobResponse(

/**
 * @brief  Constructs a new ListJobExecutionsForJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobExecutionsForJobRequest::ListJobExecutionsForJobRequest(const ListJobExecutionsForJobRequest &other)
    : IoTRequest(new ListJobExecutionsForJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobExecutionsForJobRequest object.
 */
ListJobExecutionsForJobRequest::ListJobExecutionsForJobRequest()
    : IoTRequest(new ListJobExecutionsForJobRequestPrivate(IoTRequest::ListJobExecutionsForJobAction, this))
{

}

bool ListJobExecutionsForJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListJobExecutionsForJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobExecutionsForJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListJobExecutionsForJobRequest::response(QNetworkReply * const reply) const
{
    return new ListJobExecutionsForJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListJobExecutionsForJobRequestPrivate
 *
 * @brief  Private implementation for ListJobExecutionsForJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobExecutionsForJobRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListJobExecutionsForJobRequest instance.
 */
ListJobExecutionsForJobRequestPrivate::ListJobExecutionsForJobRequestPrivate(
    const IoTRequest::Action action, ListJobExecutionsForJobRequest * const q)
    : ListJobExecutionsForJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListJobExecutionsForJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobExecutionsForJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobExecutionsForJobRequest instance.
 */
ListJobExecutionsForJobRequestPrivate::ListJobExecutionsForJobRequestPrivate(
    const ListJobExecutionsForJobRequestPrivate &other, ListJobExecutionsForJobRequest * const q)
    : ListJobExecutionsForJobPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS