/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_DELETESCALINGPOLICYRESPONSE_P_H
#define QTAWS_DELETESCALINGPOLICYRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteScalingPolicyResponse;

class QTAWS_EXPORT DeleteScalingPolicyResponsePrivate : public GameLiftResponsePrivate {

public:

    DeleteScalingPolicyResponsePrivate(DeleteScalingPolicyResponse * const q);

    void parseDeleteScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPolicyResponse)
    Q_DISABLE_COPY(DeleteScalingPolicyResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
