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

#include "deleteendpointresponse.h"
#include "deleteendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteEndpointResponse
 * \brief The DeleteEndpointResponse class provides an interace for SageMaker DeleteEndpoint responses.
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
 * \sa SageMakerClient::deleteEndpoint
 */

/*!
 * Constructs a DeleteEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEndpointResponse::DeleteEndpointResponse(
        const DeleteEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEndpointRequest * DeleteEndpointResponse::request() const
{
    Q_D(const DeleteEndpointResponse);
    return static_cast<const DeleteEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteEndpoint \a response.
 */
void DeleteEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteEndpointResponsePrivate
 * \brief The DeleteEndpointResponsePrivate class provides private implementation for DeleteEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteEndpointResponsePrivate object with public implementation \a q.
 */
DeleteEndpointResponsePrivate::DeleteEndpointResponsePrivate(
    DeleteEndpointResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteEndpoint response element from \a xml.
 */
void DeleteEndpointResponsePrivate::parseDeleteEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
