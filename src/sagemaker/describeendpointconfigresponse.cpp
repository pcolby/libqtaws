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

#include "describeendpointconfigresponse.h"
#include "describeendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigResponse
 * \brief The DescribeEndpointConfigResponse class provides an interace for SageMaker DescribeEndpointConfig responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeEndpointConfig
 */

/*!
 * Constructs a DescribeEndpointConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointConfigResponse::DescribeEndpointConfigResponse(
        const DescribeEndpointConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointConfigRequest * DescribeEndpointConfigResponse::request() const
{
    Q_D(const DescribeEndpointConfigResponse);
    return static_cast<const DescribeEndpointConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeEndpointConfig \a response.
 */
void DescribeEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeEndpointConfigResponsePrivate
 * \brief The DescribeEndpointConfigResponsePrivate class provides private implementation for DescribeEndpointConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEndpointConfigResponsePrivate object with public implementation \a q.
 */
DescribeEndpointConfigResponsePrivate::DescribeEndpointConfigResponsePrivate(
    DescribeEndpointConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeEndpointConfig response element from \a xml.
 */
void DescribeEndpointConfigResponsePrivate::parseDescribeEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
