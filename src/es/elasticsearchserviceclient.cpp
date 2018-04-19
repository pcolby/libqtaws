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

#include "elasticsearchserviceclient.h"
#include "elasticsearchserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createelasticsearchdomainrequest.h"
#include "createelasticsearchdomainresponse.h"
#include "deleteelasticsearchdomainrequest.h"
#include "deleteelasticsearchdomainresponse.h"
#include "deleteelasticsearchserviceroleresponse.h"
#include "describeelasticsearchdomainrequest.h"
#include "describeelasticsearchdomainresponse.h"
#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "describeelasticsearchdomainsrequest.h"
#include "describeelasticsearchdomainsresponse.h"
#include "describeelasticsearchinstancetypelimitsrequest.h"
#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "listdomainnamesresponse.h"
#include "listelasticsearchinstancetypesrequest.h"
#include "listelasticsearchinstancetypesresponse.h"
#include "listelasticsearchversionsrequest.h"
#include "listelasticsearchversionsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "updateelasticsearchdomainconfigrequest.h"
#include "updateelasticsearchdomainconfigresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElasticsearchService
 * \brief The QtAws::ElasticsearchService contains stuff...
 *
 * \inmodule QtAwsElasticsearchService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ElasticsearchServiceClient
 * \brief The ElasticsearchServiceClient class provides access to the Amazon Elasticsearch Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 */

/*!
 * \brief Constructs a ElasticsearchServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->apiVersion = QStringLiteral("2015-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elasticsearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * \overload ElasticsearchServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->apiVersion = QStringLiteral("2015-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elasticsearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches tags to an existing Elasticsearch domain. Tags are a set of case-sensitive key value pairs. An Elasticsearch
 * domain may have up to 10 tags. See <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
 * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
 */
AddTagsResponse * ElasticsearchServiceClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * CreateElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Elasticsearch domain. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
 * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon Elasticsearch Service Developer
 */
CreateElasticsearchDomainResponse * ElasticsearchServiceClient::createElasticsearchDomain(const CreateElasticsearchDomainRequest &request)
{
    return qobject_cast<CreateElasticsearchDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * DeleteElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified Elasticsearch domain and all of its data. Once a domain is deleted, it cannot be
 */
DeleteElasticsearchDomainResponse * ElasticsearchServiceClient::deleteElasticsearchDomain(const DeleteElasticsearchDomainRequest &request)
{
    return qobject_cast<DeleteElasticsearchDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * DeleteElasticsearchServiceRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the service-linked role that Elasticsearch Service uses to manage and maintain VPC domains. Role deletion will
 * fail if any existing VPC domains use the role. You must delete any such Elasticsearch domains before deleting the role.
 * See <a href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-enabling-slr"
 * target="_blank">Deleting Elasticsearch Service Role</a> in <i>VPC Endpoints for Amazon Elasticsearch Service
 */
DeleteElasticsearchServiceRoleResponse * ElasticsearchServiceClient::deleteElasticsearchServiceRole()
{
    return qobject_cast<DeleteElasticsearchServiceRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * DescribeElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns domain configuration information about the specified Elasticsearch domain, including the domain ID, domain
 * endpoint, and domain
 */
DescribeElasticsearchDomainResponse * ElasticsearchServiceClient::describeElasticsearchDomain(const DescribeElasticsearchDomainRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * DescribeElasticsearchDomainConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides cluster configuration information about the specified Elasticsearch domain, such as the state, creation date,
 * update version, and update date for cluster
 */
DescribeElasticsearchDomainConfigResponse * ElasticsearchServiceClient::describeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * DescribeElasticsearchDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns domain configuration information about the specified Elasticsearch domains, including the domain ID, domain
 * endpoint, and domain
 */
DescribeElasticsearchDomainsResponse * ElasticsearchServiceClient::describeElasticsearchDomains(const DescribeElasticsearchDomainsRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * DescribeElasticsearchInstanceTypeLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe Elasticsearch Limits for a given InstanceType and ElasticsearchVersion. When modifying existing Domain, specify
 * the <code> <a>DomainName</a> </code> to know what Limits are supported for modifying.
 */
DescribeElasticsearchInstanceTypeLimitsResponse * ElasticsearchServiceClient::describeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest &request)
{
    return qobject_cast<DescribeElasticsearchInstanceTypeLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * ListDomainNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name of all Elasticsearch domains owned by the current user's account.
 */
ListDomainNamesResponse * ElasticsearchServiceClient::listDomainNames()
{
    return qobject_cast<ListDomainNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * ListElasticsearchInstanceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all Elasticsearch instance types that are supported for given
 */
ListElasticsearchInstanceTypesResponse * ElasticsearchServiceClient::listElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest &request)
{
    return qobject_cast<ListElasticsearchInstanceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * ListElasticsearchVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all supported Elasticsearch
 */
ListElasticsearchVersionsResponse * ElasticsearchServiceClient::listElasticsearchVersions(const ListElasticsearchVersionsRequest &request)
{
    return qobject_cast<ListElasticsearchVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tags for the given Elasticsearch
 */
ListTagsResponse * ElasticsearchServiceClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified set of tags from the specified Elasticsearch
 */
RemoveTagsResponse * ElasticsearchServiceClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchServiceClient service, and returns a pointer to an
 * UpdateElasticsearchDomainConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the cluster configuration of the specified Elasticsearch domain, setting as setting the instance type and the
 * number of instances.
 */
UpdateElasticsearchDomainConfigResponse * ElasticsearchServiceClient::updateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest &request)
{
    return qobject_cast<UpdateElasticsearchDomainConfigResponse *>(send(request));
}

/*!
 * \class QtAws::ElasticsearchService::ElasticsearchServiceClientPrivate
 * \brief The ElasticsearchServiceClientPrivate class provides private implementation for ElasticsearchServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticsearchService
 */

/*!
 * Constructs a ElasticsearchServiceClientPrivate object with public implementation \a q.
 */
ElasticsearchServiceClientPrivate::ElasticsearchServiceClientPrivate(ElasticsearchServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ElasticsearchService
} // namespace QtAws
