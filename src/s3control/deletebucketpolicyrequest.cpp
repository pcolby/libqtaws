/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebucketpolicyrequest.h"
#include "deletebucketpolicyrequest_p.h"
#include "deletebucketpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketPolicyRequest
 * \brief The DeleteBucketPolicyRequest class provides an interface for S3Control DeleteBucketPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest(const DeleteBucketPolicyRequest &other)
    : S3ControlRequest(new DeleteBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketPolicyRequest object.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest()
    : S3ControlRequest(new DeleteBucketPolicyRequestPrivate(S3ControlRequest::DeleteBucketPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteBucketPolicyRequestPrivate
 * \brief The DeleteBucketPolicyRequestPrivate class provides private implementation for DeleteBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const S3ControlRequest::Action action, DeleteBucketPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketPolicyRequest
 * class' copy constructor.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const DeleteBucketPolicyRequestPrivate &other, DeleteBucketPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
