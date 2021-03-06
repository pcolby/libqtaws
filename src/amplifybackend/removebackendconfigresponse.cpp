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

#include "removebackendconfigresponse.h"
#include "removebackendconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::RemoveBackendConfigResponse
 * \brief The RemoveBackendConfigResponse class provides an interace for AmplifyBackend RemoveBackendConfig responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::removeBackendConfig
 */

/*!
 * Constructs a RemoveBackendConfigResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveBackendConfigResponse::RemoveBackendConfigResponse(
        const RemoveBackendConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new RemoveBackendConfigResponsePrivate(this), parent)
{
    setRequest(new RemoveBackendConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveBackendConfigRequest * RemoveBackendConfigResponse::request() const
{
    Q_D(const RemoveBackendConfigResponse);
    return static_cast<const RemoveBackendConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend RemoveBackendConfig \a response.
 */
void RemoveBackendConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveBackendConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::RemoveBackendConfigResponsePrivate
 * \brief The RemoveBackendConfigResponsePrivate class provides private implementation for RemoveBackendConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a RemoveBackendConfigResponsePrivate object with public implementation \a q.
 */
RemoveBackendConfigResponsePrivate::RemoveBackendConfigResponsePrivate(
    RemoveBackendConfigResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend RemoveBackendConfig response element from \a xml.
 */
void RemoveBackendConfigResponsePrivate::parseRemoveBackendConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveBackendConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
