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

#include "schemasresponse.h"
#include "schemasresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::SchemasResponse
 * \brief The SchemasResponse class provides an interface for Schemas responses.
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SchemasResponse object with parent \a parent.
 */
SchemasResponse::SchemasResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SchemasResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SchemasResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SchemasResponsePrivate.
 */
SchemasResponse::SchemasResponse(SchemasResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SchemasResponse::parseFailure(QIODevice &response)
{
    //Q_D(SchemasResponse);
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
 * \class QtAws::Schemas::SchemasResponsePrivate
 * \brief The SchemasResponsePrivate class provides private implementation for SchemasResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a SchemasResponsePrivate object with public implementation \a q.
 */
SchemasResponsePrivate::SchemasResponsePrivate(
    SchemasResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Schemas
} // namespace QtAws
