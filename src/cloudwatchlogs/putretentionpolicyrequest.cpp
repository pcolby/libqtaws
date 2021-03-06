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

#include "putretentionpolicyrequest.h"
#include "putretentionpolicyrequest_p.h"
#include "putretentionpolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::PutRetentionPolicyRequest
 * \brief The PutRetentionPolicyRequest class provides an interface for CloudWatchLogs PutRetentionPolicy requests.
 *
 * \inmodule QtAwsCloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from EC2 instances, AWS CloudTrail, and
 *  other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch console,
 *  CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
 * 
 *  SDK>
 * 
 *  You can use CloudWatch Logs
 * 
 *  to> <ul> <li>
 * 
 *  <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs to monitor applications and systems
 *  using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs and send
 *  you a notification whenever the rate of errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
 *  for monitoring so no code changes are required. For example, you can monitor application logs for specific literal terms
 *  (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position in log
 *  data (such as "404" status codes in an Apache access log). When the term you are searching for is found, CloudWatch Logs
 *  reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail. You can use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::putRetentionPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutRetentionPolicyRequest::PutRetentionPolicyRequest(const PutRetentionPolicyRequest &other)
    : CloudWatchLogsRequest(new PutRetentionPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRetentionPolicyRequest object.
 */
PutRetentionPolicyRequest::PutRetentionPolicyRequest()
    : CloudWatchLogsRequest(new PutRetentionPolicyRequestPrivate(CloudWatchLogsRequest::PutRetentionPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutRetentionPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRetentionPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRetentionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutRetentionPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchLogs::PutRetentionPolicyRequestPrivate
 * \brief The PutRetentionPolicyRequestPrivate class provides private implementation for PutRetentionPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a PutRetentionPolicyRequestPrivate object for CloudWatchLogs \a action,
 * with public implementation \a q.
 */
PutRetentionPolicyRequestPrivate::PutRetentionPolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutRetentionPolicyRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRetentionPolicyRequest
 * class' copy constructor.
 */
PutRetentionPolicyRequestPrivate::PutRetentionPolicyRequestPrivate(
    const PutRetentionPolicyRequestPrivate &other, PutRetentionPolicyRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
