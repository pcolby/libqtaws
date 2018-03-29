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

#ifndef QTAWS_UPDATEPROVISIONINGARTIFACTRESPONSE_H
#define QTAWS_UPDATEPROVISIONINGARTIFACTRESPONSE_H

#include "servicecatalogresponse.h"
#include "updateprovisioningartifactrequest.h"

namespace AWS {

namespace ServiceCatalog {

class UpdateProvisioningArtifactResponsePrivate;

class QTAWS_EXPORT UpdateProvisioningArtifactResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateProvisioningArtifactResponse(const UpdateProvisioningArtifactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProvisioningArtifactRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateProvisioningArtifactResponse)
    Q_DISABLE_COPY(UpdateProvisioningArtifactResponse)

};

} // namespace ServiceCatalog
} // namespace AWS

#endif
