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

#ifndef QTAWS_STARTCHATCONTACTRESPONSE_H
#define QTAWS_STARTCHATCONTACTRESPONSE_H

#include "connectresponse.h"
#include "startchatcontactrequest.h"

namespace QtAws {
namespace Connect {

class StartChatContactResponsePrivate;

class QTAWSCONNECT_EXPORT StartChatContactResponse : public ConnectResponse {
    Q_OBJECT

public:
    StartChatContactResponse(const StartChatContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartChatContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartChatContactResponse)
    Q_DISABLE_COPY(StartChatContactResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
