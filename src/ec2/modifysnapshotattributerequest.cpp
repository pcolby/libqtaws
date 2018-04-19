/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifysnapshotattributerequest.h"
#include "modifysnapshotattributerequest_p.h"
#include "modifysnapshotattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifySnapshotAttributeRequest
 * \brief The ModifySnapshotAttributeRequest class provides an interface for EC2 ModifySnapshotAttribute requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::modifySnapshotAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest(const ModifySnapshotAttributeRequest &other)
    : EC2Request(new ModifySnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifySnapshotAttributeRequest object.
 */
ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest()
    : EC2Request(new ModifySnapshotAttributeRequestPrivate(EC2Request::ModifySnapshotAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool ModifySnapshotAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifySnapshotAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifySnapshotAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifySnapshotAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ModifySnapshotAttributeRequestPrivate
 * \brief The ModifySnapshotAttributeRequestPrivate class provides private implementation for ModifySnapshotAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifySnapshotAttributeRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
ModifySnapshotAttributeRequestPrivate::ModifySnapshotAttributeRequestPrivate(
    const EC2Request::Action action, ModifySnapshotAttributeRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifySnapshotAttributeRequest
 * class' copy constructor.
 */
ModifySnapshotAttributeRequestPrivate::ModifySnapshotAttributeRequestPrivate(
    const ModifySnapshotAttributeRequestPrivate &other, ModifySnapshotAttributeRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
