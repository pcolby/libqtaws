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

#include "getuicustomizationrequest.h"
#include "getuicustomizationrequest_p.h"
#include "getuicustomizationresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUICustomizationRequest
 * \brief The GetUICustomizationRequest class provides an interface for CognitoIdentityProvider GetUICustomization requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::getUICustomization
 */

/*!
 * Constructs a copy of \a other.
 */
GetUICustomizationRequest::GetUICustomizationRequest(const GetUICustomizationRequest &other)
    : CognitoIdentityProviderRequest(new GetUICustomizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUICustomizationRequest object.
 */
GetUICustomizationRequest::GetUICustomizationRequest()
    : CognitoIdentityProviderRequest(new GetUICustomizationRequestPrivate(CognitoIdentityProviderRequest::GetUICustomizationAction, this))
{

}

/*!
 * \reimp
 */
bool GetUICustomizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUICustomizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUICustomizationRequest::response(QNetworkReply * const reply) const
{
    return new GetUICustomizationResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUICustomizationRequestPrivate
 * \brief The GetUICustomizationRequestPrivate class provides private implementation for GetUICustomizationRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetUICustomizationRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
GetUICustomizationRequestPrivate::GetUICustomizationRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUICustomizationRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUICustomizationRequest
 * class' copy constructor.
 */
GetUICustomizationRequestPrivate::GetUICustomizationRequestPrivate(
    const GetUICustomizationRequestPrivate &other, GetUICustomizationRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
