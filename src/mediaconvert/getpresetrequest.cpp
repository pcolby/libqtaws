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

#include "getpresetrequest.h"
#include "getpresetrequest_p.h"
#include "getpresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  GetPresetRequest
 *
 * @brief  Implements MediaConvert GetPreset requests.
 *
 * @see    MediaConvertClient::getPreset
 */

/**
 * @brief  Constructs a new GetPresetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPresetResponse::GetPresetResponse(

/**
 * @brief  Constructs a new GetPresetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPresetRequest::GetPresetRequest(const GetPresetRequest &other)
    : MediaConvertRequest(new GetPresetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPresetRequest object.
 */
GetPresetRequest::GetPresetRequest()
    : MediaConvertRequest(new GetPresetRequestPrivate(MediaConvertRequest::GetPresetAction, this))
{

}

bool GetPresetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPresetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPresetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * GetPresetRequest::response(QNetworkReply * const reply) const
{
    return new GetPresetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPresetRequestPrivate
 *
 * @brief  Private implementation for GetPresetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPresetRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public GetPresetRequest instance.
 */
GetPresetRequestPrivate::GetPresetRequestPrivate(
    const MediaConvertRequest::Action action, GetPresetRequest * const q)
    : GetPresetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPresetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPresetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPresetRequest instance.
 */
GetPresetRequestPrivate::GetPresetRequestPrivate(
    const GetPresetRequestPrivate &other, GetPresetRequest * const q)
    : GetPresetPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS