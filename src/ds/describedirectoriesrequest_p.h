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

#ifndef QTAWS_DESCRIBEDIRECTORIESREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTORIESREQUEST_P_H

#include "directoryservice_p.h"
#include "describedirectoriesrequest.h"

namespace AWS {

namespace DirectoryService {

class DescribeDirectoriesRequest;

class QTAWS_EXPORT DescribeDirectoriesRequestPrivate : public DirectoryServicePrivate {

public:
    DescribeDirectoriesRequestPrivate(const DirectoryService::Action action,
                                   DescribeDirectoriesRequest * const q);
    DescribeDirectoriesRequestPrivate(const DescribeDirectoriesRequestPrivate &other,
                                   DescribeDirectoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectoriesRequest)

};

} // namespace DirectoryService
} // namespace AWS

#endif