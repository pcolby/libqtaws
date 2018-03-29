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

#ifndef QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_P_H
#define QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_P_H

#include "rdsresponse.h"
#include "restoredbinstancefroms3request.h"

namespace QtAws {
namespace RDS {

class RestoreDBInstanceFromS3Response;

class QTAWS_EXPORT RestoreDBInstanceFromS3ResponsePrivate : public RDSResponsePrivate {
    Q_OBJECT

public:

    RestoreDBInstanceFromS3ResponsePrivate(RestoreDBInstanceFromS3Response * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceFromS3Response)
    Q_DISABLE_COPY(RestoreDBInstanceFromS3ResponsePrivate)

};

} // namespace RDS
} // namespace QtAws

#endif
