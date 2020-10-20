/*
    Copyright 2013-2020 Paul Colby

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

#include "unsubscribefromeventresponse.h"
#include "unsubscribefromeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventResponse
 * \brief The UnsubscribeFromEventResponse class provides an interace for Inspector UnsubscribeFromEvent responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::unsubscribeFromEvent
 */

/*!
 * Constructs a UnsubscribeFromEventResponse object for \a reply to \a request, with parent \a parent.
 */
UnsubscribeFromEventResponse::UnsubscribeFromEventResponse(
        const UnsubscribeFromEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new UnsubscribeFromEventResponsePrivate(this), parent)
{
    setRequest(new UnsubscribeFromEventRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnsubscribeFromEventRequest * UnsubscribeFromEventResponse::request() const
{
    Q_D(const UnsubscribeFromEventResponse);
    return static_cast<const UnsubscribeFromEventRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector UnsubscribeFromEvent \a response.
 */
void UnsubscribeFromEventResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnsubscribeFromEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::UnsubscribeFromEventResponsePrivate
 * \brief The UnsubscribeFromEventResponsePrivate class provides private implementation for UnsubscribeFromEventResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a UnsubscribeFromEventResponsePrivate object with public implementation \a q.
 */
UnsubscribeFromEventResponsePrivate::UnsubscribeFromEventResponsePrivate(
    UnsubscribeFromEventResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector UnsubscribeFromEvent response element from \a xml.
 */
void UnsubscribeFromEventResponsePrivate::parseUnsubscribeFromEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnsubscribeFromEventResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
