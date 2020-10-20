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

#include "directoryserviceresponse.h"
#include "directoryserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DirectoryServiceResponse
 * \brief The DirectoryServiceResponse class provides an interface for DirectoryService responses.
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DirectoryServiceResponse object with parent \a parent.
 */
DirectoryServiceResponse::DirectoryServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DirectoryServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DirectoryServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectoryServiceResponsePrivate.
 */
DirectoryServiceResponse::DirectoryServiceResponse(DirectoryServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DirectoryServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(DirectoryServiceResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::DirectoryService::DirectoryServiceResponsePrivate
 * \brief The DirectoryServiceResponsePrivate class provides private implementation for DirectoryServiceResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DirectoryServiceResponsePrivate object with public implementation \a q.
 */
DirectoryServiceResponsePrivate::DirectoryServiceResponsePrivate(
    DirectoryServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DirectoryService
} // namespace QtAws
