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

#ifndef QTAWS_GETACTIVITYTASKRESPONSE_P_H
#define QTAWS_GETACTIVITYTASKRESPONSE_P_H

#include "sfnresponse.h"
#include "getactivitytaskrequest.h"

namespace AWS {

namespace SFN {

class GetActivityTaskResponse;

class QTAWS_EXPORT GetActivityTaskResponsePrivate : public SFNResponsePrivate {
    Q_OBJECT

public:

    GetActivityTaskResponsePrivate(GetActivityTaskResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetActivityTaskResponse)
    Q_DISABLE_COPY(GetActivityTaskResponsePrivate)

};

} // namespace SFN
} // namespace AWS

#endif