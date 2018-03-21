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

#ifndef QTAWS_DELETEROLEREQUEST_P_H
#define QTAWS_DELETEROLEREQUEST_P_H

#include "iam_p.h"
#include "deleterolerequest.h"

namespace AWS {

namespace IAM {

class DeleteRoleRequest;

class QTAWS_EXPORT DeleteRoleRequestPrivate : public IAMPrivate {

public:
    DeleteRoleRequestPrivate(const IAM::Action action,
                                   DeleteRoleRequest * const q);
    DeleteRoleRequestPrivate(const DeleteRoleRequestPrivate &other,
                                   DeleteRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoleRequest)

};

} // namespace IAM
} // namespace AWS

#endif