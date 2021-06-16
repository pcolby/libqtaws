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

#include "getgeneratedpolicyrequest.h"
#include "getgeneratedpolicyrequest_p.h"
#include "getgeneratedpolicyresponse.h"
#include "accessanalyzerrequest_p.h"

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::GetGeneratedPolicyRequest
 * \brief The GetGeneratedPolicyRequest class provides an interface for AccessAnalyzer GetGeneratedPolicy requests.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  AWS IAM Access Analyzer helps identify potential resource-access risks by enabling you to identify any policies that
 *  grant access to an external principal. It does this by using logic-based reasoning to analyze resource-based policies in
 *  your AWS environment. An external principal can be another AWS account, a root user, an IAM user or role, a federated
 *  user, an AWS service, or an anonymous user. You can also use Access Analyzer to preview and validate public and
 *  cross-account access to your resources before deploying permissions changes. This guide describes the AWS IAM Access
 *  Analyzer operations that you can call programmatically. For general information about Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">AWS IAM Access Analyzer</a> in the
 *  <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::getGeneratedPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeneratedPolicyRequest::GetGeneratedPolicyRequest(const GetGeneratedPolicyRequest &other)
    : AccessAnalyzerRequest(new GetGeneratedPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeneratedPolicyRequest object.
 */
GetGeneratedPolicyRequest::GetGeneratedPolicyRequest()
    : AccessAnalyzerRequest(new GetGeneratedPolicyRequestPrivate(AccessAnalyzerRequest::GetGeneratedPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetGeneratedPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGeneratedPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeneratedPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetGeneratedPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::AccessAnalyzer::GetGeneratedPolicyRequestPrivate
 * \brief The GetGeneratedPolicyRequestPrivate class provides private implementation for GetGeneratedPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a GetGeneratedPolicyRequestPrivate object for AccessAnalyzer \a action,
 * with public implementation \a q.
 */
GetGeneratedPolicyRequestPrivate::GetGeneratedPolicyRequestPrivate(
    const AccessAnalyzerRequest::Action action, GetGeneratedPolicyRequest * const q)
    : AccessAnalyzerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGeneratedPolicyRequest
 * class' copy constructor.
 */
GetGeneratedPolicyRequestPrivate::GetGeneratedPolicyRequestPrivate(
    const GetGeneratedPolicyRequestPrivate &other, GetGeneratedPolicyRequest * const q)
    : AccessAnalyzerRequestPrivate(other, q)
{

}

} // namespace AccessAnalyzer
} // namespace QtAws
