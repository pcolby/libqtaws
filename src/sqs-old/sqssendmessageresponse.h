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

#ifndef SQSSENDMESSAGE_H
#define SQSSENDMESSAGE_H

#include "sqssendmessagerequest.h"
#include "sqsresponse.h"

QTAWS_BEGIN_NAMESPACE

class SqsSendMessageResponsePrivate;

class QTAWS_EXPORT SqsSendMessageResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsSendMessageResponse(const SqsSendMessageRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsSendMessageRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsSendMessageResponse)
    Q_DISABLE_COPY(SqsSendMessageResponse)
    friend class TestSqsSendMessageResponse;
};

QTAWS_END_NAMESPACE

#endif
