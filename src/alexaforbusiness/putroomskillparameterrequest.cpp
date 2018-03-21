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

#include "putroomskillparameterrequest.h"
#include "putroomskillparameterrequest_p.h"
#include "putroomskillparameterresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  PutRoomSkillParameterRequest
 *
 * @brief  Implements AlexaForBusiness PutRoomSkillParameter requests.
 *
 * @see    AlexaForBusinessClient::putRoomSkillParameter
 */

/**
 * @brief  Constructs a new PutRoomSkillParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRoomSkillParameterResponse::PutRoomSkillParameterResponse(

/**
 * @brief  Constructs a new PutRoomSkillParameterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRoomSkillParameterRequest::PutRoomSkillParameterRequest(const PutRoomSkillParameterRequest &other)
    : AlexaForBusinessRequest(new PutRoomSkillParameterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRoomSkillParameterRequest object.
 */
PutRoomSkillParameterRequest::PutRoomSkillParameterRequest()
    : AlexaForBusinessRequest(new PutRoomSkillParameterRequestPrivate(AlexaForBusinessRequest::PutRoomSkillParameterAction, this))
{

}

bool PutRoomSkillParameterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRoomSkillParameterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRoomSkillParameterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * PutRoomSkillParameterRequest::response(QNetworkReply * const reply) const
{
    return new PutRoomSkillParameterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRoomSkillParameterRequestPrivate
 *
 * @brief  Private implementation for PutRoomSkillParameterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRoomSkillParameterRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public PutRoomSkillParameterRequest instance.
 */
PutRoomSkillParameterRequestPrivate::PutRoomSkillParameterRequestPrivate(
    const AlexaForBusinessRequest::Action action, PutRoomSkillParameterRequest * const q)
    : PutRoomSkillParameterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRoomSkillParameterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRoomSkillParameterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRoomSkillParameterRequest instance.
 */
PutRoomSkillParameterRequestPrivate::PutRoomSkillParameterRequestPrivate(
    const PutRoomSkillParameterRequestPrivate &other, PutRoomSkillParameterRequest * const q)
    : PutRoomSkillParameterPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS