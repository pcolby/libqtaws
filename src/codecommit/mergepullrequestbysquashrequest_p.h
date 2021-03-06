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

#ifndef QTAWS_MERGEPULLREQUESTBYSQUASHREQUEST_P_H
#define QTAWS_MERGEPULLREQUESTBYSQUASHREQUEST_P_H

#include "codecommitrequest_p.h"
#include "mergepullrequestbysquashrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestBySquashRequest;

class MergePullRequestBySquashRequestPrivate : public CodeCommitRequestPrivate {

public:
    MergePullRequestBySquashRequestPrivate(const CodeCommitRequest::Action action,
                                   MergePullRequestBySquashRequest * const q);
    MergePullRequestBySquashRequestPrivate(const MergePullRequestBySquashRequestPrivate &other,
                                   MergePullRequestBySquashRequest * const q);

private:
    Q_DECLARE_PUBLIC(MergePullRequestBySquashRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
