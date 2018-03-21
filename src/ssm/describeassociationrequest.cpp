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

#include "describeassociationrequest.h"
#include "describeassociationrequest_p.h"
#include "describeassociationresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeAssociationRequest
 *
 * @brief  Implements SSM DescribeAssociation requests.
 *
 * @see    SSMClient::describeAssociation
 */

/**
 * @brief  Constructs a new DescribeAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAssociationResponse::DescribeAssociationResponse(

/**
 * @brief  Constructs a new DescribeAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAssociationRequest::DescribeAssociationRequest(const DescribeAssociationRequest &other)
    : SSMRequest(new DescribeAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAssociationRequest object.
 */
DescribeAssociationRequest::DescribeAssociationRequest()
    : SSMRequest(new DescribeAssociationRequestPrivate(SSMRequest::DescribeAssociationAction, this))
{

}

bool DescribeAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAssociationRequestPrivate
 *
 * @brief  Private implementation for DescribeAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssociationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeAssociationRequest instance.
 */
DescribeAssociationRequestPrivate::DescribeAssociationRequestPrivate(
    const SSMRequest::Action action, DescribeAssociationRequest * const q)
    : DescribeAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAssociationRequest instance.
 */
DescribeAssociationRequestPrivate::DescribeAssociationRequestPrivate(
    const DescribeAssociationRequestPrivate &other, DescribeAssociationRequest * const q)
    : DescribeAssociationPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
