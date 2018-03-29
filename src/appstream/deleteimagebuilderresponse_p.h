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

#ifndef QTAWS_DELETEIMAGEBUILDERRESPONSE_P_H
#define QTAWS_DELETEIMAGEBUILDERRESPONSE_P_H

#include "appstreamresponse.h"
#include "deleteimagebuilderrequest.h"

namespace AWS {

namespace AppStream {

class DeleteImageBuilderResponse;

class QTAWS_EXPORT DeleteImageBuilderResponsePrivate : public AppStreamResponsePrivate {
    Q_OBJECT

public:

    DeleteImageBuilderResponsePrivate(DeleteImageBuilderResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImageBuilderResponse)
    Q_DISABLE_COPY(DeleteImageBuilderResponsePrivate)

};

} // namespace AppStream
} // namespace AWS

#endif
