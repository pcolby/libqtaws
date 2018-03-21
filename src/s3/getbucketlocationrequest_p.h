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

#ifndef QTAWS_GETBUCKETLOCATIONREQUEST_P_H
#define QTAWS_GETBUCKETLOCATIONREQUEST_P_H

#include "s3_p.h"
#include "getbucketlocationrequest.h"

namespace AWS {

namespace S3 {

class GetBucketLocationRequest;

class QTAWS_EXPORT GetBucketLocationRequestPrivate : public S3Private {

public:
    GetBucketLocationRequestPrivate(const S3::Action action,
                                   GetBucketLocationRequest * const q);
    GetBucketLocationRequestPrivate(const GetBucketLocationRequestPrivate &other,
                                   GetBucketLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketLocationRequest)

};

} // namespace S3
} // namespace AWS

#endif