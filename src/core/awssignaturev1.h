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

#ifndef AWSSIGNATUREV1_H
#define AWSSIGNATUREV1_H

#include "qtawsglobal.h"
#include "awssignaturev0.h"

namespace QtAws {
namespace Core {

class AwsSignatureV1Private;

class QTAWS_EXPORT AwsSignatureV1 : public AwsSignatureV0 {

public:
    AwsSignatureV1();

    virtual int version() const;

private:
    Q_DECLARE_PRIVATE(AwsSignatureV1)
    Q_DISABLE_COPY(AwsSignatureV1)
    friend class TestAwsSignatureV1;
};

} // namespace Core
} // namespace QtAws

#endif
