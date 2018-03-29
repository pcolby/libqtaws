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

#include "createsnapshotresponse.h"
#include "createsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  CreateSnapshotResponse
 *
 * @brief  Handles DirectoryService CreateSnapshot responses.
 *
 * @see    DirectoryServiceClient::createSnapshot
 */

/**
 * @brief  Constructs a new CreateSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSnapshotResponse::CreateSnapshotResponse(
        const CreateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateSnapshotRequest(request));
    setReply(reply);
}

const CreateSnapshotRequest * CreateSnapshotResponse::request() const
{
    Q_D(const CreateSnapshotResponse);
    return static_cast<const CreateSnapshotRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CreateSnapshot response.
 *
 * @param  response  Response to parse.
 */
void CreateSnapshotResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSnapshotResponsePrivate
 *
 * @brief  Private implementation for CreateSnapshotResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSnapshotResponse instance.
 */
CreateSnapshotResponsePrivate::CreateSnapshotResponsePrivate(
    CreateSnapshotQueueResponse * const q) : CreateSnapshotPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CreateSnapshotResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSnapshotResponsePrivate::CreateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSnapshotResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
