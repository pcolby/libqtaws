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

#include "importapplicationusagerequest.h"
#include "importapplicationusagerequest_p.h"
#include "importapplicationusageresponse.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ImportApplicationUsageRequest
 * \brief The ImportApplicationUsageRequest class provides an interface for ApplicationCostProfiler ImportApplicationUsage requests.
 *
 * \inmodule QtAwsApplicationCostProfiler
 *
 *  This reference provides descriptions of the AWS Application Cost Profiler
 * 
 *  API>
 * 
 *  The AWS Application Cost Profiler API provides programmatic access to view, create, update, and delete application cost
 *  report definitions, as well as to import your usage data into the Application Cost Profiler
 * 
 *  service>
 * 
 *  For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/application-cost-profiler/latest/userguide/introduction.html">AWS Application Cost
 *  Profiler User
 *
 * \sa ApplicationCostProfilerClient::importApplicationUsage
 */

/*!
 * Constructs a copy of \a other.
 */
ImportApplicationUsageRequest::ImportApplicationUsageRequest(const ImportApplicationUsageRequest &other)
    : ApplicationCostProfilerRequest(new ImportApplicationUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportApplicationUsageRequest object.
 */
ImportApplicationUsageRequest::ImportApplicationUsageRequest()
    : ApplicationCostProfilerRequest(new ImportApplicationUsageRequestPrivate(ApplicationCostProfilerRequest::ImportApplicationUsageAction, this))
{

}

/*!
 * \reimp
 */
bool ImportApplicationUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportApplicationUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportApplicationUsageRequest::response(QNetworkReply * const reply) const
{
    return new ImportApplicationUsageResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationCostProfiler::ImportApplicationUsageRequestPrivate
 * \brief The ImportApplicationUsageRequestPrivate class provides private implementation for ImportApplicationUsageRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ImportApplicationUsageRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
ImportApplicationUsageRequestPrivate::ImportApplicationUsageRequestPrivate(
    const ApplicationCostProfilerRequest::Action action, ImportApplicationUsageRequest * const q)
    : ApplicationCostProfilerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportApplicationUsageRequest
 * class' copy constructor.
 */
ImportApplicationUsageRequestPrivate::ImportApplicationUsageRequestPrivate(
    const ImportApplicationUsageRequestPrivate &other, ImportApplicationUsageRequest * const q)
    : ApplicationCostProfilerRequestPrivate(other, q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
