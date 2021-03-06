/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeslotresponse.h"
#include "describeslotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeSlotResponse
 * \brief The DescribeSlotResponse class provides an interace for LexModelsV2 DescribeSlot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeSlot
 */

/*!
 * Constructs a DescribeSlotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSlotResponse::DescribeSlotResponse(
        const DescribeSlotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeSlotResponsePrivate(this), parent)
{
    setRequest(new DescribeSlotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSlotRequest * DescribeSlotResponse::request() const
{
    Q_D(const DescribeSlotResponse);
    return static_cast<const DescribeSlotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeSlot \a response.
 */
void DescribeSlotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSlotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeSlotResponsePrivate
 * \brief The DescribeSlotResponsePrivate class provides private implementation for DescribeSlotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeSlotResponsePrivate object with public implementation \a q.
 */
DescribeSlotResponsePrivate::DescribeSlotResponsePrivate(
    DescribeSlotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeSlot response element from \a xml.
 */
void DescribeSlotResponsePrivate::parseDescribeSlotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSlotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
