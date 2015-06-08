/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsabstractclient.h"
#include "awsabstractclient_p.h"
#include "awsabstractrequest.h"

#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractClient
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsAbstractClient object.
 *
 * @param parent       This object's parent.
 */
AwsAbstractClient::AwsAbstractClient(
        QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractClientPrivate(this))
{
    //Q_D(AwsAbstractClient);
}

AwsAbstractClient::~AwsAbstractClient()
{
    delete d_ptr;
}

/**
 * @brief Get the network access manager for this AWS service object.
 *
 * @return The QNetworkAccessManager that handles requests for this object.
 */
QNetworkAccessManager * AwsAbstractClient::networkAccessManager() const
{
    Q_D(const AwsAbstractClient);
    return d->networkAccessManager;
}

/**
 * @brief Set the network access manager for this AWS service object.
 *
 * @param  manager  Network access manager for this AWS service object to use.
 */
void AwsAbstractClient::setNetworkAccessManager(QNetworkAccessManager * const manager)
{
    Q_D(AwsAbstractClient);
    d->networkAccessManager = manager;
}

void AwsAbstractClient::abort()
{
    Q_D(AwsAbstractClient);
    //foreach (AwsAbstractRequest &request, d->pendingRequests) {
        //emit requestAborted(request);
    //}
    //d->pendingRequests.clear();
}

#include "awsbasiccredentials.h"
#include "awssignaturev4.h"
QNetworkReply * AwsAbstractClient::send(const AwsAbstractRequest &request)
{
    Q_D(AwsAbstractClient);
    Q_ASSERT(d->networkAccessManager);
    if (d->networkAccessManager) {
        /// @todo  Move these var to private class, etc, probably accessed via
        ///        virtual (ie overridable) accessor functions.
        AwsBasicCredentials credentials(QLatin1String(""), QLatin1String(""));
        AwsSignatureV4 signature;
        return request.send(d->networkAccessManager, signature, credentials);
    }
    return NULL;
}

void AwsAbstractClient::credentialsChanged()
{
    // sign and send all pending.
}

/**
 * @internal
 *
 * @class  AwsAbstractClientPrivate
 *
 * @brief  Private implementation for AwsAbstractClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractClientPrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractClient instance.
 */
AwsAbstractClientPrivate::AwsAbstractClientPrivate(AwsAbstractClient * const q)
    : networkAccessManager(NULL), q_ptr(q)
{

}

QTAWS_END_NAMESPACE