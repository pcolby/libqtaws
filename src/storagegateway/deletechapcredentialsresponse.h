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

#ifndef QTAWS_DELETECHAPCREDENTIALSRESPONSE_H
#define QTAWS_DELETECHAPCREDENTIALSRESPONSE_H

#include "storagegatewayresponse.h"
#include "deletechapcredentialsrequest.h"

namespace AWS {

namespace StorageGateway {

class DeleteChapCredentialsResponsePrivate;

class QTAWS_EXPORT DeleteChapCredentialsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteChapCredentialsResponse(const DeleteChapCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChapCredentialsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteChapCredentialsResponse)
    Q_DISABLE_COPY(DeleteChapCredentialsResponse)

};

} // namespace StorageGateway
} // namespace AWS

#endif
