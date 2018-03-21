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

#include "testrolerequest.h"
#include "testrolerequest_p.h"
#include "testroleresponse.h"
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  TestRoleRequest
 *
 * @brief  Implements ElasticTranscoder TestRole requests.
 *
 * @see    ElasticTranscoderClient::testRole
 */

/**
 * @brief  Constructs a new TestRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestRoleResponse::TestRoleResponse(

/**
 * @brief  Constructs a new TestRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestRoleRequest::TestRoleRequest(const TestRoleRequest &other)
    : ElasticTranscoderRequest(new TestRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestRoleRequest object.
 */
TestRoleRequest::TestRoleRequest()
    : ElasticTranscoderRequest(new TestRoleRequestPrivate(ElasticTranscoderRequest::TestRoleAction, this))
{

}

bool TestRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * TestRoleRequest::response(QNetworkReply * const reply) const
{
    return new TestRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestRoleRequestPrivate
 *
 * @brief  Private implementation for TestRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestRoleRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public TestRoleRequest instance.
 */
TestRoleRequestPrivate::TestRoleRequestPrivate(
    const ElasticTranscoderRequest::Action action, TestRoleRequest * const q)
    : TestRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestRoleRequest instance.
 */
TestRoleRequestPrivate::TestRoleRequestPrivate(
    const TestRoleRequestPrivate &other, TestRoleRequest * const q)
    : TestRolePrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace AWS