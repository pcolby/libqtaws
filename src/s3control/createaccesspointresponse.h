/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_CREATEACCESSPOINTRESPONSE_H
#define QTAWS_CREATEACCESSPOINTRESPONSE_H

#include "s3controlresponse.h"
#include "createaccesspointrequest.h"

namespace QtAws {
namespace S3Control {

class CreateAccessPointResponsePrivate;

class QTAWSS3CONTROL_EXPORT CreateAccessPointResponse : public S3ControlResponse {
    Q_OBJECT

public:
    CreateAccessPointResponse(const CreateAccessPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPointResponse)
    Q_DISABLE_COPY(CreateAccessPointResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
