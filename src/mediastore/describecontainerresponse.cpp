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

#include "describecontainerresponse.h"
#include "describecontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaStore {

/**
 * @class  DescribeContainerResponse
 *
 * @brief  Handles MediaStore DescribeContainer responses.
 *
 * @see    MediaStoreClient::describeContainer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeContainerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DescribeContainerResponsePrivate(this), parent)
{
    setRequest(new DescribeContainerRequest(request));
    setReply(reply);
}

const DescribeContainerRequest * DescribeContainerResponse::request() const
{
    Q_D(const DescribeContainerResponse);
    return static_cast<const DescribeContainerRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore DescribeContainer response.
 *
 * @param  response  Response to parse.
 */
void DescribeContainerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeContainerResponsePrivate
 *
 * @brief  Private implementation for DescribeContainerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContainerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeContainerResponse instance.
 */
DescribeContainerResponsePrivate::DescribeContainerResponsePrivate(
    DescribeContainerQueueResponse * const q) : DescribeContainerPrivate(q)
{

}

/**
 * @brief  Parse an MediaStore DescribeContainerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeContainerResponsePrivate::DescribeContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContainerResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace AWS