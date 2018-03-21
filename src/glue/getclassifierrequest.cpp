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

#include "getclassifierrequest.h"
#include "getclassifierrequest_p.h"
#include "getclassifierresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetClassifierRequest
 *
 * @brief  Implements Glue GetClassifier requests.
 *
 * @see    GlueClient::getClassifier
 */

/**
 * @brief  Constructs a new GetClassifierResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClassifierResponse::GetClassifierResponse(

/**
 * @brief  Constructs a new GetClassifierRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetClassifierRequest::GetClassifierRequest(const GetClassifierRequest &other)
    : GlueRequest(new GetClassifierRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetClassifierRequest object.
 */
GetClassifierRequest::GetClassifierRequest()
    : GlueRequest(new GetClassifierRequestPrivate(GlueRequest::GetClassifierAction, this))
{

}

bool GetClassifierRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetClassifierResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetClassifierResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetClassifierRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifierResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetClassifierRequestPrivate
 *
 * @brief  Private implementation for GetClassifierRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClassifierRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetClassifierRequest instance.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GlueRequest::Action action, GetClassifierRequest * const q)
    : GetClassifierPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetClassifierRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetClassifierRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetClassifierRequest instance.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GetClassifierRequestPrivate &other, GetClassifierRequest * const q)
    : GetClassifierPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS