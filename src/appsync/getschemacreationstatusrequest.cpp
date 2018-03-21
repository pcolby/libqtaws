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

#include "getschemacreationstatusrequest.h"
#include "getschemacreationstatusrequest_p.h"
#include "getschemacreationstatusresponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  GetSchemaCreationStatusRequest
 *
 * @brief  Implements AppSync GetSchemaCreationStatus requests.
 *
 * @see    AppSyncClient::getSchemaCreationStatus
 */

/**
 * @brief  Constructs a new GetSchemaCreationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSchemaCreationStatusResponse::GetSchemaCreationStatusResponse(

/**
 * @brief  Constructs a new GetSchemaCreationStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest(const GetSchemaCreationStatusRequest &other)
    : AppSyncRequest(new GetSchemaCreationStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSchemaCreationStatusRequest object.
 */
GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest()
    : AppSyncRequest(new GetSchemaCreationStatusRequestPrivate(AppSyncRequest::GetSchemaCreationStatusAction, this))
{

}

bool GetSchemaCreationStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSchemaCreationStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSchemaCreationStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * GetSchemaCreationStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaCreationStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSchemaCreationStatusRequestPrivate
 *
 * @brief  Private implementation for GetSchemaCreationStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSchemaCreationStatusRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetSchemaCreationStatusRequest instance.
 */
GetSchemaCreationStatusRequestPrivate::GetSchemaCreationStatusRequestPrivate(
    const AppSyncRequest::Action action, GetSchemaCreationStatusRequest * const q)
    : GetSchemaCreationStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSchemaCreationStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaCreationStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSchemaCreationStatusRequest instance.
 */
GetSchemaCreationStatusRequestPrivate::GetSchemaCreationStatusRequestPrivate(
    const GetSchemaCreationStatusRequestPrivate &other, GetSchemaCreationStatusRequest * const q)
    : GetSchemaCreationStatusPrivate(other, q)
{

}

} // namespace AppSync
} // namespace AWS