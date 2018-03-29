/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describechangesetresponse.h"
#include "describechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  DescribeChangeSetResponse
 *
 * @brief  Handles CloudFormation DescribeChangeSet responses.
 *
 * @see    CloudFormationClient::describeChangeSet
 */

/**
 * @brief  Constructs a new DescribeChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeChangeSetResponse::DescribeChangeSetResponse(
        const DescribeChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeChangeSetResponsePrivate(this), parent)
{
    setRequest(new DescribeChangeSetRequest(request));
    setReply(reply);
}

const DescribeChangeSetRequest * DescribeChangeSetResponse::request() const
{
    Q_D(const DescribeChangeSetResponse);
    return static_cast<const DescribeChangeSetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DescribeChangeSet response.
 *
 * @param  response  Response to parse.
 */
void DescribeChangeSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeChangeSetResponsePrivate
 *
 * @brief  Private implementation for DescribeChangeSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChangeSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeChangeSetResponse instance.
 */
DescribeChangeSetResponsePrivate::DescribeChangeSetResponsePrivate(
    DescribeChangeSetQueueResponse * const q) : DescribeChangeSetPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DescribeChangeSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeChangeSetResponsePrivate::DescribeChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChangeSetResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
