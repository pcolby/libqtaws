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

#include "describeschemasresponse.h"
#include "describeschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeSchemasResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeSchemas responses.
 *
 * @see    DatabaseMigrationServiceClient::describeSchemas
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSchemasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeSchemasResponsePrivate(this), parent)
{
    setRequest(new DescribeSchemasRequest(request));
    setReply(reply);
}

const DescribeSchemasRequest * DescribeSchemasResponse::request() const
{
    Q_D(const DescribeSchemasResponse);
    return static_cast<const DescribeSchemasRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeSchemas response.
 *
 * @param  response  Response to parse.
 */
void DescribeSchemasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSchemasResponsePrivate
 *
 * @brief  Private implementation for DescribeSchemasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSchemasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSchemasResponse instance.
 */
DescribeSchemasResponsePrivate::DescribeSchemasResponsePrivate(
    DescribeSchemasQueueResponse * const q) : DescribeSchemasPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeSchemasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSchemasResponsePrivate::DescribeSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSchemasResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
