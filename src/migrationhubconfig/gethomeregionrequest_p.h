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

#ifndef QTAWS_GETHOMEREGIONREQUEST_P_H
#define QTAWS_GETHOMEREGIONREQUEST_P_H

#include "migrationhubconfigrequest_p.h"
#include "gethomeregionrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class GetHomeRegionRequest;

class GetHomeRegionRequestPrivate : public MigrationHubConfigRequestPrivate {

public:
    GetHomeRegionRequestPrivate(const MigrationHubConfigRequest::Action action,
                                   GetHomeRegionRequest * const q);
    GetHomeRegionRequestPrivate(const GetHomeRegionRequestPrivate &other,
                                   GetHomeRegionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetHomeRegionRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
