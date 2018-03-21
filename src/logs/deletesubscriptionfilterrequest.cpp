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

#include "deletesubscriptionfilterrequest.h"
#include "deletesubscriptionfilterrequest_p.h"
#include "deletesubscriptionfilterresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteSubscriptionFilterRequest
 *
 * @brief  Implements CloudWatchLogs DeleteSubscriptionFilter requests.
 *
 * @see    CloudWatchLogsClient::deleteSubscriptionFilter
 */

/**
 * @brief  Constructs a new DeleteSubscriptionFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubscriptionFilterResponse::DeleteSubscriptionFilterResponse(

/**
 * @brief  Constructs a new DeleteSubscriptionFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSubscriptionFilterRequest::DeleteSubscriptionFilterRequest(const DeleteSubscriptionFilterRequest &other)
    : CloudWatchLogsRequest(new DeleteSubscriptionFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSubscriptionFilterRequest object.
 */
DeleteSubscriptionFilterRequest::DeleteSubscriptionFilterRequest()
    : CloudWatchLogsRequest(new DeleteSubscriptionFilterRequestPrivate(CloudWatchLogsRequest::DeleteSubscriptionFilterAction, this))
{

}

bool DeleteSubscriptionFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSubscriptionFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSubscriptionFilterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteSubscriptionFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriptionFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSubscriptionFilterRequestPrivate
 *
 * @brief  Private implementation for DeleteSubscriptionFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionFilterRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteSubscriptionFilterRequest instance.
 */
DeleteSubscriptionFilterRequestPrivate::DeleteSubscriptionFilterRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteSubscriptionFilterRequest * const q)
    : DeleteSubscriptionFilterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriptionFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSubscriptionFilterRequest instance.
 */
DeleteSubscriptionFilterRequestPrivate::DeleteSubscriptionFilterRequestPrivate(
    const DeleteSubscriptionFilterRequestPrivate &other, DeleteSubscriptionFilterRequest * const q)
    : DeleteSubscriptionFilterPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS