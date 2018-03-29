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

#ifndef QTAWS_MODIFYCLUSTERIAMROLESREQUEST_P_H
#define QTAWS_MODIFYCLUSTERIAMROLESREQUEST_P_H

#include "redshift_p.h"
#include "modifyclusteriamrolesrequest.h"

namespace AWS {

namespace Redshift {

class ModifyClusterIamRolesRequest;

class QTAWS_EXPORT ModifyClusterIamRolesRequestPrivate : public RedshiftPrivate {

public:
    ModifyClusterIamRolesRequestPrivate(const Redshift::Action action,
                                   ModifyClusterIamRolesRequest * const q);
    ModifyClusterIamRolesRequestPrivate(const ModifyClusterIamRolesRequestPrivate &other,
                                   ModifyClusterIamRolesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterIamRolesRequest)

};

} // namespace Redshift
} // namespace AWS

#endif
