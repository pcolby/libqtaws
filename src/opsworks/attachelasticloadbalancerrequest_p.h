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

#ifndef QTAWS_ATTACHELASTICLOADBALANCERREQUEST_P_H
#define QTAWS_ATTACHELASTICLOADBALANCERREQUEST_P_H

#include "opsworks_p.h"
#include "attachelasticloadbalancerrequest.h"

namespace QtAws {
namespace OpsWorks {

class AttachElasticLoadBalancerRequest;

class QTAWS_EXPORT AttachElasticLoadBalancerRequestPrivate : public OpsWorksPrivate {

public:
    AttachElasticLoadBalancerRequestPrivate(const OpsWorks::Action action,
                                   AttachElasticLoadBalancerRequest * const q);
    AttachElasticLoadBalancerRequestPrivate(const AttachElasticLoadBalancerRequestPrivate &other,
                                   AttachElasticLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachElasticLoadBalancerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
