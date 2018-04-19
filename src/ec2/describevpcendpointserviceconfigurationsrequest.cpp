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

#include "describevpcendpointserviceconfigurationsrequest.h"
#include "describevpcendpointserviceconfigurationsrequest_p.h"
#include "describevpcendpointserviceconfigurationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServiceConfigurationsRequest
 * \brief The DescribeVpcEndpointServiceConfigurationsRequest class provides an interface for EC2 DescribeVpcEndpointServiceConfigurations requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcEndpointServiceConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVpcEndpointServiceConfigurationsRequest::DescribeVpcEndpointServiceConfigurationsRequest(const DescribeVpcEndpointServiceConfigurationsRequest &other)
    : EC2Request(new DescribeVpcEndpointServiceConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVpcEndpointServiceConfigurationsRequest object.
 */
DescribeVpcEndpointServiceConfigurationsRequest::DescribeVpcEndpointServiceConfigurationsRequest()
    : EC2Request(new DescribeVpcEndpointServiceConfigurationsRequestPrivate(EC2Request::DescribeVpcEndpointServiceConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVpcEndpointServiceConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVpcEndpointServiceConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVpcEndpointServiceConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointServiceConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServiceConfigurationsRequestPrivate
 * \brief The DescribeVpcEndpointServiceConfigurationsRequestPrivate class provides private implementation for DescribeVpcEndpointServiceConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointServiceConfigurationsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DescribeVpcEndpointServiceConfigurationsRequestPrivate::DescribeVpcEndpointServiceConfigurationsRequestPrivate(
    const EC2Request::Action action, DescribeVpcEndpointServiceConfigurationsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointServiceConfigurationsRequest
 * class' copy constructor.
 */
DescribeVpcEndpointServiceConfigurationsRequestPrivate::DescribeVpcEndpointServiceConfigurationsRequestPrivate(
    const DescribeVpcEndpointServiceConfigurationsRequestPrivate &other, DescribeVpcEndpointServiceConfigurationsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
