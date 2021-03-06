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

#include "updatedatasourcepermissionsresponse.h"
#include "updatedatasourcepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSourcePermissionsResponse
 * \brief The UpdateDataSourcePermissionsResponse class provides an interace for QuickSight UpdateDataSourcePermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSourcePermissions
 */

/*!
 * Constructs a UpdateDataSourcePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSourcePermissionsResponse::UpdateDataSourcePermissionsResponse(
        const UpdateDataSourcePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDataSourcePermissionsResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSourcePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSourcePermissionsRequest * UpdateDataSourcePermissionsResponse::request() const
{
    Q_D(const UpdateDataSourcePermissionsResponse);
    return static_cast<const UpdateDataSourcePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDataSourcePermissions \a response.
 */
void UpdateDataSourcePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSourcePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDataSourcePermissionsResponsePrivate
 * \brief The UpdateDataSourcePermissionsResponsePrivate class provides private implementation for UpdateDataSourcePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSourcePermissionsResponsePrivate object with public implementation \a q.
 */
UpdateDataSourcePermissionsResponsePrivate::UpdateDataSourcePermissionsResponsePrivate(
    UpdateDataSourcePermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDataSourcePermissions response element from \a xml.
 */
void UpdateDataSourcePermissionsResponsePrivate::parseUpdateDataSourcePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSourcePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
