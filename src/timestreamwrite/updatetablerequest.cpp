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

#include "updatetablerequest.h"
#include "updatetablerequest_p.h"
#include "updatetableresponse.h"
#include "timestreamwriterequest_p.h"

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::UpdateTableRequest
 * \brief The UpdateTableRequest class provides an interface for TimestreamWrite UpdateTable requests.
 *
 * \inmodule QtAwsTimestreamWrite
 *
 *  Amazon Timestream is a fast, scalable, fully managed time series database service that makes it easy to store and
 *  analyze trillions of time series data points per day. With Timestream, you can easily store and analyze IoT sensor data
 *  to derive insights from your IoT applications. You can analyze industrial telemetry to streamline equipment management
 *  and maintenance. You can also store and analyze log data and metrics to improve the performance and availability of your
 *  applications. Timestream is built from the ground up to effectively ingest, process, and store time series data. It
 *  organizes data to optimize query processing. It automatically scales based on the volume of data ingested and on the
 *  query volume to ensure you receive optimal performance while inserting and querying data. As your data grows over time,
 *  Timestream’s adaptive query processing engine spans across storage tiers to provide fast analysis while reducing
 *
 * \sa TimestreamWriteClient::updateTable
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTableRequest::UpdateTableRequest(const UpdateTableRequest &other)
    : TimestreamWriteRequest(new UpdateTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTableRequest object.
 */
UpdateTableRequest::UpdateTableRequest()
    : TimestreamWriteRequest(new UpdateTableRequestPrivate(TimestreamWriteRequest::UpdateTableAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTableResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamWrite::UpdateTableRequestPrivate
 * \brief The UpdateTableRequestPrivate class provides private implementation for UpdateTableRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a UpdateTableRequestPrivate object for TimestreamWrite \a action,
 * with public implementation \a q.
 */
UpdateTableRequestPrivate::UpdateTableRequestPrivate(
    const TimestreamWriteRequest::Action action, UpdateTableRequest * const q)
    : TimestreamWriteRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTableRequest
 * class' copy constructor.
 */
UpdateTableRequestPrivate::UpdateTableRequestPrivate(
    const UpdateTableRequestPrivate &other, UpdateTableRequest * const q)
    : TimestreamWriteRequestPrivate(other, q)
{

}

} // namespace TimestreamWrite
} // namespace QtAws
