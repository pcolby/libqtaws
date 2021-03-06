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

#include "deletetokenresponse.h"
#include "deletetokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenResponse
 * \brief The DeleteTokenResponse class provides an interace for AmplifyBackend DeleteToken responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteToken
 */

/*!
 * Constructs a DeleteTokenResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTokenResponse::DeleteTokenResponse(
        const DeleteTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteTokenResponsePrivate(this), parent)
{
    setRequest(new DeleteTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTokenRequest * DeleteTokenResponse::request() const
{
    Q_D(const DeleteTokenResponse);
    return static_cast<const DeleteTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteToken \a response.
 */
void DeleteTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteTokenResponsePrivate
 * \brief The DeleteTokenResponsePrivate class provides private implementation for DeleteTokenResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteTokenResponsePrivate object with public implementation \a q.
 */
DeleteTokenResponsePrivate::DeleteTokenResponsePrivate(
    DeleteTokenResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteToken response element from \a xml.
 */
void DeleteTokenResponsePrivate::parseDeleteTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
