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

#include "createtaskresponse.h"
#include "createtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateTaskResponse
 * \brief The CreateTaskResponse class provides an interace for DataSync CreateTask responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::createTask
 */

/*!
 * Constructs a CreateTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTaskResponse::CreateTaskResponse(
        const CreateTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateTaskResponsePrivate(this), parent)
{
    setRequest(new CreateTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTaskRequest * CreateTaskResponse::request() const
{
    Q_D(const CreateTaskResponse);
    return static_cast<const CreateTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateTask \a response.
 */
void CreateTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateTaskResponsePrivate
 * \brief The CreateTaskResponsePrivate class provides private implementation for CreateTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateTaskResponsePrivate object with public implementation \a q.
 */
CreateTaskResponsePrivate::CreateTaskResponsePrivate(
    CreateTaskResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateTask response element from \a xml.
 */
void CreateTaskResponsePrivate::parseCreateTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
