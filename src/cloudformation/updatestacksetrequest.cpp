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

#include "updatestacksetrequest.h"
#include "updatestacksetrequest_p.h"
#include "updatestacksetresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  UpdateStackSetRequest
 *
 * @brief  Implements CloudFormation UpdateStackSet requests.
 *
 * @see    CloudFormationClient::updateStackSet
 */

/**
 * @brief  Constructs a new UpdateStackSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStackSetResponse::UpdateStackSetResponse(

/**
 * @brief  Constructs a new UpdateStackSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStackSetRequest::UpdateStackSetRequest(const UpdateStackSetRequest &other)
    : CloudFormationRequest(new UpdateStackSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStackSetRequest object.
 */
UpdateStackSetRequest::UpdateStackSetRequest()
    : CloudFormationRequest(new UpdateStackSetRequestPrivate(CloudFormationRequest::UpdateStackSetAction, this))
{

}

bool UpdateStackSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStackSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStackSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * UpdateStackSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStackSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStackSetRequestPrivate
 *
 * @brief  Private implementation for UpdateStackSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public UpdateStackSetRequest instance.
 */
UpdateStackSetRequestPrivate::UpdateStackSetRequestPrivate(
    const CloudFormationRequest::Action action, UpdateStackSetRequest * const q)
    : UpdateStackSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStackSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStackSetRequest instance.
 */
UpdateStackSetRequestPrivate::UpdateStackSetRequestPrivate(
    const UpdateStackSetRequestPrivate &other, UpdateStackSetRequest * const q)
    : UpdateStackSetPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS