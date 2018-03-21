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

#include "addlistenercertificatesresponse.h"
#include "addlistenercertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  AddListenerCertificatesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 AddListenerCertificates responses.
 *
 * @see    ElasticLoadBalancingv2Client::addListenerCertificates
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddListenerCertificatesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new AddListenerCertificatesResponsePrivate(this), parent)
{
    setRequest(new AddListenerCertificatesRequest(request));
    setReply(reply);
}

const AddListenerCertificatesRequest * AddListenerCertificatesResponse::request() const
{
    Q_D(const AddListenerCertificatesResponse);
    return static_cast<const AddListenerCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 AddListenerCertificates response.
 *
 * @param  response  Response to parse.
 */
void AddListenerCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddListenerCertificatesResponsePrivate
 *
 * @brief  Private implementation for AddListenerCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddListenerCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddListenerCertificatesResponse instance.
 */
AddListenerCertificatesResponsePrivate::AddListenerCertificatesResponsePrivate(
    AddListenerCertificatesQueueResponse * const q) : AddListenerCertificatesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 AddListenerCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddListenerCertificatesResponsePrivate::AddListenerCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddListenerCertificatesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
