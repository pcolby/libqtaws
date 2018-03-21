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

#include "getjobdocumentresponse.h"
#include "getjobdocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  GetJobDocumentResponse
 *
 * @brief  Handles IoT GetJobDocument responses.
 *
 * @see    IoTClient::getJobDocument
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobDocumentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetJobDocumentResponsePrivate(this), parent)
{
    setRequest(new GetJobDocumentRequest(request));
    setReply(reply);
}

const GetJobDocumentRequest * GetJobDocumentResponse::request() const
{
    Q_D(const GetJobDocumentResponse);
    return static_cast<const GetJobDocumentRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetJobDocument response.
 *
 * @param  response  Response to parse.
 */
void GetJobDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobDocumentResponsePrivate
 *
 * @brief  Private implementation for GetJobDocumentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobDocumentResponse instance.
 */
GetJobDocumentResponsePrivate::GetJobDocumentResponsePrivate(
    GetJobDocumentQueueResponse * const q) : GetJobDocumentPrivate(q)
{

}

/**
 * @brief  Parse an IoT GetJobDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobDocumentResponsePrivate::GetJobDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobDocumentResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
