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

#include "listanomalygroupsummariesresponse.h"
#include "listanomalygroupsummariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupSummariesResponse
 * \brief The ListAnomalyGroupSummariesResponse class provides an interace for LookoutMetrics ListAnomalyGroupSummaries responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupSummaries
 */

/*!
 * Constructs a ListAnomalyGroupSummariesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomalyGroupSummariesResponse::ListAnomalyGroupSummariesResponse(
        const ListAnomalyGroupSummariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAnomalyGroupSummariesResponsePrivate(this), parent)
{
    setRequest(new ListAnomalyGroupSummariesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomalyGroupSummariesRequest * ListAnomalyGroupSummariesResponse::request() const
{
    Q_D(const ListAnomalyGroupSummariesResponse);
    return static_cast<const ListAnomalyGroupSummariesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAnomalyGroupSummaries \a response.
 */
void ListAnomalyGroupSummariesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomalyGroupSummariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupSummariesResponsePrivate
 * \brief The ListAnomalyGroupSummariesResponsePrivate class provides private implementation for ListAnomalyGroupSummariesResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupSummariesResponsePrivate object with public implementation \a q.
 */
ListAnomalyGroupSummariesResponsePrivate::ListAnomalyGroupSummariesResponsePrivate(
    ListAnomalyGroupSummariesResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAnomalyGroupSummaries response element from \a xml.
 */
void ListAnomalyGroupSummariesResponsePrivate::parseListAnomalyGroupSummariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomalyGroupSummariesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
