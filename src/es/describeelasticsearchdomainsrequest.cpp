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

#include "describeelasticsearchdomainsrequest.h"
#include "describeelasticsearchdomainsrequest_p.h"
#include "describeelasticsearchdomainsresponse.h"
#include "elasticsearchservicerequest_p.h"

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  DescribeElasticsearchDomainsRequest
 *
 * @brief  Implements ElasticsearchService DescribeElasticsearchDomains requests.
 *
 * @see    ElasticsearchServiceClient::describeElasticsearchDomains
 */

/**
 * @brief  Constructs a new DescribeElasticsearchDomainsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticsearchDomainsResponse::DescribeElasticsearchDomainsResponse(

/**
 * @brief  Constructs a new DescribeElasticsearchDomainsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest(const DescribeElasticsearchDomainsRequest &other)
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticsearchDomainsRequest object.
 */
DescribeElasticsearchDomainsRequest::DescribeElasticsearchDomainsRequest()
    : ElasticsearchServiceRequest(new DescribeElasticsearchDomainsRequestPrivate(ElasticsearchServiceRequest::DescribeElasticsearchDomainsAction, this))
{

}

bool DescribeElasticsearchDomainsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticsearchDomainsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticsearchDomainsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticsearchServiceClient::send
 */
AwsAbstractResponse * DescribeElasticsearchDomainsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticsearchDomainsRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticsearchDomainsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainsRequestPrivate object.
 *
 * @param  action  ElasticsearchService action being performed.
 * @param  q       Pointer to this object's public DescribeElasticsearchDomainsRequest instance.
 */
DescribeElasticsearchDomainsRequestPrivate::DescribeElasticsearchDomainsRequestPrivate(
    const ElasticsearchServiceRequest::Action action, DescribeElasticsearchDomainsRequest * const q)
    : DescribeElasticsearchDomainsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticsearchDomainsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticsearchDomainsRequest instance.
 */
DescribeElasticsearchDomainsRequestPrivate::DescribeElasticsearchDomainsRequestPrivate(
    const DescribeElasticsearchDomainsRequestPrivate &other, DescribeElasticsearchDomainsRequest * const q)
    : DescribeElasticsearchDomainsPrivate(other, q)
{

}

} // namespace ElasticsearchService
} // namespace AWS
