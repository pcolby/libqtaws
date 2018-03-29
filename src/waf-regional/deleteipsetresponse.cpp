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

#include "deleteipsetresponse.h"
#include "deleteipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteIPSetResponse
 *
 * @brief  Handles WAFRegional DeleteIPSet responses.
 *
 * @see    WAFRegionalClient::deleteIPSet
 */

/**
 * @brief  Constructs a new DeleteIPSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIPSetResponse::DeleteIPSetResponse(
        const DeleteIPSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteIPSetResponsePrivate(this), parent)
{
    setRequest(new DeleteIPSetRequest(request));
    setReply(reply);
}

const DeleteIPSetRequest * DeleteIPSetResponse::request() const
{
    Q_D(const DeleteIPSetResponse);
    return static_cast<const DeleteIPSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DeleteIPSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteIPSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteIPSetResponsePrivate
 *
 * @brief  Private implementation for DeleteIPSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIPSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteIPSetResponse instance.
 */
DeleteIPSetResponsePrivate::DeleteIPSetResponsePrivate(
    DeleteIPSetQueueResponse * const q) : DeleteIPSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteIPSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteIPSetResponsePrivate::DeleteIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIPSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
