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

#ifndef QTAWS_DELETEVOICECONNECTORORIGINATIONRESPONSE_H
#define QTAWS_DELETEVOICECONNECTORORIGINATIONRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectororiginationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorOriginationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorOriginationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorOriginationResponse(const DeleteVoiceConnectorOriginationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorOriginationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorOriginationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorOriginationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
