/*
    Copyright 2013-2020 Paul Colby

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

#include "sendtasksuccessrequest.h"
#include "sendtasksuccessrequest_p.h"
#include "sendtasksuccessresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SendTaskSuccessRequest
 * \brief The SendTaskSuccessRequest class provides an interface for SFN SendTaskSuccess requests.
 *
 * \inmodule QtAwsSFN
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SfnClient::sendTaskSuccess
 */

/*!
 * Constructs a copy of \a other.
 */
SendTaskSuccessRequest::SendTaskSuccessRequest(const SendTaskSuccessRequest &other)
    : SfnRequest(new SendTaskSuccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendTaskSuccessRequest object.
 */
SendTaskSuccessRequest::SendTaskSuccessRequest()
    : SfnRequest(new SendTaskSuccessRequestPrivate(SfnRequest::SendTaskSuccessAction, this))
{

}

/*!
 * \reimp
 */
bool SendTaskSuccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendTaskSuccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendTaskSuccessRequest::response(QNetworkReply * const reply) const
{
    return new SendTaskSuccessResponse(*this, reply);
}

/*!
 * \class QtAws::SFN::SendTaskSuccessRequestPrivate
 * \brief The SendTaskSuccessRequestPrivate class provides private implementation for SendTaskSuccessRequest.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SendTaskSuccessRequestPrivate object for Sfn \a action,
 * with public implementation \a q.
 */
SendTaskSuccessRequestPrivate::SendTaskSuccessRequestPrivate(
    const SfnRequest::Action action, SendTaskSuccessRequest * const q)
    : SfnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendTaskSuccessRequest
 * class' copy constructor.
 */
SendTaskSuccessRequestPrivate::SendTaskSuccessRequestPrivate(
    const SendTaskSuccessRequestPrivate &other, SendTaskSuccessRequest * const q)
    : SfnRequestPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
