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

#include "listactivitytypesresponse.h"
#include "listactivitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::ListActivityTypesResponse
 * \brief The ListActivityTypesResponse class provides an interace for SWF ListActivityTypes responses.
 *
 * \inmodule QtAwsSWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::listActivityTypes
 */

/*!
 * Constructs a ListActivityTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListActivityTypesResponse::ListActivityTypesResponse(
        const ListActivityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListActivityTypesResponsePrivate(this), parent)
{
    setRequest(new ListActivityTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActivityTypesRequest * ListActivityTypesResponse::request() const
{
    Q_D(const ListActivityTypesResponse);
    return static_cast<const ListActivityTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SWF ListActivityTypes \a response.
 */
void ListActivityTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListActivityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::ListActivityTypesResponsePrivate
 * \brief The ListActivityTypesResponsePrivate class provides private implementation for ListActivityTypesResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a ListActivityTypesResponsePrivate object with public implementation \a q.
 */
ListActivityTypesResponsePrivate::ListActivityTypesResponsePrivate(
    ListActivityTypesResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * Parses a SWF ListActivityTypes response element from \a xml.
 */
void ListActivityTypesResponsePrivate::parseListActivityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivityTypesResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
