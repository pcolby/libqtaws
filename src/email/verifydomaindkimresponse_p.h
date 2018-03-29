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

#ifndef QTAWS_VERIFYDOMAINDKIMRESPONSE_P_H
#define QTAWS_VERIFYDOMAINDKIMRESPONSE_P_H

#include "sesresponse.h"
#include "verifydomaindkimrequest.h"

namespace QtAws {
namespace SES {

class VerifyDomainDkimResponse;

class QTAWS_EXPORT VerifyDomainDkimResponsePrivate : public SESResponsePrivate {
    Q_OBJECT

public:

    VerifyDomainDkimResponsePrivate(VerifyDomainDkimResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyDomainDkimResponse)
    Q_DISABLE_COPY(VerifyDomainDkimResponsePrivate)

};

} // namespace SES
} // namespace QtAws

#endif
