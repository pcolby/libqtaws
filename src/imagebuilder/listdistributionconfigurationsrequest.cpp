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

#include "listdistributionconfigurationsrequest.h"
#include "listdistributionconfigurationsrequest_p.h"
#include "listdistributionconfigurationsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListDistributionConfigurationsRequest
 * \brief The ListDistributionConfigurationsRequest class provides an interface for imagebuilder ListDistributionConfigurations requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listDistributionConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionConfigurationsRequest::ListDistributionConfigurationsRequest(const ListDistributionConfigurationsRequest &other)
    : imagebuilderRequest(new ListDistributionConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionConfigurationsRequest object.
 */
ListDistributionConfigurationsRequest::ListDistributionConfigurationsRequest()
    : imagebuilderRequest(new ListDistributionConfigurationsRequestPrivate(imagebuilderRequest::ListDistributionConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListDistributionConfigurationsRequestPrivate
 * \brief The ListDistributionConfigurationsRequestPrivate class provides private implementation for ListDistributionConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListDistributionConfigurationsRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListDistributionConfigurationsRequestPrivate::ListDistributionConfigurationsRequestPrivate(
    const imagebuilderRequest::Action action, ListDistributionConfigurationsRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionConfigurationsRequest
 * class' copy constructor.
 */
ListDistributionConfigurationsRequestPrivate::ListDistributionConfigurationsRequestPrivate(
    const ListDistributionConfigurationsRequestPrivate &other, ListDistributionConfigurationsRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
