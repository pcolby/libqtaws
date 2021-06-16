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

#include "gettablemetadatarequest.h"
#include "gettablemetadatarequest_p.h"
#include "gettablemetadataresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::GetTableMetadataRequest
 * \brief The GetTableMetadataRequest class provides an interface for Athena GetTableMetadata requests.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::getTableMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableMetadataRequest::GetTableMetadataRequest(const GetTableMetadataRequest &other)
    : AthenaRequest(new GetTableMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableMetadataRequest object.
 */
GetTableMetadataRequest::GetTableMetadataRequest()
    : AthenaRequest(new GetTableMetadataRequestPrivate(AthenaRequest::GetTableMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetTableMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Athena::GetTableMetadataRequestPrivate
 * \brief The GetTableMetadataRequestPrivate class provides private implementation for GetTableMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a GetTableMetadataRequestPrivate object for Athena \a action,
 * with public implementation \a q.
 */
GetTableMetadataRequestPrivate::GetTableMetadataRequestPrivate(
    const AthenaRequest::Action action, GetTableMetadataRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableMetadataRequest
 * class' copy constructor.
 */
GetTableMetadataRequestPrivate::GetTableMetadataRequestPrivate(
    const GetTableMetadataRequestPrivate &other, GetTableMetadataRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
