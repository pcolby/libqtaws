/*
    Copyright 2013-2019 Paul Colby

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

#include "createpartnereventsourcerequest.h"
#include "createpartnereventsourcerequest_p.h"
#include "createpartnereventsourceresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CreatePartnerEventSourceRequest
 * \brief The CreatePartnerEventSourceRequest class provides an interface for CloudWatchEvents CreatePartnerEventSource requests.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon EventBridge helps you to respond to state changes in your AWS resources. When your resources change state, they
 *  automatically send events into an event stream. You can create rules that match selected events in the stream and route
 *  them to targets to take action. You can also use rules to take action on a predetermined schedule. For example, you can
 *  configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  stat> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
 * 
 *  risk> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volum> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide/">Amazon EventBridge User
 *
 * \sa CloudWatchEventsClient::createPartnerEventSource
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePartnerEventSourceRequest::CreatePartnerEventSourceRequest(const CreatePartnerEventSourceRequest &other)
    : CloudWatchEventsRequest(new CreatePartnerEventSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePartnerEventSourceRequest object.
 */
CreatePartnerEventSourceRequest::CreatePartnerEventSourceRequest()
    : CloudWatchEventsRequest(new CreatePartnerEventSourceRequestPrivate(CloudWatchEventsRequest::CreatePartnerEventSourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePartnerEventSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePartnerEventSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePartnerEventSourceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePartnerEventSourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchEvents::CreatePartnerEventSourceRequestPrivate
 * \brief The CreatePartnerEventSourceRequestPrivate class provides private implementation for CreatePartnerEventSourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CreatePartnerEventSourceRequestPrivate object for CloudWatchEvents \a action,
 * with public implementation \a q.
 */
CreatePartnerEventSourceRequestPrivate::CreatePartnerEventSourceRequestPrivate(
    const CloudWatchEventsRequest::Action action, CreatePartnerEventSourceRequest * const q)
    : CloudWatchEventsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePartnerEventSourceRequest
 * class' copy constructor.
 */
CreatePartnerEventSourceRequestPrivate::CreatePartnerEventSourceRequestPrivate(
    const CreatePartnerEventSourceRequestPrivate &other, CreatePartnerEventSourceRequest * const q)
    : CloudWatchEventsRequestPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
