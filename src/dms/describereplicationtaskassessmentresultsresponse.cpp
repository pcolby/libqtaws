/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereplicationtaskassessmentresultsresponse.h"
#include "describereplicationtaskassessmentresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationTaskAssessmentResultsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationTaskAssessmentResults responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationTaskAssessmentResults
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationTaskAssessmentResultsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationTaskAssessmentResultsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTaskAssessmentResultsRequest(request));
    setReply(reply);
}

const DescribeReplicationTaskAssessmentResultsRequest * DescribeReplicationTaskAssessmentResultsResponse::request() const
{
    Q_D(const DescribeReplicationTaskAssessmentResultsResponse);
    return static_cast<const DescribeReplicationTaskAssessmentResultsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeReplicationTaskAssessmentResults response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationTaskAssessmentResultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationTaskAssessmentResultsResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationTaskAssessmentResultsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationTaskAssessmentResultsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationTaskAssessmentResultsResponse instance.
 */
DescribeReplicationTaskAssessmentResultsResponsePrivate::DescribeReplicationTaskAssessmentResultsResponsePrivate(
    DescribeReplicationTaskAssessmentResultsQueueResponse * const q) : DescribeReplicationTaskAssessmentResultsPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeReplicationTaskAssessmentResultsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationTaskAssessmentResultsResponsePrivate::DescribeReplicationTaskAssessmentResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTaskAssessmentResultsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS