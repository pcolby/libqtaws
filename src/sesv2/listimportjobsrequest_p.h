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

#ifndef QTAWS_LISTIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTIMPORTJOBSREQUEST_P_H

#include "sesv2request_p.h"
#include "listimportjobsrequest.h"

namespace QtAws {
namespace SESV2 {

class ListImportJobsRequest;

class ListImportJobsRequestPrivate : public Sesv2RequestPrivate {

public:
    ListImportJobsRequestPrivate(const Sesv2Request::Action action,
                                   ListImportJobsRequest * const q);
    ListImportJobsRequestPrivate(const ListImportJobsRequestPrivate &other,
                                   ListImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImportJobsRequest)

};

} // namespace SESV2
} // namespace QtAws

#endif
