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

#ifndef QTAWS_DESCRIBECHANGESETRESPONSE_H
#define QTAWS_DESCRIBECHANGESETRESPONSE_H

#include "cloudformationresponse.h"
#include "describechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DescribeChangeSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DescribeChangeSetResponse(const DescribeChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChangeSetResponse)
    Q_DISABLE_COPY(DescribeChangeSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
