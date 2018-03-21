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

#include "deleteapplicationinputprocessingconfigurationrequest.h"
#include "deleteapplicationinputprocessingconfigurationrequest_p.h"
#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationInputProcessingConfigurationRequest
 *
 * @brief  Implements KinesisAnalytics DeleteApplicationInputProcessingConfiguration requests.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationInputProcessingConfiguration
 */

/**
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationInputProcessingConfigurationResponse::DeleteApplicationInputProcessingConfigurationResponse(

/**
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest(const DeleteApplicationInputProcessingConfigurationRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationInputProcessingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationRequest object.
 */
DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationInputProcessingConfigurationRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationInputProcessingConfigurationAction, this))
{

}

bool DeleteApplicationInputProcessingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApplicationInputProcessingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationInputProcessingConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
AwsAbstractResponse * DeleteApplicationInputProcessingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationInputProcessingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApplicationInputProcessingConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationInputProcessingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationInputProcessingConfigurationRequest instance.
 */
DeleteApplicationInputProcessingConfigurationRequestPrivate::DeleteApplicationInputProcessingConfigurationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationInputProcessingConfigurationRequest * const q)
    : DeleteApplicationInputProcessingConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationInputProcessingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationInputProcessingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationInputProcessingConfigurationRequest instance.
 */
DeleteApplicationInputProcessingConfigurationRequestPrivate::DeleteApplicationInputProcessingConfigurationRequestPrivate(
    const DeleteApplicationInputProcessingConfigurationRequestPrivate &other, DeleteApplicationInputProcessingConfigurationRequest * const q)
    : DeleteApplicationInputProcessingConfigurationPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace AWS
