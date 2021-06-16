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

#include "completesnapshotresponse.h"
#include "completesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EBS {

/*!
 * \class QtAws::EBS::CompleteSnapshotResponse
 * \brief The CompleteSnapshotResponse class provides an interace for EBS CompleteSnapshot responses.
 *
 * \inmodule QtAwsEBS
 *
 *  You can use the Amazon Elastic Block Store (Amazon EBS) direct APIs to create EBS snapshots, write data directly to your
 *  snapshots, read data on your snapshots, and identify the differences or changes between two snapshots. If you’re an
 *  independent software vendor (ISV) who offers backup services for Amazon EBS, the EBS direct APIs make it more efficient
 *  and cost-effective to track incremental changes on your EBS volumes through snapshots. This can be done without having
 *  to create new volumes from snapshots, and then use Amazon Elastic Compute Cloud (Amazon EC2) instances to compare the
 * 
 *  differences>
 * 
 *  You can create incremental snapshots directly from data on-premises into EBS volumes and the cloud to use for quick
 *  disaster recovery. With the ability to write and read snapshots, you can write your on-premises data to an EBS snapshot
 *  during a disaster. Then after recovery, you can restore it back to AWS or on-premises from the snapshot. You no longer
 *  need to build and maintain complex mechanisms to copy data to and from Amazon
 * 
 *  EBS>
 * 
 *  This API reference provides detailed information about the actions, data types, parameters, and errors of the EBS direct
 *  APIs. For more information about the elements that make up the EBS direct APIs, and examples of how to use them
 *  effectively, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing the
 *  Contents of an EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. For more information about the
 *  supported AWS Regions, endpoints, and service quotas for the EBS direct APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon Elastic Block Store Endpoints and
 *  Quotas</a> in the <i>AWS General
 *
 * \sa EbsClient::completeSnapshot
 */

/*!
 * Constructs a CompleteSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteSnapshotResponse::CompleteSnapshotResponse(
        const CompleteSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EbsResponse(new CompleteSnapshotResponsePrivate(this), parent)
{
    setRequest(new CompleteSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteSnapshotRequest * CompleteSnapshotResponse::request() const
{
    Q_D(const CompleteSnapshotResponse);
    return static_cast<const CompleteSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EBS CompleteSnapshot \a response.
 */
void CompleteSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EBS::CompleteSnapshotResponsePrivate
 * \brief The CompleteSnapshotResponsePrivate class provides private implementation for CompleteSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsEBS
 */

/*!
 * Constructs a CompleteSnapshotResponsePrivate object with public implementation \a q.
 */
CompleteSnapshotResponsePrivate::CompleteSnapshotResponsePrivate(
    CompleteSnapshotResponse * const q) : EbsResponsePrivate(q)
{

}

/*!
 * Parses a EBS CompleteSnapshot response element from \a xml.
 */
void CompleteSnapshotResponsePrivate::parseCompleteSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EBS
} // namespace QtAws
