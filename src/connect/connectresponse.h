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

#ifndef QTAWS_CONNECTRESPONSE_H
#define QTAWS_CONNECTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsconnectglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Connect {

class ConnectResponsePrivate;

class QTAWSCONNECT_EXPORT ConnectResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ConnectResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ConnectResponse(ConnectResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectResponse)
    Q_DISABLE_COPY(ConnectResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
