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

#include "putconferencepreferencerequest.h"
#include "putconferencepreferencerequest_p.h"
#include "putconferencepreferenceresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutConferencePreferenceRequest
 * \brief The PutConferencePreferenceRequest class provides an interface for AlexaForBusiness PutConferencePreference requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::putConferencePreference
 */

/*!
 * Constructs a copy of \a other.
 */
PutConferencePreferenceRequest::PutConferencePreferenceRequest(const PutConferencePreferenceRequest &other)
    : AlexaForBusinessRequest(new PutConferencePreferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutConferencePreferenceRequest object.
 */
PutConferencePreferenceRequest::PutConferencePreferenceRequest()
    : AlexaForBusinessRequest(new PutConferencePreferenceRequestPrivate(AlexaForBusinessRequest::PutConferencePreferenceAction, this))
{

}

/*!
 * \reimp
 */
bool PutConferencePreferenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutConferencePreferenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutConferencePreferenceRequest::response(QNetworkReply * const reply) const
{
    return new PutConferencePreferenceResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::PutConferencePreferenceRequestPrivate
 * \brief The PutConferencePreferenceRequestPrivate class provides private implementation for PutConferencePreferenceRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutConferencePreferenceRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
PutConferencePreferenceRequestPrivate::PutConferencePreferenceRequestPrivate(
    const AlexaForBusinessRequest::Action action, PutConferencePreferenceRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutConferencePreferenceRequest
 * class' copy constructor.
 */
PutConferencePreferenceRequestPrivate::PutConferencePreferenceRequestPrivate(
    const PutConferencePreferenceRequestPrivate &other, PutConferencePreferenceRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
