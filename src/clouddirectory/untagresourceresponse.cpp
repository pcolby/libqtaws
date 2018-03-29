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

#include "untagresourceresponse.h"
#include "untagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UntagResourceResponse
 *
 * @brief  Handles CloudDirectory UntagResource responses.
 *
 * @see    CloudDirectoryClient::untagResource
 */

/**
 * @brief  Constructs a new UntagResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagResourceResponse::UntagResourceResponse(
        const UntagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UntagResourceResponsePrivate(this), parent)
{
    setRequest(new UntagResourceRequest(request));
    setReply(reply);
}

const UntagResourceRequest * UntagResourceResponse::request() const
{
    Q_D(const UntagResourceResponse);
    return static_cast<const UntagResourceRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory UntagResource response.
 *
 * @param  response  Response to parse.
 */
void UntagResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagResourceResponsePrivate
 *
 * @brief  Private implementation for UntagResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagResourceResponse instance.
 */
UntagResourceResponsePrivate::UntagResourceResponsePrivate(
    UntagResourceQueueResponse * const q) : UntagResourcePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory UntagResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagResourceResponsePrivate::UntagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourceResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
