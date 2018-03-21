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

#include "responddecisiontaskcompletedrequest.h"
#include "responddecisiontaskcompletedrequest_p.h"
#include "responddecisiontaskcompletedresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RespondDecisionTaskCompletedRequest
 *
 * @brief  Implements SWF RespondDecisionTaskCompleted requests.
 *
 * @see    SWFClient::respondDecisionTaskCompleted
 */

/**
 * @brief  Constructs a new RespondDecisionTaskCompletedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondDecisionTaskCompletedResponse::RespondDecisionTaskCompletedResponse(

/**
 * @brief  Constructs a new RespondDecisionTaskCompletedRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RespondDecisionTaskCompletedRequest::RespondDecisionTaskCompletedRequest(const RespondDecisionTaskCompletedRequest &other)
    : SWFRequest(new RespondDecisionTaskCompletedRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RespondDecisionTaskCompletedRequest object.
 */
RespondDecisionTaskCompletedRequest::RespondDecisionTaskCompletedRequest()
    : SWFRequest(new RespondDecisionTaskCompletedRequestPrivate(SWFRequest::RespondDecisionTaskCompletedAction, this))
{

}

bool RespondDecisionTaskCompletedRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RespondDecisionTaskCompletedResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RespondDecisionTaskCompletedResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RespondDecisionTaskCompletedRequest::response(QNetworkReply * const reply) const
{
    return new RespondDecisionTaskCompletedResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RespondDecisionTaskCompletedRequestPrivate
 *
 * @brief  Private implementation for RespondDecisionTaskCompletedRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondDecisionTaskCompletedRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RespondDecisionTaskCompletedRequest instance.
 */
RespondDecisionTaskCompletedRequestPrivate::RespondDecisionTaskCompletedRequestPrivate(
    const SWFRequest::Action action, RespondDecisionTaskCompletedRequest * const q)
    : RespondDecisionTaskCompletedPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RespondDecisionTaskCompletedRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RespondDecisionTaskCompletedRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RespondDecisionTaskCompletedRequest instance.
 */
RespondDecisionTaskCompletedRequestPrivate::RespondDecisionTaskCompletedRequestPrivate(
    const RespondDecisionTaskCompletedRequestPrivate &other, RespondDecisionTaskCompletedRequest * const q)
    : RespondDecisionTaskCompletedPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS