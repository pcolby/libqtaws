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

#include "deletedatasetresponse.h"
#include "deletedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeleteDatasetResponse
 * \brief The DeleteDatasetResponse class provides an interace for ForecastService DeleteDataset responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deleteDataset
 */

/*!
 * Constructs a DeleteDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetResponse::DeleteDatasetResponse(
        const DeleteDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new DeleteDatasetResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetRequest * DeleteDatasetResponse::request() const
{
    Q_D(const DeleteDatasetResponse);
    return static_cast<const DeleteDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService DeleteDataset \a response.
 */
void DeleteDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::DeleteDatasetResponsePrivate
 * \brief The DeleteDatasetResponsePrivate class provides private implementation for DeleteDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeleteDatasetResponsePrivate object with public implementation \a q.
 */
DeleteDatasetResponsePrivate::DeleteDatasetResponsePrivate(
    DeleteDatasetResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService DeleteDataset response element from \a xml.
 */
void DeleteDatasetResponsePrivate::parseDeleteDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
