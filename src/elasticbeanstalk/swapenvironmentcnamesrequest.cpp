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

#include "swapenvironmentcnamesrequest.h"
#include "swapenvironmentcnamesrequest_p.h"
#include "swapenvironmentcnamesresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::SwapEnvironmentCNAMEsRequest
 * \brief The SwapEnvironmentCNAMEsRequest class provides an interface for ElasticBeanstalk SwapEnvironmentCNAMEs requests.
 *
 * \inmodule QtAwsElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::swapEnvironmentCNAMEs
 */

/*!
 * Constructs a copy of \a other.
 */
SwapEnvironmentCNAMEsRequest::SwapEnvironmentCNAMEsRequest(const SwapEnvironmentCNAMEsRequest &other)
    : ElasticBeanstalkRequest(new SwapEnvironmentCNAMEsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SwapEnvironmentCNAMEsRequest object.
 */
SwapEnvironmentCNAMEsRequest::SwapEnvironmentCNAMEsRequest()
    : ElasticBeanstalkRequest(new SwapEnvironmentCNAMEsRequestPrivate(ElasticBeanstalkRequest::SwapEnvironmentCNAMEsAction, this))
{

}

/*!
 * \reimp
 */
bool SwapEnvironmentCNAMEsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SwapEnvironmentCNAMEsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SwapEnvironmentCNAMEsRequest::response(QNetworkReply * const reply) const
{
    return new SwapEnvironmentCNAMEsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::SwapEnvironmentCNAMEsRequestPrivate
 * \brief The SwapEnvironmentCNAMEsRequestPrivate class provides private implementation for SwapEnvironmentCNAMEsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 *
 * Constructs a SwapEnvironmentCNAMEsRequestPrivate object for ElasticBeanstalk \a action with,
 * public implementation \a q.
 */
SwapEnvironmentCNAMEsRequestPrivate::SwapEnvironmentCNAMEsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, SwapEnvironmentCNAMEsRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SwapEnvironmentCNAMEsRequest
 * class' copy constructor.
 */
SwapEnvironmentCNAMEsRequestPrivate::SwapEnvironmentCNAMEsRequestPrivate(
    const SwapEnvironmentCNAMEsRequestPrivate &other, SwapEnvironmentCNAMEsRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
