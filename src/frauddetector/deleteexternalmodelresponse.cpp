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

#include "deleteexternalmodelresponse.h"
#include "deleteexternalmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteExternalModelResponse
 * \brief The DeleteExternalModelResponse class provides an interace for FraudDetector DeleteExternalModel responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteExternalModel
 */

/*!
 * Constructs a DeleteExternalModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExternalModelResponse::DeleteExternalModelResponse(
        const DeleteExternalModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteExternalModelResponsePrivate(this), parent)
{
    setRequest(new DeleteExternalModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExternalModelRequest * DeleteExternalModelResponse::request() const
{
    Q_D(const DeleteExternalModelResponse);
    return static_cast<const DeleteExternalModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteExternalModel \a response.
 */
void DeleteExternalModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExternalModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteExternalModelResponsePrivate
 * \brief The DeleteExternalModelResponsePrivate class provides private implementation for DeleteExternalModelResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteExternalModelResponsePrivate object with public implementation \a q.
 */
DeleteExternalModelResponsePrivate::DeleteExternalModelResponsePrivate(
    DeleteExternalModelResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteExternalModel response element from \a xml.
 */
void DeleteExternalModelResponsePrivate::parseDeleteExternalModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExternalModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
