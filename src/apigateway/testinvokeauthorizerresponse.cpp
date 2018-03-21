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

#include "testinvokeauthorizerresponse.h"
#include "testinvokeauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  TestInvokeAuthorizerResponse
 *
 * @brief  Handles APIGateway TestInvokeAuthorizer responses.
 *
 * @see    APIGatewayClient::testInvokeAuthorizer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestInvokeAuthorizerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new TestInvokeAuthorizerResponsePrivate(this), parent)
{
    setRequest(new TestInvokeAuthorizerRequest(request));
    setReply(reply);
}

const TestInvokeAuthorizerRequest * TestInvokeAuthorizerResponse::request() const
{
    Q_D(const TestInvokeAuthorizerResponse);
    return static_cast<const TestInvokeAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway TestInvokeAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void TestInvokeAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TestInvokeAuthorizerResponsePrivate
 *
 * @brief  Private implementation for TestInvokeAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TestInvokeAuthorizerResponse instance.
 */
TestInvokeAuthorizerResponsePrivate::TestInvokeAuthorizerResponsePrivate(
    TestInvokeAuthorizerQueueResponse * const q) : TestInvokeAuthorizerPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway TestInvokeAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TestInvokeAuthorizerResponsePrivate::TestInvokeAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestInvokeAuthorizerResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS