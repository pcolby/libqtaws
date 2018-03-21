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

#ifndef QTAWS_EXPORTBUNDLEREQUEST_P_H
#define QTAWS_EXPORTBUNDLEREQUEST_P_H

#include "mobile_p.h"
#include "exportbundlerequest.h"

namespace AWS {

namespace Mobile {

class ExportBundleRequest;

class QTAWS_EXPORT ExportBundleRequestPrivate : public MobilePrivate {

public:
    ExportBundleRequestPrivate(const Mobile::Action action,
                                   ExportBundleRequest * const q);
    ExportBundleRequestPrivate(const ExportBundleRequestPrivate &other,
                                   ExportBundleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportBundleRequest)

};

} // namespace Mobile
} // namespace AWS

#endif