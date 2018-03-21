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

#ifndef QTAWS_POLLFORTASKRESPONSE_P_H
#define QTAWS_POLLFORTASKRESPONSE_P_H

#include "datapipelineresponse.h"
#include "pollfortaskrequest.h"

namespace AWS {

namespace DataPipeline {

class PollForTaskResponse;

class QTAWS_EXPORT PollForTaskResponsePrivate : public DataPipelineResponsePrivate {
    Q_OBJECT

public:

    PollForTaskResponsePrivate(PollForTaskResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollForTaskResponse)
    Q_DISABLE_COPY(PollForTaskResponsePrivate)

};

} // namespace DataPipeline
} // namespace AWS

#endif