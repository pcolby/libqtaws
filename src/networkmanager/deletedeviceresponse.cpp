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

#include "deletedeviceresponse.h"
#include "deletedeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteDeviceResponse
 * \brief The DeleteDeviceResponse class provides an interace for NetworkManager DeleteDevice responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::deleteDevice
 */

/*!
 * Constructs a DeleteDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceResponse::DeleteDeviceResponse(
        const DeleteDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceRequest * DeleteDeviceResponse::request() const
{
    Q_D(const DeleteDeviceResponse);
    return static_cast<const DeleteDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteDevice \a response.
 */
void DeleteDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteDeviceResponsePrivate
 * \brief The DeleteDeviceResponsePrivate class provides private implementation for DeleteDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteDeviceResponsePrivate object with public implementation \a q.
 */
DeleteDeviceResponsePrivate::DeleteDeviceResponsePrivate(
    DeleteDeviceResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteDevice response element from \a xml.
 */
void DeleteDeviceResponsePrivate::parseDeleteDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
