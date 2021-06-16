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

#include "activateanomalydetectorresponse.h"
#include "activateanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorResponse
 * \brief The ActivateAnomalyDetectorResponse class provides an interace for LookoutMetrics ActivateAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::activateAnomalyDetector
 */

/*!
 * Constructs a ActivateAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateAnomalyDetectorResponse::ActivateAnomalyDetectorResponse(
        const ActivateAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ActivateAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new ActivateAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateAnomalyDetectorRequest * ActivateAnomalyDetectorResponse::request() const
{
    Q_D(const ActivateAnomalyDetectorResponse);
    return static_cast<const ActivateAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ActivateAnomalyDetector \a response.
 */
void ActivateAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorResponsePrivate
 * \brief The ActivateAnomalyDetectorResponsePrivate class provides private implementation for ActivateAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ActivateAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
ActivateAnomalyDetectorResponsePrivate::ActivateAnomalyDetectorResponsePrivate(
    ActivateAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ActivateAnomalyDetector response element from \a xml.
 */
void ActivateAnomalyDetectorResponsePrivate::parseActivateAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
