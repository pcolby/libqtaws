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

#ifndef QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_P_H
#define QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLREQUEST_P_H

#include "sagemaker_p.h"
#include "createpresignednotebookinstanceurlrequest.h"

namespace AWS {

namespace SageMaker {

class CreatePresignedNotebookInstanceUrlRequest;

class QTAWS_EXPORT CreatePresignedNotebookInstanceUrlRequestPrivate : public SageMakerPrivate {

public:
    CreatePresignedNotebookInstanceUrlRequestPrivate(const SageMaker::Action action,
                                   CreatePresignedNotebookInstanceUrlRequest * const q);
    CreatePresignedNotebookInstanceUrlRequestPrivate(const CreatePresignedNotebookInstanceUrlRequestPrivate &other,
                                   CreatePresignedNotebookInstanceUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePresignedNotebookInstanceUrlRequest)

};

} // namespace SageMaker
} // namespace AWS

#endif