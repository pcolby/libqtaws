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

#include "batchupdatephonenumberrequest.h"
#include "batchupdatephonenumberrequest_p.h"
#include "batchupdatephonenumberresponse.h"
#include "chimerequest_p.h"

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::BatchUpdatePhoneNumberRequest
 * \brief The BatchUpdatePhoneNumberRequest class provides an interface for Chime BatchUpdatePhoneNumber requests.
 *
 * \inmodule QtAwsChime
 *
 *  The Amazon Chime API (application programming interface) is designed for administrators to use to perform key tasks,
 *  such as creating and managing Amazon Chime accounts and users. This guide provides detailed information about the Amazon
 *  Chime API, including operations, types, inputs and outputs, and error
 * 
 *  codes>
 * 
 *  You can use an AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to make API calls. We recommend using
 *  an AWS SDK or the AWS CLI. Each API operation includes links to information about using it with a language-specific AWS
 *  SDK or the AWS
 * 
 *  CLI> <dl> <dt>Using an AWS SDK</dt> <dd>
 * 
 *  You don't need to write code to calculate a signature for request authentication. The SDK clients authenticate your
 *  requests by using access keys that you provide. For more information about AWS SDKs, see the <a
 *  href="http://aws.amazon.com/developer/">AWS Developer
 * 
 *  Center</a>> </dd> <dt>Using the AWS CLI</dt> <dd>
 * 
 *  Use your access keys with the AWS CLI to make API calls. For information about setting up the AWS CLI, see <a
 *  href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing the AWS Command Line Interface</a> in
 *  the <i>AWS Command Line Interface User Guide</i>. For a list of available Amazon Chime commands, see the <a
 *  href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon Chime commands</a> in the <i>AWS CLI
 *  Command
 * 
 *  Reference</i>> </dd> <dt>Using REST API</dt> <dd>
 * 
 *  If you use REST to make API calls, you must authenticate your request by providing a signature. Amazon Chime supports
 *  signature version 4. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a> in
 *  the <i>Amazon Web Services General
 * 
 *  Reference</i>>
 * 
 *  When making REST API calls, use the service name <code>chime</code> and REST endpoint
 * 
 *  <code>https://service.chime.aws.amazon.com</code>> </dd> </dl>
 * 
 *  Administrative permissions are controlled using AWS Identity and Access Management (IAM). For more information, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/ag/control-access.html">Control Access to the Amazon Chime Console</a> in
 *  the <i>Amazon Chime Administration
 *
 * \sa ChimeClient::batchUpdatePhoneNumber
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdatePhoneNumberRequest::BatchUpdatePhoneNumberRequest(const BatchUpdatePhoneNumberRequest &other)
    : ChimeRequest(new BatchUpdatePhoneNumberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdatePhoneNumberRequest object.
 */
BatchUpdatePhoneNumberRequest::BatchUpdatePhoneNumberRequest()
    : ChimeRequest(new BatchUpdatePhoneNumberRequestPrivate(ChimeRequest::BatchUpdatePhoneNumberAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdatePhoneNumberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdatePhoneNumberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdatePhoneNumberRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdatePhoneNumberResponse(*this, reply);
}

/*!
 * \class QtAws::Chime::BatchUpdatePhoneNumberRequestPrivate
 * \brief The BatchUpdatePhoneNumberRequestPrivate class provides private implementation for BatchUpdatePhoneNumberRequest.
 * \internal
 *
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a BatchUpdatePhoneNumberRequestPrivate object for Chime \a action,
 * with public implementation \a q.
 */
BatchUpdatePhoneNumberRequestPrivate::BatchUpdatePhoneNumberRequestPrivate(
    const ChimeRequest::Action action, BatchUpdatePhoneNumberRequest * const q)
    : ChimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdatePhoneNumberRequest
 * class' copy constructor.
 */
BatchUpdatePhoneNumberRequestPrivate::BatchUpdatePhoneNumberRequestPrivate(
    const BatchUpdatePhoneNumberRequestPrivate &other, BatchUpdatePhoneNumberRequest * const q)
    : ChimeRequestPrivate(other, q)
{

}

} // namespace Chime
} // namespace QtAws
