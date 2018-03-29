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

#ifndef QTAWS_DELETECONFIGURATIONTEMPLATEREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONTEMPLATEREQUEST_P_H

#include "elasticbeanstalk_p.h"
#include "deleteconfigurationtemplaterequest.h"

namespace AWS {

namespace ElasticBeanstalk {

class DeleteConfigurationTemplateRequest;

class QTAWS_EXPORT DeleteConfigurationTemplateRequestPrivate : public ElasticBeanstalkPrivate {

public:
    DeleteConfigurationTemplateRequestPrivate(const ElasticBeanstalk::Action action,
                                   DeleteConfigurationTemplateRequest * const q);
    DeleteConfigurationTemplateRequestPrivate(const DeleteConfigurationTemplateRequestPrivate &other,
                                   DeleteConfigurationTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationTemplateRequest)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif
