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

#include "setvisibletoallusersresponse.h"
#include "setvisibletoallusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::SetVisibleToAllUsersResponse
 * \brief The SetVisibleToAllUsersResponse class provides an interace for EMR SetVisibleToAllUsers responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::setVisibleToAllUsers
 */

/*!
 * Constructs a SetVisibleToAllUsersResponse object for \a reply to \a request, with parent \a parent.
 */
SetVisibleToAllUsersResponse::SetVisibleToAllUsersResponse(
        const SetVisibleToAllUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new SetVisibleToAllUsersResponsePrivate(this), parent)
{
    setRequest(new SetVisibleToAllUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetVisibleToAllUsersRequest * SetVisibleToAllUsersResponse::request() const
{
    Q_D(const SetVisibleToAllUsersResponse);
    return static_cast<const SetVisibleToAllUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR SetVisibleToAllUsers \a response.
 */
void SetVisibleToAllUsersResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetVisibleToAllUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::SetVisibleToAllUsersResponsePrivate
 * \brief The SetVisibleToAllUsersResponsePrivate class provides private implementation for SetVisibleToAllUsersResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a SetVisibleToAllUsersResponsePrivate object with public implementation \a q.
 */
SetVisibleToAllUsersResponsePrivate::SetVisibleToAllUsersResponsePrivate(
    SetVisibleToAllUsersResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * Parses a EMR SetVisibleToAllUsers response element from \a xml.
 */
void SetVisibleToAllUsersResponsePrivate::parseSetVisibleToAllUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetVisibleToAllUsersResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
