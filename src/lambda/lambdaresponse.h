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

#ifndef QTAWS_LAMBDARESPONSE_H
#define QTAWS_LAMBDARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslambdaglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Lambda {

class LambdaResponsePrivate;

class QTAWSLAMBDA_EXPORT LambdaResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LambdaResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LambdaResponse(LambdaResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LambdaResponse)
    Q_DISABLE_COPY(LambdaResponse)

};

} // namespace Lambda
} // namespace QtAws

#endif
