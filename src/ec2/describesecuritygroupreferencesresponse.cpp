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

#include "describesecuritygroupreferencesresponse.h"
#include "describesecuritygroupreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSecurityGroupReferencesResponse
 *
 * @brief  Handles EC2 DescribeSecurityGroupReferences responses.
 *
 * @see    EC2Client::describeSecurityGroupReferences
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSecurityGroupReferencesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSecurityGroupReferencesResponsePrivate(this), parent)
{
    setRequest(new DescribeSecurityGroupReferencesRequest(request));
    setReply(reply);
}

const DescribeSecurityGroupReferencesRequest * DescribeSecurityGroupReferencesResponse::request() const
{
    Q_D(const DescribeSecurityGroupReferencesResponse);
    return static_cast<const DescribeSecurityGroupReferencesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSecurityGroupReferences response.
 *
 * @param  response  Response to parse.
 */
void DescribeSecurityGroupReferencesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSecurityGroupReferencesResponsePrivate
 *
 * @brief  Private implementation for DescribeSecurityGroupReferencesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecurityGroupReferencesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSecurityGroupReferencesResponse instance.
 */
DescribeSecurityGroupReferencesResponsePrivate::DescribeSecurityGroupReferencesResponsePrivate(
    DescribeSecurityGroupReferencesQueueResponse * const q) : DescribeSecurityGroupReferencesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSecurityGroupReferencesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSecurityGroupReferencesResponsePrivate::DescribeSecurityGroupReferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecurityGroupReferencesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS