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

#include "putidentitypolicyresponse.h"
#include "putidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::PutIdentityPolicyResponse
 * \brief The PutIdentityPolicyResponse class provides an interace for SES PutIdentityPolicy responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::putIdentityPolicy
 */

/*!
 * Constructs a PutIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutIdentityPolicyResponse::PutIdentityPolicyResponse(
        const PutIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new PutIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new PutIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIdentityPolicyRequest * PutIdentityPolicyResponse::request() const
{
    Q_D(const PutIdentityPolicyResponse);
    return static_cast<const PutIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES PutIdentityPolicy \a response.
 */
void PutIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::PutIdentityPolicyResponsePrivate
 * \brief The PutIdentityPolicyResponsePrivate class provides private implementation for PutIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a PutIdentityPolicyResponsePrivate object with public implementation \a q.
 */
PutIdentityPolicyResponsePrivate::PutIdentityPolicyResponsePrivate(
    PutIdentityPolicyResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES PutIdentityPolicy response element from \a xml.
 */
void PutIdentityPolicyResponsePrivate::parsePutIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIdentityPolicyResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
