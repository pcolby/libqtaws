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

#include "batchresponse.h"
#include "batchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::BatchResponse
 * \brief The BatchResponse class provides an interface for Batch responses.
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a BatchResponse object with parent \a parent.
 */
BatchResponse::BatchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BatchResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a BatchResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BatchResponsePrivate.
 */
BatchResponse::BatchResponse(BatchResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void BatchResponse::parseFailure(QIODevice &response)
{
    //Q_D(BatchResponse);
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
 * \class QtAws::Batch::BatchResponsePrivate
 * \brief The BatchResponsePrivate class provides private implementation for BatchResponse.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a BatchResponsePrivate object with public implementation \a q.
 */
BatchResponsePrivate::BatchResponsePrivate(
    BatchResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Batch
} // namespace QtAws
