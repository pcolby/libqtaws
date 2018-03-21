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

#ifndef QTAWS_TERMINATEWORKFLOWEXECUTIONREQUEST_P_H
#define QTAWS_TERMINATEWORKFLOWEXECUTIONREQUEST_P_H

#include "swf_p.h"
#include "terminateworkflowexecutionrequest.h"

namespace AWS {

namespace SWF {

class TerminateWorkflowExecutionRequest;

class QTAWS_EXPORT TerminateWorkflowExecutionRequestPrivate : public SWFPrivate {

public:
    TerminateWorkflowExecutionRequestPrivate(const SWF::Action action,
                                   TerminateWorkflowExecutionRequest * const q);
    TerminateWorkflowExecutionRequestPrivate(const TerminateWorkflowExecutionRequestPrivate &other,
                                   TerminateWorkflowExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateWorkflowExecutionRequest)

};

} // namespace SWF
} // namespace AWS

#endif