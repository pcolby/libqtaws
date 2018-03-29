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

#ifndef QTAWS_CREATEFUNCTIONREQUEST_P_H
#define QTAWS_CREATEFUNCTIONREQUEST_P_H

#include "lambda_p.h"
#include "createfunctionrequest.h"

namespace QtAws {
namespace Lambda {

class CreateFunctionRequest;

class QTAWS_EXPORT CreateFunctionRequestPrivate : public LambdaPrivate {

public:
    CreateFunctionRequestPrivate(const Lambda::Action action,
                                   CreateFunctionRequest * const q);
    CreateFunctionRequestPrivate(const CreateFunctionRequestPrivate &other,
                                   CreateFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFunctionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
