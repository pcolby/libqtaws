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

#include "createdatasetimportjobresponse.h"
#include "createdatasetimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreateDatasetImportJobResponse
 * \brief The CreateDatasetImportJobResponse class provides an interace for ForecastService CreateDatasetImportJob responses.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createDatasetImportJob
 */

/*!
 * Constructs a CreateDatasetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetImportJobResponse::CreateDatasetImportJobResponse(
        const CreateDatasetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastServiceResponse(new CreateDatasetImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetImportJobRequest * CreateDatasetImportJobResponse::request() const
{
    Q_D(const CreateDatasetImportJobResponse);
    return static_cast<const CreateDatasetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastService CreateDatasetImportJob \a response.
 */
void CreateDatasetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastService::CreateDatasetImportJobResponsePrivate
 * \brief The CreateDatasetImportJobResponsePrivate class provides private implementation for CreateDatasetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreateDatasetImportJobResponsePrivate object with public implementation \a q.
 */
CreateDatasetImportJobResponsePrivate::CreateDatasetImportJobResponsePrivate(
    CreateDatasetImportJobResponse * const q) : ForecastServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastService CreateDatasetImportJob response element from \a xml.
 */
void CreateDatasetImportJobResponsePrivate::parseCreateDatasetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastService
} // namespace QtAws
