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

#include "stopeventsdetectionjobresponse.h"
#include "stopeventsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobResponse
 * \brief The StopEventsDetectionJobResponse class provides an interace for Comprehend StopEventsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopEventsDetectionJob
 */

/*!
 * Constructs a StopEventsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopEventsDetectionJobResponse::StopEventsDetectionJobResponse(
        const StopEventsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopEventsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopEventsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEventsDetectionJobRequest * StopEventsDetectionJobResponse::request() const
{
    Q_D(const StopEventsDetectionJobResponse);
    return static_cast<const StopEventsDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopEventsDetectionJob \a response.
 */
void StopEventsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEventsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobResponsePrivate
 * \brief The StopEventsDetectionJobResponsePrivate class provides private implementation for StopEventsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopEventsDetectionJobResponsePrivate object with public implementation \a q.
 */
StopEventsDetectionJobResponsePrivate::StopEventsDetectionJobResponsePrivate(
    StopEventsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopEventsDetectionJob response element from \a xml.
 */
void StopEventsDetectionJobResponsePrivate::parseStopEventsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEventsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
