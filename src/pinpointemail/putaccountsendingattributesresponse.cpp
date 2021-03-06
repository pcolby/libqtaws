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

#include "putaccountsendingattributesresponse.h"
#include "putaccountsendingattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PutAccountSendingAttributesResponse
 * \brief The PutAccountSendingAttributesResponse class provides an interace for PinpointEmail PutAccountSendingAttributes responses.
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
 * \sa PinpointEmailClient::putAccountSendingAttributes
 */

/*!
 * Constructs a PutAccountSendingAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountSendingAttributesResponse::PutAccountSendingAttributesResponse(
        const PutAccountSendingAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new PutAccountSendingAttributesResponsePrivate(this), parent)
{
    setRequest(new PutAccountSendingAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountSendingAttributesRequest * PutAccountSendingAttributesResponse::request() const
{
    Q_D(const PutAccountSendingAttributesResponse);
    return static_cast<const PutAccountSendingAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail PutAccountSendingAttributes \a response.
 */
void PutAccountSendingAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountSendingAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::PutAccountSendingAttributesResponsePrivate
 * \brief The PutAccountSendingAttributesResponsePrivate class provides private implementation for PutAccountSendingAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PutAccountSendingAttributesResponsePrivate object with public implementation \a q.
 */
PutAccountSendingAttributesResponsePrivate::PutAccountSendingAttributesResponsePrivate(
    PutAccountSendingAttributesResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail PutAccountSendingAttributes response element from \a xml.
 */
void PutAccountSendingAttributesResponsePrivate::parsePutAccountSendingAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountSendingAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
