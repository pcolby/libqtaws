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

#include "sendactivationcoderesponse.h"
#include "sendactivationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::SendActivationCodeResponse
 * \brief The SendActivationCodeResponse class provides an interace for SSMContacts SendActivationCode responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::sendActivationCode
 */

/*!
 * Constructs a SendActivationCodeResponse object for \a reply to \a request, with parent \a parent.
 */
SendActivationCodeResponse::SendActivationCodeResponse(
        const SendActivationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new SendActivationCodeResponsePrivate(this), parent)
{
    setRequest(new SendActivationCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendActivationCodeRequest * SendActivationCodeResponse::request() const
{
    Q_D(const SendActivationCodeResponse);
    return static_cast<const SendActivationCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts SendActivationCode \a response.
 */
void SendActivationCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendActivationCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::SendActivationCodeResponsePrivate
 * \brief The SendActivationCodeResponsePrivate class provides private implementation for SendActivationCodeResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a SendActivationCodeResponsePrivate object with public implementation \a q.
 */
SendActivationCodeResponsePrivate::SendActivationCodeResponsePrivate(
    SendActivationCodeResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts SendActivationCode response element from \a xml.
 */
void SendActivationCodeResponsePrivate::parseSendActivationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendActivationCodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
