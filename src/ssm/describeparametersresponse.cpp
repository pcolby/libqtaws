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

#include "describeparametersresponse.h"
#include "describeparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeParametersResponse
 *
 * @brief  Handles SSM DescribeParameters responses.
 *
 * @see    SSMClient::describeParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeParametersRequest(request));
    setReply(reply);
}

const DescribeParametersRequest * DescribeParametersResponse::request() const
{
    Q_D(const DescribeParametersResponse);
    return static_cast<const DescribeParametersRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeParametersResponse instance.
 */
DescribeParametersResponsePrivate::DescribeParametersResponsePrivate(
    DescribeParametersQueueResponse * const q) : DescribeParametersPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeParametersResponsePrivate::DescribeParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParametersResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS