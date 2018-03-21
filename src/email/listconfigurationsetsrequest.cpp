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

#include "listconfigurationsetsrequest.h"
#include "listconfigurationsetsrequest_p.h"
#include "listconfigurationsetsresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  ListConfigurationSetsRequest
 *
 * @brief  Implements SES ListConfigurationSets requests.
 *
 * @see    SESClient::listConfigurationSets
 */

/**
 * @brief  Constructs a new ListConfigurationSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConfigurationSetsResponse::ListConfigurationSetsResponse(

/**
 * @brief  Constructs a new ListConfigurationSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest(const ListConfigurationSetsRequest &other)
    : SESRequest(new ListConfigurationSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListConfigurationSetsRequest object.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest()
    : SESRequest(new ListConfigurationSetsRequestPrivate(SESRequest::ListConfigurationSetsAction, this))
{

}

bool ListConfigurationSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListConfigurationSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListConfigurationSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * ListConfigurationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListConfigurationSetsRequestPrivate
 *
 * @brief  Private implementation for ListConfigurationSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationSetsRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public ListConfigurationSetsRequest instance.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const SESRequest::Action action, ListConfigurationSetsRequest * const q)
    : ListConfigurationSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListConfigurationSetsRequest instance.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const ListConfigurationSetsRequestPrivate &other, ListConfigurationSetsRequest * const q)
    : ListConfigurationSetsPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
