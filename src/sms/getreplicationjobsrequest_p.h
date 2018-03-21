/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETREPLICATIONJOBSREQUEST_P_H
#define QTAWS_GETREPLICATIONJOBSREQUEST_P_H

#include "sms_p.h"
#include "getreplicationjobsrequest.h"

namespace AWS {

namespace SMS {

class GetReplicationJobsRequest;

class QTAWS_EXPORT GetReplicationJobsRequestPrivate : public SMSPrivate {

public:
    GetReplicationJobsRequestPrivate(const SMS::Action action,
                                   GetReplicationJobsRequest * const q);
    GetReplicationJobsRequestPrivate(const GetReplicationJobsRequestPrivate &other,
                                   GetReplicationJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReplicationJobsRequest)

};

} // namespace SMS
} // namespace AWS

#endif