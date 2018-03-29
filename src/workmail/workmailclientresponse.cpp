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

#include "workmailclientresponse.h"
#include "workmailclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  WorkMailClientResponse
 *
 * @brief  Handles WorkMail WorkMailClient responses.
 *
 * @see    WorkMailClient::workMailClient
 */

/**
 * @brief  Constructs a new WorkMailClientResponse object.
 *
 * @param  parent   This object's parent.
 */
WorkMailClientResponse::WorkMailClientResponse(QObject * const parent)
    : AwsAbstractResponse(new WorkMailClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  WorkMailClientResponsePrivate
 *
 * @brief  Private implementation for WorkMailClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkMailClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public WorkMailClientResponse instance.
 */
WorkMailClientResponsePrivate::WorkMailClientResponsePrivate(
    WorkMailClientQueueResponse * const q) : WorkMailClientPrivate(q)
{

}

} // namespace WorkMail
} // namespace AWS
