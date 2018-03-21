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

#include "describeaccountattributesrequest.h"
#include "describeaccountattributesrequest_p.h"
#include "describeaccountattributesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeAccountAttributesRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeAccountAttributes requests.
 *
 * @see    DatabaseMigrationServiceClient::describeAccountAttributes
 */

/**
 * @brief  Constructs a new DescribeAccountAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountAttributesResponse::DescribeAccountAttributesResponse(

/**
 * @brief  Constructs a new DescribeAccountAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAccountAttributesRequest::DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeAccountAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAccountAttributesRequest object.
 */
DescribeAccountAttributesRequest::DescribeAccountAttributesRequest()
    : DatabaseMigrationServiceRequest(new DescribeAccountAttributesRequestPrivate(DatabaseMigrationServiceRequest::DescribeAccountAttributesAction, this))
{

}

bool DescribeAccountAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAccountAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAccountAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * DescribeAccountAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAccountAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeAccountAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeAccountAttributesRequest instance.
 */
DescribeAccountAttributesRequestPrivate::DescribeAccountAttributesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeAccountAttributesRequest * const q)
    : DescribeAccountAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAccountAttributesRequest instance.
 */
DescribeAccountAttributesRequestPrivate::DescribeAccountAttributesRequestPrivate(
    const DescribeAccountAttributesRequestPrivate &other, DescribeAccountAttributesRequest * const q)
    : DescribeAccountAttributesPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS