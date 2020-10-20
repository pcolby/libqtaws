/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_BATCHGETJOBSRESPONSE_P_H
#define QTAWS_BATCHGETJOBSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetJobsResponse;

class QTAWS_EXPORT BatchGetJobsResponsePrivate : public GlueResponsePrivate {

public:

    BatchGetJobsResponsePrivate(BatchGetJobsResponse * const q);

    void parseBatchGetJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetJobsResponse)
    Q_DISABLE_COPY(BatchGetJobsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
