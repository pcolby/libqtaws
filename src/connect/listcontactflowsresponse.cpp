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

#include "listcontactflowsresponse.h"
#include "listcontactflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ListContactFlowsResponse
 * \brief The ListContactFlowsResponse class provides an interace for Connect ListContactFlows responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an AWS service by using an endpoint. For a list of Amazon Connect endpoints, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with contact flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::listContactFlows
 */

/*!
 * Constructs a ListContactFlowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactFlowsResponse::ListContactFlowsResponse(
        const ListContactFlowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new ListContactFlowsResponsePrivate(this), parent)
{
    setRequest(new ListContactFlowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactFlowsRequest * ListContactFlowsResponse::request() const
{
    Q_D(const ListContactFlowsResponse);
    return static_cast<const ListContactFlowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect ListContactFlows \a response.
 */
void ListContactFlowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactFlowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::ListContactFlowsResponsePrivate
 * \brief The ListContactFlowsResponsePrivate class provides private implementation for ListContactFlowsResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ListContactFlowsResponsePrivate object with public implementation \a q.
 */
ListContactFlowsResponsePrivate::ListContactFlowsResponsePrivate(
    ListContactFlowsResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect ListContactFlows response element from \a xml.
 */
void ListContactFlowsResponsePrivate::parseListContactFlowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactFlowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
