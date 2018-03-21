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

#include "describenetworkinterfacesrequest.h"
#include "describenetworkinterfacesrequest_p.h"
#include "describenetworkinterfacesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeNetworkInterfacesRequest
 *
 * @brief  Implements EC2 DescribeNetworkInterfaces requests.
 *
 * @see    EC2Client::describeNetworkInterfaces
 */

/**
 * @brief  Constructs a new DescribeNetworkInterfacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNetworkInterfacesResponse::DescribeNetworkInterfacesResponse(

/**
 * @brief  Constructs a new DescribeNetworkInterfacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNetworkInterfacesRequest::DescribeNetworkInterfacesRequest(const DescribeNetworkInterfacesRequest &other)
    : EC2Request(new DescribeNetworkInterfacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNetworkInterfacesRequest object.
 */
DescribeNetworkInterfacesRequest::DescribeNetworkInterfacesRequest()
    : EC2Request(new DescribeNetworkInterfacesRequestPrivate(EC2Request::DescribeNetworkInterfacesAction, this))
{

}

bool DescribeNetworkInterfacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNetworkInterfacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNetworkInterfacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeNetworkInterfacesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNetworkInterfacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNetworkInterfacesRequestPrivate
 *
 * @brief  Private implementation for DescribeNetworkInterfacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfacesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeNetworkInterfacesRequest instance.
 */
DescribeNetworkInterfacesRequestPrivate::DescribeNetworkInterfacesRequestPrivate(
    const EC2Request::Action action, DescribeNetworkInterfacesRequest * const q)
    : DescribeNetworkInterfacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNetworkInterfacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNetworkInterfacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNetworkInterfacesRequest instance.
 */
DescribeNetworkInterfacesRequestPrivate::DescribeNetworkInterfacesRequestPrivate(
    const DescribeNetworkInterfacesRequestPrivate &other, DescribeNetworkInterfacesRequest * const q)
    : DescribeNetworkInterfacesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS