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

#ifndef QTAWS_CREATEDIRECTORYCONFIGREQUEST_P_H
#define QTAWS_CREATEDIRECTORYCONFIGREQUEST_P_H

#include "appstream_p.h"
#include "createdirectoryconfigrequest.h"

namespace QtAws {
namespace AppStream {

class CreateDirectoryConfigRequest;

class QTAWS_EXPORT CreateDirectoryConfigRequestPrivate : public AppStreamPrivate {

public:
    CreateDirectoryConfigRequestPrivate(const AppStream::Action action,
                                   CreateDirectoryConfigRequest * const q);
    CreateDirectoryConfigRequestPrivate(const CreateDirectoryConfigRequestPrivate &other,
                                   CreateDirectoryConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectoryConfigRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
