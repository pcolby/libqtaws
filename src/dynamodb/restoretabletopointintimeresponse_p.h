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

#ifndef QTAWS_RESTORETABLETOPOINTINTIMERESPONSE_P_H
#define QTAWS_RESTORETABLETOPOINTINTIMERESPONSE_P_H

#include "dynamodbresponse.h"
#include "restoretabletopointintimerequest.h"

namespace AWS {

namespace DynamoDB {

class RestoreTableToPointInTimeResponse;

class QTAWS_EXPORT RestoreTableToPointInTimeResponsePrivate : public DynamoDBResponsePrivate {
    Q_OBJECT

public:

    RestoreTableToPointInTimeResponsePrivate(RestoreTableToPointInTimeResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreTableToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreTableToPointInTimeResponsePrivate)

};

} // namespace DynamoDB
} // namespace AWS

#endif
