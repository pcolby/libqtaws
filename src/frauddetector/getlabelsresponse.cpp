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

#include "getlabelsresponse.h"
#include "getlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetLabelsResponse
 * \brief The GetLabelsResponse class provides an interace for FraudDetector GetLabels responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getLabels
 */

/*!
 * Constructs a GetLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLabelsResponse::GetLabelsResponse(
        const GetLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new GetLabelsResponsePrivate(this), parent)
{
    setRequest(new GetLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLabelsRequest * GetLabelsResponse::request() const
{
    Q_D(const GetLabelsResponse);
    return static_cast<const GetLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector GetLabels \a response.
 */
void GetLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::GetLabelsResponsePrivate
 * \brief The GetLabelsResponsePrivate class provides private implementation for GetLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetLabelsResponsePrivate object with public implementation \a q.
 */
GetLabelsResponsePrivate::GetLabelsResponsePrivate(
    GetLabelsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector GetLabels response element from \a xml.
 */
void GetLabelsResponsePrivate::parseGetLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
