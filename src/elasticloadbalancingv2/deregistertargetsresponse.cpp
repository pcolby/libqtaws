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

#include "deregistertargetsresponse.h"
#include "deregistertargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::DeregisterTargetsResponse
 * \brief The DeregisterTargetsResponse class provides an interace for ElasticLoadBalancingv2 DeregisterTargets responses.
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
 * \sa ElasticLoadBalancingv2Client::deregisterTargets
 */

/*!
 * Constructs a DeregisterTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterTargetsResponse::DeregisterTargetsResponse(
        const DeregisterTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DeregisterTargetsResponsePrivate(this), parent)
{
    setRequest(new DeregisterTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterTargetsRequest * DeregisterTargetsResponse::request() const
{
    Q_D(const DeregisterTargetsResponse);
    return static_cast<const DeregisterTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticLoadBalancingv2 DeregisterTargets \a response.
 */
void DeregisterTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::DeregisterTargetsResponsePrivate
 * \brief The DeregisterTargetsResponsePrivate class provides private implementation for DeregisterTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a DeregisterTargetsResponsePrivate object with public implementation \a q.
 */
DeregisterTargetsResponsePrivate::DeregisterTargetsResponsePrivate(
    DeregisterTargetsResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/*!
 * Parses a ElasticLoadBalancingv2 DeregisterTargets response element from \a xml.
 */
void DeregisterTargetsResponsePrivate::parseDeregisterTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
