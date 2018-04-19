/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getregexpatternsetresponse.h"
#include "getregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::GetRegexPatternSetResponse
 * \brief The GetRegexPatternSetResponse class provides an interace for WAF GetRegexPatternSet responses.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::getRegexPatternSet
 */

/*!
 * Constructs a GetRegexPatternSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegexPatternSetResponse::GetRegexPatternSetResponse(
        const GetRegexPatternSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new GetRegexPatternSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegexPatternSetRequest * GetRegexPatternSetResponse::request() const
{
    Q_D(const GetRegexPatternSetResponse);
    return static_cast<const GetRegexPatternSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WAF GetRegexPatternSet \a response.
 */
void GetRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRegexPatternSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WAF::GetRegexPatternSetResponsePrivate
 * \brief The GetRegexPatternSetResponsePrivate class provides private implementation for GetRegexPatternSetResponse.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a GetRegexPatternSetResponsePrivate object with public implementation \a q.
 */
GetRegexPatternSetResponsePrivate::GetRegexPatternSetResponsePrivate(
    GetRegexPatternSetResponse * const q) : WAFResponsePrivate(q)
{

}

/*!
 * Parses a WAF GetRegexPatternSet response element from \a xml.
 */
void GetRegexPatternSetResponsePrivate::parseGetRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
