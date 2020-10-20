/*
    Copyright 2013-2020 Paul Colby

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

#include "describeobjectsrequest.h"
#include "describeobjectsrequest_p.h"
#include "describeobjectsresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DescribeObjectsRequest
 * \brief The DescribeObjectsRequest class provides an interface for DataPipeline DescribeObjects requests.
 *
 * \inmodule QtAwsDataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 *
 * \sa DataPipelineClient::describeObjects
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeObjectsRequest::DescribeObjectsRequest(const DescribeObjectsRequest &other)
    : DataPipelineRequest(new DescribeObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeObjectsRequest object.
 */
DescribeObjectsRequest::DescribeObjectsRequest()
    : DataPipelineRequest(new DescribeObjectsRequestPrivate(DataPipelineRequest::DescribeObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeObjectsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::DataPipeline::DescribeObjectsRequestPrivate
 * \brief The DescribeObjectsRequestPrivate class provides private implementation for DescribeObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a DescribeObjectsRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
DescribeObjectsRequestPrivate::DescribeObjectsRequestPrivate(
    const DataPipelineRequest::Action action, DescribeObjectsRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeObjectsRequest
 * class' copy constructor.
 */
DescribeObjectsRequestPrivate::DescribeObjectsRequestPrivate(
    const DescribeObjectsRequestPrivate &other, DescribeObjectsRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws
