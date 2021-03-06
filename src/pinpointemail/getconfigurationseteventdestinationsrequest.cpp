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

#include "getconfigurationseteventdestinationsrequest.h"
#include "getconfigurationseteventdestinationsrequest_p.h"
#include "getconfigurationseteventdestinationsresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetConfigurationSetEventDestinationsRequest
 * \brief The GetConfigurationSetEventDestinationsRequest class provides an interface for PinpointEmail GetConfigurationSetEventDestinations requests.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  Welcome to the <i>Amazon Pinpoint Email API Reference</i>. This guide provides information about the Amazon Pinpoint
 *  Email API (version 1.0), including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> is an AWS service that you can use to engage with your
 *  customers across multiple messaging channels. You can use Amazon Pinpoint to send email, SMS text messages, voice
 *  messages, and push notifications. The Amazon Pinpoint Email API provides programmatic access to options that are unique
 *  to the email channel and supplement the options provided by the Amazon Pinpoint
 * 
 *  API>
 * 
 *  If you're new to Amazon Pinpoint, you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer Guide</a>. The
 *  <i>Amazon Pinpoint Developer Guide</i> provides tutorials, code samples, and procedures that demonstrate how to use
 *  Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint functionality into mobile apps and other
 *  types of applications. The guide also provides information about key topics such as Amazon Pinpoint integration with
 *  other AWS services and the limits that apply to using the
 * 
 *  service>
 * 
 *  The Amazon Pinpoint Email API is available in several AWS Regions and it provides an endpoint for each of these Regions.
 *  For a list of all the Regions and endpoints where the API is currently available, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">AWS Service Endpoints</a> in the
 *  <i>Amazon Web Services General Reference</i>. To learn more about AWS Regions, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing AWS Regions</a> in the <i>Amazon Web
 *  Services General
 * 
 *  Reference</i>>
 * 
 *  In each Region, AWS maintains multiple Availability Zones. These Availability Zones are physically isolated from each
 *  other, but are united by private, low-latency, high-throughput, and highly redundant network connections. These
 *  Availability Zones enable us to provide very high levels of availability and redundancy, while also minimizing latency.
 *  To learn more about the number of Availability Zones that are available in each Region, see <a
 *  href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
 *
 * \sa PinpointEmailClient::getConfigurationSetEventDestinations
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigurationSetEventDestinationsRequest::GetConfigurationSetEventDestinationsRequest(const GetConfigurationSetEventDestinationsRequest &other)
    : PinpointEmailRequest(new GetConfigurationSetEventDestinationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigurationSetEventDestinationsRequest object.
 */
GetConfigurationSetEventDestinationsRequest::GetConfigurationSetEventDestinationsRequest()
    : PinpointEmailRequest(new GetConfigurationSetEventDestinationsRequestPrivate(PinpointEmailRequest::GetConfigurationSetEventDestinationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigurationSetEventDestinationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigurationSetEventDestinationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigurationSetEventDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigurationSetEventDestinationsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::GetConfigurationSetEventDestinationsRequestPrivate
 * \brief The GetConfigurationSetEventDestinationsRequestPrivate class provides private implementation for GetConfigurationSetEventDestinationsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
GetConfigurationSetEventDestinationsRequestPrivate::GetConfigurationSetEventDestinationsRequestPrivate(
    const PinpointEmailRequest::Action action, GetConfigurationSetEventDestinationsRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigurationSetEventDestinationsRequest
 * class' copy constructor.
 */
GetConfigurationSetEventDestinationsRequestPrivate::GetConfigurationSetEventDestinationsRequestPrivate(
    const GetConfigurationSetEventDestinationsRequestPrivate &other, GetConfigurationSetEventDestinationsRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
