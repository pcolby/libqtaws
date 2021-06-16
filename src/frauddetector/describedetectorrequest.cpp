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

#include "describedetectorrequest.h"
#include "describedetectorrequest_p.h"
#include "describedetectorresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DescribeDetectorRequest
 * \brief The DescribeDetectorRequest class provides an interface for FraudDetector DescribeDetector requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::describeDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDetectorRequest::DescribeDetectorRequest(const DescribeDetectorRequest &other)
    : FraudDetectorRequest(new DescribeDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDetectorRequest object.
 */
DescribeDetectorRequest::DescribeDetectorRequest()
    : FraudDetectorRequest(new DescribeDetectorRequestPrivate(FraudDetectorRequest::DescribeDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DescribeDetectorRequestPrivate
 * \brief The DescribeDetectorRequestPrivate class provides private implementation for DescribeDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DescribeDetectorRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DescribeDetectorRequestPrivate::DescribeDetectorRequestPrivate(
    const FraudDetectorRequest::Action action, DescribeDetectorRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDetectorRequest
 * class' copy constructor.
 */
DescribeDetectorRequestPrivate::DescribeDetectorRequestPrivate(
    const DescribeDetectorRequestPrivate &other, DescribeDetectorRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
