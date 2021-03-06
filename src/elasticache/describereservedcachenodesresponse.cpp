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

#include "describereservedcachenodesresponse.h"
#include "describereservedcachenodesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesResponse
 * \brief The DescribeReservedCacheNodesResponse class provides an interace for ElastiCache DescribeReservedCacheNodes responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::describeReservedCacheNodes
 */

/*!
 * Constructs a DescribeReservedCacheNodesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedCacheNodesResponse::DescribeReservedCacheNodesResponse(
        const DescribeReservedCacheNodesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeReservedCacheNodesResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedCacheNodesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedCacheNodesRequest * DescribeReservedCacheNodesResponse::request() const
{
    Q_D(const DescribeReservedCacheNodesResponse);
    return static_cast<const DescribeReservedCacheNodesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeReservedCacheNodes \a response.
 */
void DescribeReservedCacheNodesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedCacheNodesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesResponsePrivate
 * \brief The DescribeReservedCacheNodesResponsePrivate class provides private implementation for DescribeReservedCacheNodesResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeReservedCacheNodesResponsePrivate object with public implementation \a q.
 */
DescribeReservedCacheNodesResponsePrivate::DescribeReservedCacheNodesResponsePrivate(
    DescribeReservedCacheNodesResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeReservedCacheNodes response element from \a xml.
 */
void DescribeReservedCacheNodesResponsePrivate::parseDescribeReservedCacheNodesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedCacheNodesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
