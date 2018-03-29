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

#ifndef QTAWS_LAMBDACLIENTREQUEST_P_H
#define QTAWS_LAMBDACLIENTREQUEST_P_H

#include "lambda_p.h"
#include "lambdaclientrequest.h"

namespace AWS {

namespace Lambda {

class LambdaClientRequest;

class QTAWS_EXPORT LambdaClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    LambdaClientRequest::Action action; ///< Lambda action to be performed.
    QString apiVersion;        ///< Lambda API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Lambda request (query string) parameters. @todo?

    LambdaClientRequestPrivate(const LambdaClientRequest::Action action, LambdaClientRequest * const q);
    LambdaClientRequestPrivate(const LambdaClientRequestPrivate &other, LambdaClientRequest * const q);

    static QString toString(const LambdaClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LambdaClientRequest)

};

} // namespace Lambda
} // namespace AWS

#endif
