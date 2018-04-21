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

#include "getsendquotaresponse.h"
#include "getsendquotaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetSendQuotaResponse
 * \brief The GetSendQuotaResponse class provides an interace for SES GetSendQuota responses.
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
 * \sa SesClient::getSendQuota
 */

/*!
 * Constructs a GetSendQuotaResponse object for \a reply to \a request, with parent \a parent.
 */
GetSendQuotaResponse::GetSendQuotaResponse(
        const GetSendQuotaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetSendQuotaResponsePrivate(this), parent)
{
    setRequest(new GetSendQuotaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSendQuotaRequest * GetSendQuotaResponse::request() const
{
    Q_D(const GetSendQuotaResponse);
    return static_cast<const GetSendQuotaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES GetSendQuota \a response.
 */
void GetSendQuotaResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSendQuotaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::GetSendQuotaResponsePrivate
 * \brief The GetSendQuotaResponsePrivate class provides private implementation for GetSendQuotaResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetSendQuotaResponsePrivate object with public implementation \a q.
 */
GetSendQuotaResponsePrivate::GetSendQuotaResponsePrivate(
    GetSendQuotaResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES GetSendQuota response element from \a xml.
 */
void GetSendQuotaResponsePrivate::parseGetSendQuotaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSendQuotaResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws