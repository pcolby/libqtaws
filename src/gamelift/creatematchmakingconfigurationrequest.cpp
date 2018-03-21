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

#include "creatematchmakingconfigurationrequest.h"
#include "creatematchmakingconfigurationrequest_p.h"
#include "creatematchmakingconfigurationresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  CreateMatchmakingConfigurationRequest
 *
 * @brief  Implements GameLift CreateMatchmakingConfiguration requests.
 *
 * @see    GameLiftClient::createMatchmakingConfiguration
 */

/**
 * @brief  Constructs a new CreateMatchmakingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMatchmakingConfigurationResponse::CreateMatchmakingConfigurationResponse(

/**
 * @brief  Constructs a new CreateMatchmakingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMatchmakingConfigurationRequest::CreateMatchmakingConfigurationRequest(const CreateMatchmakingConfigurationRequest &other)
    : GameLiftRequest(new CreateMatchmakingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMatchmakingConfigurationRequest object.
 */
CreateMatchmakingConfigurationRequest::CreateMatchmakingConfigurationRequest()
    : GameLiftRequest(new CreateMatchmakingConfigurationRequestPrivate(GameLiftRequest::CreateMatchmakingConfigurationAction, this))
{

}

bool CreateMatchmakingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMatchmakingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMatchmakingConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreateMatchmakingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateMatchmakingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMatchmakingConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateMatchmakingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMatchmakingConfigurationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateMatchmakingConfigurationRequest instance.
 */
CreateMatchmakingConfigurationRequestPrivate::CreateMatchmakingConfigurationRequestPrivate(
    const GameLiftRequest::Action action, CreateMatchmakingConfigurationRequest * const q)
    : CreateMatchmakingConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMatchmakingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMatchmakingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMatchmakingConfigurationRequest instance.
 */
CreateMatchmakingConfigurationRequestPrivate::CreateMatchmakingConfigurationRequestPrivate(
    const CreateMatchmakingConfigurationRequestPrivate &other, CreateMatchmakingConfigurationRequest * const q)
    : CreateMatchmakingConfigurationPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
