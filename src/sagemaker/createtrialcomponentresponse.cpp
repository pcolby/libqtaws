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

#include "createtrialcomponentresponse.h"
#include "createtrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrialComponentResponse
 * \brief The CreateTrialComponentResponse class provides an interace for SageMaker CreateTrialComponent responses.
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
 * \sa SageMakerClient::createTrialComponent
 */

/*!
 * Constructs a CreateTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrialComponentResponse::CreateTrialComponentResponse(
        const CreateTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTrialComponentResponsePrivate(this), parent)
{
    setRequest(new CreateTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrialComponentRequest * CreateTrialComponentResponse::request() const
{
    Q_D(const CreateTrialComponentResponse);
    return static_cast<const CreateTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTrialComponent \a response.
 */
void CreateTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTrialComponentResponsePrivate
 * \brief The CreateTrialComponentResponsePrivate class provides private implementation for CreateTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrialComponentResponsePrivate object with public implementation \a q.
 */
CreateTrialComponentResponsePrivate::CreateTrialComponentResponsePrivate(
    CreateTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTrialComponent response element from \a xml.
 */
void CreateTrialComponentResponsePrivate::parseCreateTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
