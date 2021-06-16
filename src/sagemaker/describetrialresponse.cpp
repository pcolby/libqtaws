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

#include "describetrialresponse.h"
#include "describetrialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrialResponse
 * \brief The DescribeTrialResponse class provides an interace for SageMaker DescribeTrial responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeTrial
 */

/*!
 * Constructs a DescribeTrialResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrialResponse::DescribeTrialResponse(
        const DescribeTrialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrialResponsePrivate(this), parent)
{
    setRequest(new DescribeTrialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrialRequest * DescribeTrialResponse::request() const
{
    Q_D(const DescribeTrialResponse);
    return static_cast<const DescribeTrialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTrial \a response.
 */
void DescribeTrialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTrialResponsePrivate
 * \brief The DescribeTrialResponsePrivate class provides private implementation for DescribeTrialResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrialResponsePrivate object with public implementation \a q.
 */
DescribeTrialResponsePrivate::DescribeTrialResponsePrivate(
    DescribeTrialResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTrial response element from \a xml.
 */
void DescribeTrialResponsePrivate::parseDescribeTrialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
