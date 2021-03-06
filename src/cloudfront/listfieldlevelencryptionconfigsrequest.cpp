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

#include "listfieldlevelencryptionconfigsrequest.h"
#include "listfieldlevelencryptionconfigsrequest_p.h"
#include "listfieldlevelencryptionconfigsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsRequest
 * \brief The ListFieldLevelEncryptionConfigsRequest class provides an interface for CloudFront ListFieldLevelEncryptionConfigs requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListFieldLevelEncryptionConfigsRequest::ListFieldLevelEncryptionConfigsRequest(const ListFieldLevelEncryptionConfigsRequest &other)
    : CloudFrontRequest(new ListFieldLevelEncryptionConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFieldLevelEncryptionConfigsRequest object.
 */
ListFieldLevelEncryptionConfigsRequest::ListFieldLevelEncryptionConfigsRequest()
    : CloudFrontRequest(new ListFieldLevelEncryptionConfigsRequestPrivate(CloudFrontRequest::ListFieldLevelEncryptionConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFieldLevelEncryptionConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFieldLevelEncryptionConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFieldLevelEncryptionConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListFieldLevelEncryptionConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsRequestPrivate
 * \brief The ListFieldLevelEncryptionConfigsRequestPrivate class provides private implementation for ListFieldLevelEncryptionConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListFieldLevelEncryptionConfigsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListFieldLevelEncryptionConfigsRequestPrivate::ListFieldLevelEncryptionConfigsRequestPrivate(
    const CloudFrontRequest::Action action, ListFieldLevelEncryptionConfigsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFieldLevelEncryptionConfigsRequest
 * class' copy constructor.
 */
ListFieldLevelEncryptionConfigsRequestPrivate::ListFieldLevelEncryptionConfigsRequestPrivate(
    const ListFieldLevelEncryptionConfigsRequestPrivate &other, ListFieldLevelEncryptionConfigsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
