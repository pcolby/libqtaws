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

#ifndef QTAWS_DESCRIBEREPLICATIONTASKSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKSREQUEST_P_H

#include "databasemigrationservice_p.h"
#include "describereplicationtasksrequest.h"

namespace QtAws {
namespace DatabaseMigrationService {

class DescribeReplicationTasksRequest;

class QTAWS_EXPORT DescribeReplicationTasksRequestPrivate : public DatabaseMigrationServicePrivate {

public:
    DescribeReplicationTasksRequestPrivate(const DatabaseMigrationService::Action action,
                                   DescribeReplicationTasksRequest * const q);
    DescribeReplicationTasksRequestPrivate(const DescribeReplicationTasksRequestPrivate &other,
                                   DescribeReplicationTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTasksRequest)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif
