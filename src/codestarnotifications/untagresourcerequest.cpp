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

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "codestarnotificationsrequest_p.h"

namespace QtAws {
namespace CodeStarNotifications {

/*!
 * \class QtAws::CodeStarNotifications::UntagResourceRequest
 * \brief The UntagResourceRequest class provides an interface for CodeStarNotifications UntagResource requests.
 *
 * \inmodule QtAwsCodeStarNotifications
 *
 *  This AWS CodeStar Notifications API Reference provides descriptions and usage examples of the operations and data types
 *  for the AWS CodeStar Notifications API. You can use the AWS CodeStar Notifications API to work with the following
 * 
 *  objects>
 * 
 *  Notification rules, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>CreateNotificationRule</a>, which creates a notification rule for a resource in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>DeleteNotificationRule</a>, which deletes a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>DescribeNotificationRule</a>, which provides information about a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListNotificationRules</a>, which lists the notification rules associated with your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UpdateNotificationRule</a>, which changes the name, events, or targets associated with a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Subscribe</a>, which subscribes a target to a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>Unsubscribe</a>, which removes a target from a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Targets, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>DeleteTarget</a>, which removes a notification rule target (SNS topic) from a notification rule.
 * 
 *  </p </li> <li>
 * 
 *  <a>ListTargets</a>, which lists the targets associated with a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Events, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListEventTypes</a>, which lists the event types you can include in a notification rule.
 * 
 *  </p </li> </ul>
 * 
 *  Tags, by calling the following:
 * 
 *  </p <ul> <li>
 * 
 *  <a>ListTagsForResource</a>, which lists the tags already associated with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>TagResource</a>, which associates a tag you provide with a notification rule in your account.
 * 
 *  </p </li> <li>
 * 
 *  <a>UntagResource</a>, which removes a tag from a notification rule in your account.
 * 
 *  </p </li> </ul>
 * 
 *  For information about how to use AWS CodeStar Notifications, see link in the CodeStarNotifications User Guide.
 *
 * \sa CodeStarNotificationsClient::untagResource
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : CodeStarNotificationsRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : CodeStarNotificationsRequest(new UntagResourceRequestPrivate(CodeStarNotificationsRequest::UntagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CodeStarNotifications::UntagResourceRequestPrivate
 * \brief The UntagResourceRequestPrivate class provides private implementation for UntagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * Constructs a UntagResourceRequestPrivate object for CodeStarNotifications \a action,
 * with public implementation \a q.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const CodeStarNotificationsRequest::Action action, UntagResourceRequest * const q)
    : CodeStarNotificationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : CodeStarNotificationsRequestPrivate(other, q)
{

}

} // namespace CodeStarNotifications
} // namespace QtAws
