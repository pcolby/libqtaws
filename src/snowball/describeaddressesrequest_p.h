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

#ifndef QTAWS_DESCRIBEADDRESSESREQUEST_P_H
#define QTAWS_DESCRIBEADDRESSESREQUEST_P_H

#include "snowball_p.h"
#include "describeaddressesrequest.h"

namespace AWS {

namespace Snowball {

class DescribeAddressesRequest;

class QTAWS_EXPORT DescribeAddressesRequestPrivate : public SnowballPrivate {

public:
    DescribeAddressesRequestPrivate(const Snowball::Action action,
                                   DescribeAddressesRequest * const q);
    DescribeAddressesRequestPrivate(const DescribeAddressesRequestPrivate &other,
                                   DescribeAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAddressesRequest)

};

} // namespace Snowball
} // namespace AWS

#endif