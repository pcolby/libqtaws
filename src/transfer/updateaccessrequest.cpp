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

#include "updateaccessrequest.h"
#include "updateaccessrequest_p.h"
#include "updateaccessresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateAccessRequest
 * \brief The UpdateAccessRequest class provides an interface for Transfer UpdateAccess requests.
 *
 * \inmodule QtAwsTransfer
 *
 *  AWS Transfer Family is a fully managed service that enables the transfer of files over the File Transfer Protocol (FTP),
 *  File Transfer Protocol over SSL (FTPS), or Secure Shell (SSH) File Transfer Protocol (SFTP) directly into and out of
 *  Amazon Simple Storage Service (Amazon S3). AWS helps you seamlessly migrate your file transfer workflows to AWS Transfer
 *  Family by integrating with existing authentication systems, and providing DNS routing with Amazon Route 53 so nothing
 *  changes for your customers and partners, or their applications. With your data in Amazon S3, you can use it with AWS
 *  services for processing, analytics, machine learning, and archiving. Getting started with AWS Transfer Family is easy
 *  since there is no infrastructure to buy and set
 *
 * \sa TransferClient::updateAccess
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccessRequest::UpdateAccessRequest(const UpdateAccessRequest &other)
    : TransferRequest(new UpdateAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccessRequest object.
 */
UpdateAccessRequest::UpdateAccessRequest()
    : TransferRequest(new UpdateAccessRequestPrivate(TransferRequest::UpdateAccessAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccessRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::UpdateAccessRequestPrivate
 * \brief The UpdateAccessRequestPrivate class provides private implementation for UpdateAccessRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateAccessRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
UpdateAccessRequestPrivate::UpdateAccessRequestPrivate(
    const TransferRequest::Action action, UpdateAccessRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessRequest
 * class' copy constructor.
 */
UpdateAccessRequestPrivate::UpdateAccessRequestPrivate(
    const UpdateAccessRequestPrivate &other, UpdateAccessRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
