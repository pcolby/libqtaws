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

#ifndef QTAWS_GETONPREMISESINSTANCEREQUEST_P_H
#define QTAWS_GETONPREMISESINSTANCEREQUEST_P_H

#include "codedeploy_p.h"
#include "getonpremisesinstancerequest.h"

namespace AWS {

namespace CodeDeploy {

class GetOnPremisesInstanceRequest;

class QTAWS_EXPORT GetOnPremisesInstanceRequestPrivate : public CodeDeployPrivate {

public:
    GetOnPremisesInstanceRequestPrivate(const CodeDeploy::Action action,
                                   GetOnPremisesInstanceRequest * const q);
    GetOnPremisesInstanceRequestPrivate(const GetOnPremisesInstanceRequestPrivate &other,
                                   GetOnPremisesInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace AWS

#endif