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

#ifndef QTAWS_GETWORKLOADREQUEST_P_H
#define QTAWS_GETWORKLOADREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetWorkloadRequest;

class QTAWS_EXPORT GetWorkloadRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetWorkloadRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetWorkloadRequest * const q);
    GetWorkloadRequestPrivate(const GetWorkloadRequestPrivate &other,
                                   GetWorkloadRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkloadRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
