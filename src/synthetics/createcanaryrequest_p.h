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

#ifndef QTAWS_CREATECANARYREQUEST_P_H
#define QTAWS_CREATECANARYREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "createcanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class CreateCanaryRequest;

class CreateCanaryRequestPrivate : public SyntheticsRequestPrivate {

public:
    CreateCanaryRequestPrivate(const SyntheticsRequest::Action action,
                                   CreateCanaryRequest * const q);
    CreateCanaryRequestPrivate(const CreateCanaryRequestPrivate &other,
                                   CreateCanaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
