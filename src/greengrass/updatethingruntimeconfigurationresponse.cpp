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

#include "updatethingruntimeconfigurationresponse.h"
#include "updatethingruntimeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateThingRuntimeConfigurationResponse
 * \brief The UpdateThingRuntimeConfigurationResponse class provides an interace for Greengrass UpdateThingRuntimeConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateThingRuntimeConfiguration
 */

/*!
 * Constructs a UpdateThingRuntimeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateThingRuntimeConfigurationResponse::UpdateThingRuntimeConfigurationResponse(
        const UpdateThingRuntimeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateThingRuntimeConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateThingRuntimeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateThingRuntimeConfigurationRequest * UpdateThingRuntimeConfigurationResponse::request() const
{
    Q_D(const UpdateThingRuntimeConfigurationResponse);
    return static_cast<const UpdateThingRuntimeConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateThingRuntimeConfiguration \a response.
 */
void UpdateThingRuntimeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateThingRuntimeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateThingRuntimeConfigurationResponsePrivate
 * \brief The UpdateThingRuntimeConfigurationResponsePrivate class provides private implementation for UpdateThingRuntimeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateThingRuntimeConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateThingRuntimeConfigurationResponsePrivate::UpdateThingRuntimeConfigurationResponsePrivate(
    UpdateThingRuntimeConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateThingRuntimeConfiguration response element from \a xml.
 */
void UpdateThingRuntimeConfigurationResponsePrivate::parseUpdateThingRuntimeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateThingRuntimeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
