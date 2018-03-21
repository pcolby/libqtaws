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

#include "removetagsfromcertificateresponse.h"
#include "removetagsfromcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ACM {

/**
 * @class  RemoveTagsFromCertificateResponse
 *
 * @brief  Handles ACM RemoveTagsFromCertificate responses.
 *
 * @see    ACMClient::removeTagsFromCertificate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromCertificateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new RemoveTagsFromCertificateResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromCertificateRequest(request));
    setReply(reply);
}

const RemoveTagsFromCertificateRequest * RemoveTagsFromCertificateResponse::request() const
{
    Q_D(const RemoveTagsFromCertificateResponse);
    return static_cast<const RemoveTagsFromCertificateRequest *>(d->request);
}

/**
 * @brief  Parse a ACM RemoveTagsFromCertificate response.
 *
 * @param  response  Response to parse.
 */
void RemoveTagsFromCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTagsFromCertificateResponsePrivate
 *
 * @brief  Private implementation for RemoveTagsFromCertificateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromCertificateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTagsFromCertificateResponse instance.
 */
RemoveTagsFromCertificateResponsePrivate::RemoveTagsFromCertificateResponsePrivate(
    RemoveTagsFromCertificateQueueResponse * const q) : RemoveTagsFromCertificatePrivate(q)
{

}

/**
 * @brief  Parse an ACM RemoveTagsFromCertificateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTagsFromCertificateResponsePrivate::RemoveTagsFromCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace AWS