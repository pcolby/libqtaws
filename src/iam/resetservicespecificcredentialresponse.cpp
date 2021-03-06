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

#include "resetservicespecificcredentialresponse.h"
#include "resetservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ResetServiceSpecificCredentialResponse
 * \brief The ResetServiceSpecificCredentialResponse class provides an interace for IAM ResetServiceSpecificCredential responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::resetServiceSpecificCredential
 */

/*!
 * Constructs a ResetServiceSpecificCredentialResponse object for \a reply to \a request, with parent \a parent.
 */
ResetServiceSpecificCredentialResponse::ResetServiceSpecificCredentialResponse(
        const ResetServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ResetServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new ResetServiceSpecificCredentialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetServiceSpecificCredentialRequest * ResetServiceSpecificCredentialResponse::request() const
{
    Q_D(const ResetServiceSpecificCredentialResponse);
    return static_cast<const ResetServiceSpecificCredentialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM ResetServiceSpecificCredential \a response.
 */
void ResetServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::ResetServiceSpecificCredentialResponsePrivate
 * \brief The ResetServiceSpecificCredentialResponsePrivate class provides private implementation for ResetServiceSpecificCredentialResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ResetServiceSpecificCredentialResponsePrivate object with public implementation \a q.
 */
ResetServiceSpecificCredentialResponsePrivate::ResetServiceSpecificCredentialResponsePrivate(
    ResetServiceSpecificCredentialResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM ResetServiceSpecificCredential response element from \a xml.
 */
void ResetServiceSpecificCredentialResponsePrivate::parseResetServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetServiceSpecificCredentialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
