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

#include "authorizesecuritygroupegressrequest.h"
#include "authorizesecuritygroupegressrequest_p.h"
#include "authorizesecuritygroupegressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AuthorizeSecurityGroupEgressRequest
 * \brief The AuthorizeSecurityGroupEgressRequest class provides an interface for EC2 AuthorizeSecurityGroupEgress requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::authorizeSecurityGroupEgress
 */

/*!
 * Constructs a copy of \a other.
 */
AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest(const AuthorizeSecurityGroupEgressRequest &other)
    : EC2Request(new AuthorizeSecurityGroupEgressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AuthorizeSecurityGroupEgressRequest object.
 */
AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest()
    : EC2Request(new AuthorizeSecurityGroupEgressRequestPrivate(EC2Request::AuthorizeSecurityGroupEgressAction, this))
{

}

/*!
 * \reimp
 */
bool AuthorizeSecurityGroupEgressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AuthorizeSecurityGroupEgressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeSecurityGroupEgressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeSecurityGroupEgressResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::AuthorizeSecurityGroupEgressRequestPrivate
 * \brief The AuthorizeSecurityGroupEgressRequestPrivate class provides private implementation for AuthorizeSecurityGroupEgressRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a AuthorizeSecurityGroupEgressRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
AuthorizeSecurityGroupEgressRequestPrivate::AuthorizeSecurityGroupEgressRequestPrivate(
    const EC2Request::Action action, AuthorizeSecurityGroupEgressRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeSecurityGroupEgressRequest
 * class' copy constructor.
 */
AuthorizeSecurityGroupEgressRequestPrivate::AuthorizeSecurityGroupEgressRequestPrivate(
    const AuthorizeSecurityGroupEgressRequestPrivate &other, AuthorizeSecurityGroupEgressRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
