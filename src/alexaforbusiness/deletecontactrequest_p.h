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

#ifndef QTAWS_DELETECONTACTREQUEST_P_H
#define QTAWS_DELETECONTACTREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deletecontactrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteContactRequest;

class DeleteContactRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteContactRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteContactRequest * const q);
    DeleteContactRequestPrivate(const DeleteContactRequestPrivate &other,
                                   DeleteContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
