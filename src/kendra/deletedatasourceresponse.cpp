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

#include "deletedatasourceresponse.h"
#include "deletedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DeleteDataSourceResponse
 * \brief The DeleteDataSourceResponse class provides an interace for kendra DeleteDataSource responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::deleteDataSource
 */

/*!
 * Constructs a DeleteDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataSourceResponse::DeleteDataSourceResponse(
        const DeleteDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DeleteDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataSourceRequest * DeleteDataSourceResponse::request() const
{
    Q_D(const DeleteDataSourceResponse);
    return static_cast<const DeleteDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful kendra DeleteDataSource \a response.
 */
void DeleteDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DeleteDataSourceResponsePrivate
 * \brief The DeleteDataSourceResponsePrivate class provides private implementation for DeleteDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DeleteDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteDataSourceResponsePrivate::DeleteDataSourceResponsePrivate(
    DeleteDataSourceResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DeleteDataSource response element from \a xml.
 */
void DeleteDataSourceResponsePrivate::parseDeleteDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
