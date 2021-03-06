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

#include "createbatchpredictionjobrequest.h"
#include "createbatchpredictionjobrequest_p.h"
#include "createbatchpredictionjobresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CreateBatchPredictionJobRequest
 * \brief The CreateBatchPredictionJobRequest class provides an interface for FraudDetector CreateBatchPredictionJob requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::createBatchPredictionJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBatchPredictionJobRequest::CreateBatchPredictionJobRequest(const CreateBatchPredictionJobRequest &other)
    : FraudDetectorRequest(new CreateBatchPredictionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBatchPredictionJobRequest object.
 */
CreateBatchPredictionJobRequest::CreateBatchPredictionJobRequest()
    : FraudDetectorRequest(new CreateBatchPredictionJobRequestPrivate(FraudDetectorRequest::CreateBatchPredictionJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBatchPredictionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBatchPredictionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBatchPredictionJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateBatchPredictionJobResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::CreateBatchPredictionJobRequestPrivate
 * \brief The CreateBatchPredictionJobRequestPrivate class provides private implementation for CreateBatchPredictionJobRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CreateBatchPredictionJobRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
CreateBatchPredictionJobRequestPrivate::CreateBatchPredictionJobRequestPrivate(
    const FraudDetectorRequest::Action action, CreateBatchPredictionJobRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBatchPredictionJobRequest
 * class' copy constructor.
 */
CreateBatchPredictionJobRequestPrivate::CreateBatchPredictionJobRequestPrivate(
    const CreateBatchPredictionJobRequestPrivate &other, CreateBatchPredictionJobRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
