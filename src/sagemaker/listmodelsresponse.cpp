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

#include "listmodelsresponse.h"
#include "listmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  ListModelsResponse
 *
 * @brief  Handles SageMaker ListModels responses.
 *
 * @see    SageMakerClient::listModels
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListModelsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelsResponsePrivate(this), parent)
{
    setRequest(new ListModelsRequest(request));
    setReply(reply);
}

const ListModelsRequest * ListModelsResponse::request() const
{
    Q_D(const ListModelsResponse);
    return static_cast<const ListModelsRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker ListModels response.
 *
 * @param  response  Response to parse.
 */
void ListModelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListModelsResponsePrivate
 *
 * @brief  Private implementation for ListModelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListModelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListModelsResponse instance.
 */
ListModelsResponsePrivate::ListModelsResponsePrivate(
    ListModelsQueueResponse * const q) : ListModelsPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker ListModelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListModelsResponsePrivate::ListModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS