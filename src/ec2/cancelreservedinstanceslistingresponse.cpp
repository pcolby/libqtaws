/*
    Copyright 2013-2018 Paul Colby

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

#include "cancelreservedinstanceslistingresponse.h"
#include "cancelreservedinstanceslistingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CancelReservedInstancesListingResponse
 *
 * @brief  Handles EC2 CancelReservedInstancesListing responses.
 *
 * @see    EC2Client::cancelReservedInstancesListing
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelReservedInstancesListingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelReservedInstancesListingResponsePrivate(this), parent)
{
    setRequest(new CancelReservedInstancesListingRequest(request));
    setReply(reply);
}

const CancelReservedInstancesListingRequest * CancelReservedInstancesListingResponse::request() const
{
    Q_D(const CancelReservedInstancesListingResponse);
    return static_cast<const CancelReservedInstancesListingRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CancelReservedInstancesListing response.
 *
 * @param  response  Response to parse.
 */
void CancelReservedInstancesListingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelReservedInstancesListingResponsePrivate
 *
 * @brief  Private implementation for CancelReservedInstancesListingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelReservedInstancesListingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelReservedInstancesListingResponse instance.
 */
CancelReservedInstancesListingResponsePrivate::CancelReservedInstancesListingResponsePrivate(
    CancelReservedInstancesListingQueueResponse * const q) : CancelReservedInstancesListingPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CancelReservedInstancesListingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelReservedInstancesListingResponsePrivate::CancelReservedInstancesListingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelReservedInstancesListingResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS