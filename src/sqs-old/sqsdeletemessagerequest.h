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

#ifndef SQSDELETEMESSAGEREQUEST_H
#define SQSDELETEMESSAGEREQUEST_H

#include "sqsrequest.h"

QTAWS_BEGIN_NAMESPACE

class SqsDeleteMessageRequestPrivate;

class QTAWS_EXPORT SqsDeleteMessageRequest : public SqsRequest {

public:
    SqsDeleteMessageRequest(const QString &queueUrl, const QString &receiptHandle);
    SqsDeleteMessageRequest(const SqsDeleteMessageRequest &other);
    SqsDeleteMessageRequest();

    virtual bool isValid() const;

    QString queueUrl() const;
    QString receiptHandle() const;

    void setQueueUrl(const QString &queueUrl);
    void setReceiptHandle(const QString &receiptHandle);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsDeleteMessageRequest)
    friend class TestSqsDeleteMessageRequest;
};

QTAWS_END_NAMESPACE

#endif
