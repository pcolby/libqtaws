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

#include "createnotificationrequest.h"
#include "createnotificationrequest_p.h"
#include "createnotificationresponse.h"
#include "budgetsrequest_p.h"

namespace AWS {
namespace Budgets {

/**
 * @class  CreateNotificationRequest
 *
 * @brief  Implements Budgets CreateNotification requests.
 *
 * @see    BudgetsClient::createNotification
 */

/**
 * @brief  Constructs a new CreateNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNotificationResponse::CreateNotificationResponse(

/**
 * @brief  Constructs a new CreateNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNotificationRequest::CreateNotificationRequest(const CreateNotificationRequest &other)
    : BudgetsRequest(new CreateNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateNotificationRequest object.
 */
CreateNotificationRequest::CreateNotificationRequest()
    : BudgetsRequest(new CreateNotificationRequestPrivate(BudgetsRequest::CreateNotificationAction, this))
{

}

bool CreateNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BudgetsClient::send
 */
AwsAbstractResponse * CreateNotificationRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateNotificationRequestPrivate
 *
 * @brief  Private implementation for CreateNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotificationRequestPrivate object.
 *
 * @param  action  Budgets action being performed.
 * @param  q       Pointer to this object's public CreateNotificationRequest instance.
 */
CreateNotificationRequestPrivate::CreateNotificationRequestPrivate(
    const BudgetsRequest::Action action, CreateNotificationRequest * const q)
    : CreateNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNotificationRequest instance.
 */
CreateNotificationRequestPrivate::CreateNotificationRequestPrivate(
    const CreateNotificationRequestPrivate &other, CreateNotificationRequest * const q)
    : CreateNotificationPrivate(other, q)
{

}

} // namespace Budgets
} // namespace AWS
