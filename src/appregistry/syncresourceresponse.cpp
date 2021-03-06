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

#include "syncresourceresponse.h"
#include "syncresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::SyncResourceResponse
 * \brief The SyncResourceResponse class provides an interace for AppRegistry SyncResource responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::syncResource
 */

/*!
 * Constructs a SyncResourceResponse object for \a reply to \a request, with parent \a parent.
 */
SyncResourceResponse::SyncResourceResponse(
        const SyncResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new SyncResourceResponsePrivate(this), parent)
{
    setRequest(new SyncResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SyncResourceRequest * SyncResourceResponse::request() const
{
    Q_D(const SyncResourceResponse);
    return static_cast<const SyncResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRegistry SyncResource \a response.
 */
void SyncResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SyncResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::SyncResourceResponsePrivate
 * \brief The SyncResourceResponsePrivate class provides private implementation for SyncResourceResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a SyncResourceResponsePrivate object with public implementation \a q.
 */
SyncResourceResponsePrivate::SyncResourceResponsePrivate(
    SyncResourceResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry SyncResource response element from \a xml.
 */
void SyncResourceResponsePrivate::parseSyncResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SyncResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
