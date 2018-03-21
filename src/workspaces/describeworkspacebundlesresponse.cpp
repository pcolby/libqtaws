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

#include "describeworkspacebundlesresponse.h"
#include "describeworkspacebundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspaceBundlesResponse
 *
 * @brief  Handles WorkSpaces DescribeWorkspaceBundles responses.
 *
 * @see    WorkSpacesClient::describeWorkspaceBundles
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspaceBundlesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceBundlesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceBundlesRequest(request));
    setReply(reply);
}

const DescribeWorkspaceBundlesRequest * DescribeWorkspaceBundlesResponse::request() const
{
    Q_D(const DescribeWorkspaceBundlesResponse);
    return static_cast<const DescribeWorkspaceBundlesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces DescribeWorkspaceBundles response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkspaceBundlesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkspaceBundlesResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkspaceBundlesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspaceBundlesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkspaceBundlesResponse instance.
 */
DescribeWorkspaceBundlesResponsePrivate::DescribeWorkspaceBundlesResponsePrivate(
    DescribeWorkspaceBundlesQueueResponse * const q) : DescribeWorkspaceBundlesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces DescribeWorkspaceBundlesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkspaceBundlesResponsePrivate::DescribeWorkspaceBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceBundlesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace AWS
