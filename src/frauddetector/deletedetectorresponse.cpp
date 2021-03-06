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

#include "deletedetectorresponse.h"
#include "deletedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteDetectorResponse
 * \brief The DeleteDetectorResponse class provides an interace for FraudDetector DeleteDetector responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteDetector
 */

/*!
 * Constructs a DeleteDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDetectorResponse::DeleteDetectorResponse(
        const DeleteDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteDetectorResponsePrivate(this), parent)
{
    setRequest(new DeleteDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDetectorRequest * DeleteDetectorResponse::request() const
{
    Q_D(const DeleteDetectorResponse);
    return static_cast<const DeleteDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteDetector \a response.
 */
void DeleteDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteDetectorResponsePrivate
 * \brief The DeleteDetectorResponsePrivate class provides private implementation for DeleteDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteDetectorResponsePrivate object with public implementation \a q.
 */
DeleteDetectorResponsePrivate::DeleteDetectorResponsePrivate(
    DeleteDetectorResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteDetector response element from \a xml.
 */
void DeleteDetectorResponsePrivate::parseDeleteDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
