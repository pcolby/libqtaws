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

#include "deleteapplicationoutputrequest.h"
#include "deleteapplicationoutputrequest_p.h"
#include "deleteapplicationoutputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputRequest
 * \brief The DeleteApplicationOutputRequest class provides an interface for KinesisAnalytics DeleteApplicationOutput requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplicationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest(const DeleteApplicationOutputRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationOutputRequest object.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationOutputRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputRequestPrivate
 * \brief The DeleteApplicationOutputRequestPrivate class provides private implementation for DeleteApplicationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 *
 * Constructs a DeleteApplicationOutputRequestPrivate object for KinesisAnalytics \a action with,
 * public implementation \a q.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationOutputRequest
 * class' copy constructor.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const DeleteApplicationOutputRequestPrivate &other, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
