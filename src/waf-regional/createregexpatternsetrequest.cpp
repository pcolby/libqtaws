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

#include "createregexpatternsetrequest.h"
#include "createregexpatternsetrequest_p.h"
#include "createregexpatternsetresponse.h"
#include "wafregionalrequest_p.h"

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateRegexPatternSetRequest
 *
 * @brief  Implements WAFRegional CreateRegexPatternSet requests.
 *
 * @see    WAFRegionalClient::createRegexPatternSet
 */

/**
 * @brief  Constructs a new CreateRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRegexPatternSetResponse::CreateRegexPatternSetResponse(

/**
 * @brief  Constructs a new CreateRegexPatternSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRegexPatternSetRequest::CreateRegexPatternSetRequest(const CreateRegexPatternSetRequest &other)
    : WAFRegionalRequest(new CreateRegexPatternSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRegexPatternSetRequest object.
 */
CreateRegexPatternSetRequest::CreateRegexPatternSetRequest()
    : WAFRegionalRequest(new CreateRegexPatternSetRequestPrivate(WAFRegionalRequest::CreateRegexPatternSetAction, this))
{

}

bool CreateRegexPatternSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRegexPatternSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRegexPatternSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
AwsAbstractResponse * CreateRegexPatternSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateRegexPatternSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRegexPatternSetRequestPrivate
 *
 * @brief  Private implementation for CreateRegexPatternSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRegexPatternSetRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public CreateRegexPatternSetRequest instance.
 */
CreateRegexPatternSetRequestPrivate::CreateRegexPatternSetRequestPrivate(
    const WAFRegionalRequest::Action action, CreateRegexPatternSetRequest * const q)
    : CreateRegexPatternSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRegexPatternSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRegexPatternSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRegexPatternSetRequest instance.
 */
CreateRegexPatternSetRequestPrivate::CreateRegexPatternSetRequestPrivate(
    const CreateRegexPatternSetRequestPrivate &other, CreateRegexPatternSetRequest * const q)
    : CreateRegexPatternSetPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace AWS