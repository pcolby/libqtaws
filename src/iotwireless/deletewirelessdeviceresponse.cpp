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

#include "deletewirelessdeviceresponse.h"
#include "deletewirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessDeviceResponse
 * \brief The DeleteWirelessDeviceResponse class provides an interace for IoTWireless DeleteWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteWirelessDevice
 */

/*!
 * Constructs a DeleteWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessDeviceResponse::DeleteWirelessDeviceResponse(
        const DeleteWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessDeviceRequest * DeleteWirelessDeviceResponse::request() const
{
    Q_D(const DeleteWirelessDeviceResponse);
    return static_cast<const DeleteWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessDevice \a response.
 */
void DeleteWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessDeviceResponsePrivate
 * \brief The DeleteWirelessDeviceResponsePrivate class provides private implementation for DeleteWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessDeviceResponsePrivate object with public implementation \a q.
 */
DeleteWirelessDeviceResponsePrivate::DeleteWirelessDeviceResponsePrivate(
    DeleteWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessDevice response element from \a xml.
 */
void DeleteWirelessDeviceResponsePrivate::parseDeleteWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
