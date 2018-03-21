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

#include "exportprojectresponse.h"
#include "exportprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Mobile {

/**
 * @class  ExportProjectResponse
 *
 * @brief  Handles Mobile ExportProject responses.
 *
 * @see    MobileClient::exportProject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExportProjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportProjectResponsePrivate(this), parent)
{
    setRequest(new ExportProjectRequest(request));
    setReply(reply);
}

const ExportProjectRequest * ExportProjectResponse::request() const
{
    Q_D(const ExportProjectResponse);
    return static_cast<const ExportProjectRequest *>(d->request);
}

/**
 * @brief  Parse a Mobile ExportProject response.
 *
 * @param  response  Response to parse.
 */
void ExportProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ExportProjectResponsePrivate
 *
 * @brief  Private implementation for ExportProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExportProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExportProjectResponse instance.
 */
ExportProjectResponsePrivate::ExportProjectResponsePrivate(
    ExportProjectQueueResponse * const q) : ExportProjectPrivate(q)
{

}

/**
 * @brief  Parse an Mobile ExportProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExportProjectResponsePrivate::ExportProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportProjectResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace AWS