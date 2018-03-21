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

#ifndef QTAWS_ADDROLETOINSTANCEPROFILERESPONSE_H
#define QTAWS_ADDROLETOINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "addroletoinstanceprofilerequest.h"

namespace AWS {

namespace IAM {

class AddRoleToInstanceProfileResponsePrivate;

class QTAWS_EXPORT AddRoleToInstanceProfileResponse : public IAMResponse {
    Q_OBJECT

public:
    AddRoleToInstanceProfileResponse(const AddRoleToInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddRoleToInstanceProfileRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AddRoleToInstanceProfileResponse)
    Q_DISABLE_COPY(AddRoleToInstanceProfileResponse)

};

} // namespace IAM
} // namespace AWS

#endif
