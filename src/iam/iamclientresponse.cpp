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

#include "iamclientresponse.h"
#include "iamclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  IamClientResponse
 *
 * @brief  Handles IAM IamClient responses.
 *
 * @see    IAMClient::iamClient
 */

/**
 * @brief  Constructs a new IamClientResponse object.
 *
 * @param  parent   This object's parent.
 */
IamClientResponse::IamClientResponse(QObject * const parent)
    : AwsAbstractResponse(new IamClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  IamClientResponsePrivate
 *
 * @brief  Private implementation for IamClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IamClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IamClientResponse instance.
 */
IamClientResponsePrivate::IamClientResponsePrivate(
    IamClientQueueResponse * const q) : IamClientPrivate(q)
{

}

} // namespace IAM
} // namespace QtAws
