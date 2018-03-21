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

#include "listreceiptrulesetsrequest.h"
#include "listreceiptrulesetsrequest_p.h"
#include "listreceiptrulesetsresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  ListReceiptRuleSetsRequest
 *
 * @brief  Implements SES ListReceiptRuleSets requests.
 *
 * @see    SESClient::listReceiptRuleSets
 */

/**
 * @brief  Constructs a new ListReceiptRuleSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListReceiptRuleSetsResponse::ListReceiptRuleSetsResponse(

/**
 * @brief  Constructs a new ListReceiptRuleSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListReceiptRuleSetsRequest::ListReceiptRuleSetsRequest(const ListReceiptRuleSetsRequest &other)
    : SESRequest(new ListReceiptRuleSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListReceiptRuleSetsRequest object.
 */
ListReceiptRuleSetsRequest::ListReceiptRuleSetsRequest()
    : SESRequest(new ListReceiptRuleSetsRequestPrivate(SESRequest::ListReceiptRuleSetsAction, this))
{

}

bool ListReceiptRuleSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListReceiptRuleSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListReceiptRuleSetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * ListReceiptRuleSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListReceiptRuleSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListReceiptRuleSetsRequestPrivate
 *
 * @brief  Private implementation for ListReceiptRuleSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReceiptRuleSetsRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public ListReceiptRuleSetsRequest instance.
 */
ListReceiptRuleSetsRequestPrivate::ListReceiptRuleSetsRequestPrivate(
    const SESRequest::Action action, ListReceiptRuleSetsRequest * const q)
    : ListReceiptRuleSetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListReceiptRuleSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListReceiptRuleSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListReceiptRuleSetsRequest instance.
 */
ListReceiptRuleSetsRequestPrivate::ListReceiptRuleSetsRequestPrivate(
    const ListReceiptRuleSetsRequestPrivate &other, ListReceiptRuleSetsRequest * const q)
    : ListReceiptRuleSetsPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
