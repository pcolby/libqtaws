/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describesslpoliciesrequest.h"
#include "describesslpoliciesrequest_p.h"
#include "describesslpoliciesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::DescribeSSLPoliciesRequest
 * \brief The DescribeSSLPoliciesRequest class provides an interface for ElasticLoadBalancingv2 DescribeSSLPolicies requests.
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 *  the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 *  that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 *  specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 *  the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 *  to the targets, and with health check settings to be used when checking the health status of the
 * 
 *  targets>
 * 
 *  Elastic Load Balancing supports the following types of load balancers: Application Load Balancers, Network Load
 *  Balancers, Gateway Load Balancers, and Classic Load Balancers. This reference covers the following load balancer
 * 
 *  types> <ul> <li>
 * 
 *  Application Load Balancer - Operates at the application layer (layer 7) and supports HTTP and
 * 
 *  HTTPS> </li> <li>
 * 
 *  Network Load Balancer - Operates at the transport layer (layer 4) and supports TCP, TLS, and
 * 
 *  UDP> </li> <li>
 * 
 *  Gateway Load Balancer - Operates at the network layer (layer
 * 
 *  3)> </li> </ul>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load
 *  Balancing User
 * 
 *  Guide</a>>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 *
 * \sa ElasticLoadBalancingv2Client::describeSSLPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSSLPoliciesRequest::DescribeSSLPoliciesRequest(const DescribeSSLPoliciesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeSSLPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSSLPoliciesRequest object.
 */
DescribeSSLPoliciesRequest::DescribeSSLPoliciesRequest()
    : ElasticLoadBalancingv2Request(new DescribeSSLPoliciesRequestPrivate(ElasticLoadBalancingv2Request::DescribeSSLPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSSLPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSSLPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSSLPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSSLPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::DescribeSSLPoliciesRequestPrivate
 * \brief The DescribeSSLPoliciesRequestPrivate class provides private implementation for DescribeSSLPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a DescribeSSLPoliciesRequestPrivate object for ElasticLoadBalancingv2 \a action,
 * with public implementation \a q.
 */
DescribeSSLPoliciesRequestPrivate::DescribeSSLPoliciesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeSSLPoliciesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSSLPoliciesRequest
 * class' copy constructor.
 */
DescribeSSLPoliciesRequestPrivate::DescribeSSLPoliciesRequestPrivate(
    const DescribeSSLPoliciesRequestPrivate &other, DescribeSSLPoliciesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
