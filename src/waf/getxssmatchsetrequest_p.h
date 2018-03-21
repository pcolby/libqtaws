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

#ifndef QTAWS_GETXSSMATCHSETREQUEST_P_H
#define QTAWS_GETXSSMATCHSETREQUEST_P_H

#include "waf_p.h"
#include "getxssmatchsetrequest.h"

namespace AWS {

namespace WAF {

class GetXssMatchSetRequest;

class QTAWS_EXPORT GetXssMatchSetRequestPrivate : public WAFPrivate {

public:
    GetXssMatchSetRequestPrivate(const WAF::Action action,
                                   GetXssMatchSetRequest * const q);
    GetXssMatchSetRequestPrivate(const GetXssMatchSetRequestPrivate &other,
                                   GetXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetXssMatchSetRequest)

};

} // namespace WAF
} // namespace AWS

#endif