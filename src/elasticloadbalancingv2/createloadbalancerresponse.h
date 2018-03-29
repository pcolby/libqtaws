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

#ifndef QTAWS_CREATELOADBALANCERRESPONSE_H
#define QTAWS_CREATELOADBALANCERRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "createloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateLoadBalancerResponsePrivate;

class QTAWS_EXPORT CreateLoadBalancerResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    CreateLoadBalancerResponse(const CreateLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoadBalancerRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerResponse)
    Q_DISABLE_COPY(CreateLoadBalancerResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
