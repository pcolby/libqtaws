/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEVPNGATEWAYREQUEST_P_H
#define QTAWS_DELETEVPNGATEWAYREQUEST_P_H

#include "ec2_p.h"
#include "deletevpngatewayrequest.h"

namespace AWS {

namespace EC2 {

class DeleteVpnGatewayRequest;

class QTAWS_EXPORT DeleteVpnGatewayRequestPrivate : public EC2Private {

public:
    DeleteVpnGatewayRequestPrivate(const EC2::Action action,
                                   DeleteVpnGatewayRequest * const q);
    DeleteVpnGatewayRequestPrivate(const DeleteVpnGatewayRequestPrivate &other,
                                   DeleteVpnGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpnGatewayRequest)

};

} // namespace EC2
} // namespace AWS

#endif