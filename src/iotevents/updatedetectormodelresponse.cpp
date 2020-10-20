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

#include "updatedetectormodelresponse.h"
#include "updatedetectormodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::UpdateDetectorModelResponse
 * \brief The UpdateDetectorModelResponse class provides an interace for IoTEvents UpdateDetectorModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events
 *
 * \sa IoTEventsClient::updateDetectorModel
 */

/*!
 * Constructs a UpdateDetectorModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDetectorModelResponse::UpdateDetectorModelResponse(
        const UpdateDetectorModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new UpdateDetectorModelResponsePrivate(this), parent)
{
    setRequest(new UpdateDetectorModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDetectorModelRequest * UpdateDetectorModelResponse::request() const
{
    Q_D(const UpdateDetectorModelResponse);
    return static_cast<const UpdateDetectorModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents UpdateDetectorModel \a response.
 */
void UpdateDetectorModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDetectorModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::UpdateDetectorModelResponsePrivate
 * \brief The UpdateDetectorModelResponsePrivate class provides private implementation for UpdateDetectorModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a UpdateDetectorModelResponsePrivate object with public implementation \a q.
 */
UpdateDetectorModelResponsePrivate::UpdateDetectorModelResponsePrivate(
    UpdateDetectorModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents UpdateDetectorModel response element from \a xml.
 */
void UpdateDetectorModelResponsePrivate::parseUpdateDetectorModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDetectorModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
