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

#ifndef QTAWS_CREATEFIREWALLRULERESPONSE_H
#define QTAWS_CREATEFIREWALLRULERESPONSE_H

#include "route53resolverresponse.h"
#include "createfirewallrulerequest.h"

namespace QtAws {
namespace Route53Resolver {

class CreateFirewallRuleResponsePrivate;

class QTAWS_EXPORT CreateFirewallRuleResponse : public Route53ResolverResponse {
    Q_OBJECT

public:
    CreateFirewallRuleResponse(const CreateFirewallRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFirewallRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFirewallRuleResponse)
    Q_DISABLE_COPY(CreateFirewallRuleResponse)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
