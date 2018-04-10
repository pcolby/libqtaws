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

#include "listvocabulariesresponse.h"
#include "listvocabulariesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/**
 * @class  ListVocabulariesResponse
 *
 * @brief  Handles TranscribeService ListVocabularies responses.
 *
 * @see    TranscribeServiceClient::listVocabularies
 */

/**
 * @brief  Constructs a new ListVocabulariesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVocabulariesResponse::ListVocabulariesResponse(
        const ListVocabulariesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new ListVocabulariesResponsePrivate(this), parent)
{
    setRequest(new ListVocabulariesRequest(request));
    setReply(reply);
}

const ListVocabulariesRequest * ListVocabulariesResponse::request() const
{
    Q_D(const ListVocabulariesResponse);
    return static_cast<const ListVocabulariesRequest *>(d->request);
}

/**
 * @brief  Parse a TranscribeService ListVocabularies response.
 *
 * @param  response  Response to parse.
 */
void ListVocabulariesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListVocabulariesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVocabulariesResponsePrivate
 *
 * @brief  Private implementation for ListVocabulariesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVocabulariesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVocabulariesResponse instance.
 */
ListVocabulariesResponsePrivate::ListVocabulariesResponsePrivate(
    ListVocabulariesResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an TranscribeService ListVocabulariesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVocabulariesResponsePrivate::parseListVocabulariesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVocabulariesResponse"));
    /// @todo
}

} // namespace TranscribeService
} // namespace QtAws