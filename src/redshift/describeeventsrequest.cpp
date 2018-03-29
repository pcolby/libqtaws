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

#include "describeeventsrequest.h"
#include "describeeventsrequest_p.h"
#include "describeeventsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeEventsRequest
 *
 * @brief  Implements Redshift DescribeEvents requests.
 *
 * @see    RedshiftClient::describeEvents
 */

/**
 * @brief  Constructs a new DescribeEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventsRequest::DescribeEventsRequest(const DescribeEventsRequest &other)
    : RedshiftRequest(new DescribeEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEventsRequest object.
 */
DescribeEventsRequest::DescribeEventsRequest()
    : RedshiftRequest(new DescribeEventsRequestPrivate(RedshiftRequest::DescribeEventsAction, this))
{

}

bool DescribeEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEventsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeEventsRequest instance.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const RedshiftRequest::Action action, DescribeEventsRequest * const q)
    : DescribeEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventsRequest instance.
 */
DescribeEventsRequestPrivate::DescribeEventsRequestPrivate(
    const DescribeEventsRequestPrivate &other, DescribeEventsRequest * const q)
    : DescribeEventsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
