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

#include "copyimagerequest.h"
#include "copyimagerequest_p.h"
#include "copyimageresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  CopyImageRequest
 *
 * @brief  Implements AppStream CopyImage requests.
 *
 * @see    AppStreamClient::copyImage
 */

/**
 * @brief  Constructs a new CopyImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyImageRequest::CopyImageRequest(const CopyImageRequest &other)
    : AppStreamRequest(new CopyImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyImageRequest object.
 */
CopyImageRequest::CopyImageRequest()
    : AppStreamRequest(new CopyImageRequestPrivate(AppStreamRequest::CopyImageAction, this))
{

}

bool CopyImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * CopyImageRequest::response(QNetworkReply * const reply) const
{
    return new CopyImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyImageRequestPrivate
 *
 * @brief  Private implementation for CopyImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyImageRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public CopyImageRequest instance.
 */
CopyImageRequestPrivate::CopyImageRequestPrivate(
    const AppStreamRequest::Action action, CopyImageRequest * const q)
    : CopyImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyImageRequest instance.
 */
CopyImageRequestPrivate::CopyImageRequestPrivate(
    const CopyImageRequestPrivate &other, CopyImageRequest * const q)
    : CopyImagePrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
