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

#include "listinvalidationsresponse.h"
#include "listinvalidationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  ListInvalidationsResponse
 *
 * @brief  Handles CloudFront ListInvalidations responses.
 *
 * @see    CloudFrontClient::listInvalidations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListInvalidationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListInvalidationsResponsePrivate(this), parent)
{
    setRequest(new ListInvalidationsRequest(request));
    setReply(reply);
}

const ListInvalidationsRequest * ListInvalidationsResponse::request() const
{
    Q_D(const ListInvalidationsResponse);
    return static_cast<const ListInvalidationsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront ListInvalidations response.
 *
 * @param  response  Response to parse.
 */
void ListInvalidationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListInvalidationsResponsePrivate
 *
 * @brief  Private implementation for ListInvalidationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInvalidationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListInvalidationsResponse instance.
 */
ListInvalidationsResponsePrivate::ListInvalidationsResponsePrivate(
    ListInvalidationsQueueResponse * const q) : ListInvalidationsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront ListInvalidationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListInvalidationsResponsePrivate::ListInvalidationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInvalidationsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS