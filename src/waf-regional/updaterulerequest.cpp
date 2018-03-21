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

#include "updaterulerequest.h"
#include "updaterulerequest_p.h"
#include "updateruleresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateRuleRequest
 *
 * @brief  Implements WAFRegional UpdateRule requests.
 *
 * @see    WAFRegionalClient::updateRule
 */

/**
 * @brief  Constructs a new UpdateRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRuleResponse::UpdateRuleResponse(

/**
 * @brief  Constructs a new UpdateRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRuleRequest::UpdateRuleRequest(const UpdateRuleRequest &other)
    : WAFRegionalRequest(new UpdateRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRuleRequest object.
 */
UpdateRuleRequest::UpdateRuleRequest()
    : WAFRegionalRequest(new UpdateRuleRequestPrivate(WAFRegionalRequest::UpdateRuleAction, this))
{

}

bool UpdateRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * UpdateRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRuleRequestPrivate
 *
 * @brief  Private implementation for UpdateRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuleRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateRuleRequest instance.
 */
UpdateRuleRequestPrivate::UpdateRuleRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateRuleRequest * const q)
    : UpdateRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRuleRequest instance.
 */
UpdateRuleRequestPrivate::UpdateRuleRequestPrivate(
    const UpdateRuleRequestPrivate &other, UpdateRuleRequest * const q)
    : UpdateRulePrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS