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

#ifndef QTAWS_LISTSTATEMENTSRESPONSE_H
#define QTAWS_LISTSTATEMENTSRESPONSE_H

#include "redshiftdataapiserviceresponse.h"
#include "liststatementsrequest.h"

namespace QtAws {
namespace RedshiftDataAPIService {

class ListStatementsResponsePrivate;

class QTAWSREDSHIFTDATAAPISERVICE_EXPORT ListStatementsResponse : public RedshiftDataAPIServiceResponse {
    Q_OBJECT

public:
    ListStatementsResponse(const ListStatementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStatementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStatementsResponse)
    Q_DISABLE_COPY(ListStatementsResponse)

};

} // namespace RedshiftDataAPIService
} // namespace QtAws

#endif
