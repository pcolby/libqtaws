/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ADMINSETUSERMFAPREFERENCEREQUEST_P_H
#define QTAWS_ADMINSETUSERMFAPREFERENCEREQUEST_P_H

#include "cognitoidentityprovider_p.h"
#include "adminsetusermfapreferencerequest.h"

namespace AWS {

namespace CognitoIdentityProvider {

class AdminSetUserMFAPreferenceRequest;

class QTAWS_EXPORT AdminSetUserMFAPreferenceRequestPrivate : public CognitoIdentityProviderPrivate {

public:
    AdminSetUserMFAPreferenceRequestPrivate(const CognitoIdentityProvider::Action action,
                                   AdminSetUserMFAPreferenceRequest * const q);
    AdminSetUserMFAPreferenceRequestPrivate(const AdminSetUserMFAPreferenceRequestPrivate &other,
                                   AdminSetUserMFAPreferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminSetUserMFAPreferenceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace AWS

#endif
