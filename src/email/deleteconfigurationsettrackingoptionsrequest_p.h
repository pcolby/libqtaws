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

#ifndef QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H

#include "ses_p.h"
#include "deleteconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace SES {

class DeleteConfigurationSetTrackingOptionsRequest;

class QTAWS_EXPORT DeleteConfigurationSetTrackingOptionsRequestPrivate : public SESPrivate {

public:
    DeleteConfigurationSetTrackingOptionsRequestPrivate(const SES::Action action,
                                   DeleteConfigurationSetTrackingOptionsRequest * const q);
    DeleteConfigurationSetTrackingOptionsRequestPrivate(const DeleteConfigurationSetTrackingOptionsRequestPrivate &other,
                                   DeleteConfigurationSetTrackingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetTrackingOptionsRequest)

};

} // namespace SES
} // namespace QtAws

#endif
