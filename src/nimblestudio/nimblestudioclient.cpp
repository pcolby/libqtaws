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

#include "nimblestudioclient.h"
#include "nimblestudioclient_p.h"

#include "core/awssignaturev4.h"
#include "accepteulasrequest.h"
#include "accepteulasresponse.h"
#include "createlaunchprofilerequest.h"
#include "createlaunchprofileresponse.h"
#include "createstreamingimagerequest.h"
#include "createstreamingimageresponse.h"
#include "createstreamingsessionrequest.h"
#include "createstreamingsessionresponse.h"
#include "createstreamingsessionstreamrequest.h"
#include "createstreamingsessionstreamresponse.h"
#include "createstudiorequest.h"
#include "createstudioresponse.h"
#include "createstudiocomponentrequest.h"
#include "createstudiocomponentresponse.h"
#include "deletelaunchprofilerequest.h"
#include "deletelaunchprofileresponse.h"
#include "deletelaunchprofilememberrequest.h"
#include "deletelaunchprofilememberresponse.h"
#include "deletestreamingimagerequest.h"
#include "deletestreamingimageresponse.h"
#include "deletestreamingsessionrequest.h"
#include "deletestreamingsessionresponse.h"
#include "deletestudiorequest.h"
#include "deletestudioresponse.h"
#include "deletestudiocomponentrequest.h"
#include "deletestudiocomponentresponse.h"
#include "deletestudiomemberrequest.h"
#include "deletestudiomemberresponse.h"
#include "geteularequest.h"
#include "geteularesponse.h"
#include "getlaunchprofilerequest.h"
#include "getlaunchprofileresponse.h"
#include "getlaunchprofiledetailsrequest.h"
#include "getlaunchprofiledetailsresponse.h"
#include "getlaunchprofileinitializationrequest.h"
#include "getlaunchprofileinitializationresponse.h"
#include "getlaunchprofilememberrequest.h"
#include "getlaunchprofilememberresponse.h"
#include "getstreamingimagerequest.h"
#include "getstreamingimageresponse.h"
#include "getstreamingsessionrequest.h"
#include "getstreamingsessionresponse.h"
#include "getstreamingsessionstreamrequest.h"
#include "getstreamingsessionstreamresponse.h"
#include "getstudiorequest.h"
#include "getstudioresponse.h"
#include "getstudiocomponentrequest.h"
#include "getstudiocomponentresponse.h"
#include "getstudiomemberrequest.h"
#include "getstudiomemberresponse.h"
#include "listeulaacceptancesrequest.h"
#include "listeulaacceptancesresponse.h"
#include "listeulasrequest.h"
#include "listeulasresponse.h"
#include "listlaunchprofilemembersrequest.h"
#include "listlaunchprofilemembersresponse.h"
#include "listlaunchprofilesrequest.h"
#include "listlaunchprofilesresponse.h"
#include "liststreamingimagesrequest.h"
#include "liststreamingimagesresponse.h"
#include "liststreamingsessionsrequest.h"
#include "liststreamingsessionsresponse.h"
#include "liststudiocomponentsrequest.h"
#include "liststudiocomponentsresponse.h"
#include "liststudiomembersrequest.h"
#include "liststudiomembersresponse.h"
#include "liststudiosrequest.h"
#include "liststudiosresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putlaunchprofilemembersrequest.h"
#include "putlaunchprofilemembersresponse.h"
#include "putstudiomembersrequest.h"
#include "putstudiomembersresponse.h"
#include "startstudiossoconfigurationrepairrequest.h"
#include "startstudiossoconfigurationrepairresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatelaunchprofilerequest.h"
#include "updatelaunchprofileresponse.h"
#include "updatelaunchprofilememberrequest.h"
#include "updatelaunchprofilememberresponse.h"
#include "updatestreamingimagerequest.h"
#include "updatestreamingimageresponse.h"
#include "updatestudiorequest.h"
#include "updatestudioresponse.h"
#include "updatestudiocomponentrequest.h"
#include "updatestudiocomponentresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::NimbleStudio
 * \brief Contains classess for accessing AmazonNimbleStudio.
 *
 * \inmodule QtAwsNimbleStudio
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::NimbleStudioClient
 * \brief The NimbleStudioClient class provides access to the AmazonNimbleStudio service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNimbleStudio
 *
 */

/*!
 * \brief Constructs a NimbleStudioClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
NimbleStudioClient::NimbleStudioClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NimbleStudioClientPrivate(this), parent)
{
    Q_D(NimbleStudioClient);
    d->apiVersion = QStringLiteral("2020-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("nimble");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AmazonNimbleStudio");
    d->serviceName = QStringLiteral("nimble");
}

/*!
 * \overload NimbleStudioClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
NimbleStudioClient::NimbleStudioClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NimbleStudioClientPrivate(this), parent)
{
    Q_D(NimbleStudioClient);
    d->apiVersion = QStringLiteral("2020-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("nimble");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AmazonNimbleStudio");
    d->serviceName = QStringLiteral("nimble");
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * AcceptEulasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accept
 */
AcceptEulasResponse * NimbleStudioClient::acceptEulas(const AcceptEulasRequest &request)
{
    return qobject_cast<AcceptEulasResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * CreateLaunchProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a launch
 */
CreateLaunchProfileResponse * NimbleStudioClient::createLaunchProfile(const CreateLaunchProfileRequest &request)
{
    return qobject_cast<CreateLaunchProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * CreateStreamingImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a streaming image resource in a
 */
CreateStreamingImageResponse * NimbleStudioClient::createStreamingImage(const CreateStreamingImageRequest &request)
{
    return qobject_cast<CreateStreamingImageResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * CreateStreamingSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a streaming session in a
 *
 * studio>
 *
 * After invoking this operation, you must poll GetStreamingSession until the streaming session is in state
 */
CreateStreamingSessionResponse * NimbleStudioClient::createStreamingSession(const CreateStreamingSessionRequest &request)
{
    return qobject_cast<CreateStreamingSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * CreateStreamingSessionStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a streaming session stream for a streaming
 *
 * session>
 *
 * After invoking this API, invoke GetStreamingSessionStream with the returned streamId to poll the resource until it is in
 * state
 */
CreateStreamingSessionStreamResponse * NimbleStudioClient::createStreamingSessionStream(const CreateStreamingSessionStreamRequest &request)
{
    return qobject_cast<CreateStreamingSessionStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * CreateStudioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new
 *
 * Studio>
 *
 * When creating a Studio, two IAM roles must be provided: the admin role and the user Role. These roles are assumed by
 * your users when they log in to the Nimble Studio
 *
 * portal>
 *
 * The user role must have the AmazonNimbleStudio-StudioUser managed policy attached for the portal to function
 *
 * properly>
 *
 * The Admin Role must have the AmazonNimbleStudio-StudioAdmin managed policy attached for the portal to function
 *
 * properly>
 *
 * You may optionally specify a KMS key in the
 *
 * StudioEncryptionConfiguration>
 *
 * In Nimble Studio, resource names, descriptions, initialization scripts, and other data you provide are always encrypted
 * at rest using an AWS KMS key. By default, this key is owned by AWS and managed on your behalf. You may provide your own
 * AWS KMS key when calling CreateStudio to encrypt this data using a key you own and
 *
 * manage>
 *
 * When providing an AWS KMS key during studio creation, Nimble Studio creates KMS grants in your account to provide your
 * studio user and admin roles access to these KMS
 *
 * keys>
 *
 * If you delete this grant, the studio will no longer be accessible to your portal
 *
 * users>
 *
 * If you delete the studio KMS key, your studio will no longer be
 */
CreateStudioResponse * NimbleStudioClient::createStudio(const CreateStudioRequest &request)
{
    return qobject_cast<CreateStudioResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * CreateStudioComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a studio component
 */
CreateStudioComponentResponse * NimbleStudioClient::createStudioComponent(const CreateStudioComponentRequest &request)
{
    return qobject_cast<CreateStudioComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteLaunchProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently delete a launch
 */
DeleteLaunchProfileResponse * NimbleStudioClient::deleteLaunchProfile(const DeleteLaunchProfileRequest &request)
{
    return qobject_cast<DeleteLaunchProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteLaunchProfileMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a user from launch profile
 */
DeleteLaunchProfileMemberResponse * NimbleStudioClient::deleteLaunchProfileMember(const DeleteLaunchProfileMemberRequest &request)
{
    return qobject_cast<DeleteLaunchProfileMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteStreamingImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete streaming
 */
DeleteStreamingImageResponse * NimbleStudioClient::deleteStreamingImage(const DeleteStreamingImageRequest &request)
{
    return qobject_cast<DeleteStreamingImageResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteStreamingSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes streaming session
 *
 * resource>
 *
 * After invoking this operation, use GetStreamingSession to poll the resource until it transitions to a DELETED
 *
 * state>
 *
 * A streaming session will count against your streaming session quota until it is marked
 */
DeleteStreamingSessionResponse * NimbleStudioClient::deleteStreamingSession(const DeleteStreamingSessionRequest &request)
{
    return qobject_cast<DeleteStreamingSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteStudioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a studio
 */
DeleteStudioResponse * NimbleStudioClient::deleteStudio(const DeleteStudioRequest &request)
{
    return qobject_cast<DeleteStudioResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteStudioComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a studio component
 */
DeleteStudioComponentResponse * NimbleStudioClient::deleteStudioComponent(const DeleteStudioComponentRequest &request)
{
    return qobject_cast<DeleteStudioComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * DeleteStudioMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a user from studio
 */
DeleteStudioMemberResponse * NimbleStudioClient::deleteStudioMember(const DeleteStudioMemberRequest &request)
{
    return qobject_cast<DeleteStudioMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetEulaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get
 */
GetEulaResponse * NimbleStudioClient::getEula(const GetEulaRequest &request)
{
    return qobject_cast<GetEulaResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetLaunchProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a launch
 */
GetLaunchProfileResponse * NimbleStudioClient::getLaunchProfile(const GetLaunchProfileRequest &request)
{
    return qobject_cast<GetLaunchProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetLaunchProfileDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launch profile details include the launch profile resource and summary information of resources that are used by, or
 * available to, the launch profile. This includes the name and description of all studio components used by the launch
 * profiles, and the name and description of streaming images that can be used with this launch
 */
GetLaunchProfileDetailsResponse * NimbleStudioClient::getLaunchProfileDetails(const GetLaunchProfileDetailsRequest &request)
{
    return qobject_cast<GetLaunchProfileDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetLaunchProfileInitializationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a launch profile
 */
GetLaunchProfileInitializationResponse * NimbleStudioClient::getLaunchProfileInitialization(const GetLaunchProfileInitializationRequest &request)
{
    return qobject_cast<GetLaunchProfileInitializationResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetLaunchProfileMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a user persona in launch profile
 */
GetLaunchProfileMemberResponse * NimbleStudioClient::getLaunchProfileMember(const GetLaunchProfileMemberRequest &request)
{
    return qobject_cast<GetLaunchProfileMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetStreamingImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get streaming
 */
GetStreamingImageResponse * NimbleStudioClient::getStreamingImage(const GetStreamingImageRequest &request)
{
    return qobject_cast<GetStreamingImageResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetStreamingSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets StreamingSession
 *
 * resource>
 *
 * Invoke this operation to poll for a streaming session state while creating or deleting a
 */
GetStreamingSessionResponse * NimbleStudioClient::getStreamingSession(const GetStreamingSessionRequest &request)
{
    return qobject_cast<GetStreamingSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetStreamingSessionStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a StreamingSessionStream for a streaming
 *
 * session>
 *
 * Invoke this operation to poll the resource after invoking
 *
 * CreateStreamingSessionStream>
 *
 * After the StreamingSessionStream changes to the state READY, the url property will contain a stream to be used with the
 * DCV streaming
 */
GetStreamingSessionStreamResponse * NimbleStudioClient::getStreamingSessionStream(const GetStreamingSessionStreamRequest &request)
{
    return qobject_cast<GetStreamingSessionStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetStudioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a Studio
 */
GetStudioResponse * NimbleStudioClient::getStudio(const GetStudioRequest &request)
{
    return qobject_cast<GetStudioResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetStudioComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a studio component
 */
GetStudioComponentResponse * NimbleStudioClient::getStudioComponent(const GetStudioComponentRequest &request)
{
    return qobject_cast<GetStudioComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * GetStudioMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get a user's membership in a
 */
GetStudioMemberResponse * NimbleStudioClient::getStudioMember(const GetStudioMemberRequest &request)
{
    return qobject_cast<GetStudioMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListEulaAcceptancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List Eula
 */
ListEulaAcceptancesResponse * NimbleStudioClient::listEulaAcceptances(const ListEulaAcceptancesRequest &request)
{
    return qobject_cast<ListEulaAcceptancesResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListEulasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List
 */
ListEulasResponse * NimbleStudioClient::listEulas(const ListEulasRequest &request)
{
    return qobject_cast<ListEulasResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListLaunchProfileMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get all users in a given launch profile
 */
ListLaunchProfileMembersResponse * NimbleStudioClient::listLaunchProfileMembers(const ListLaunchProfileMembersRequest &request)
{
    return qobject_cast<ListLaunchProfileMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListLaunchProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all the launch profiles a
 */
ListLaunchProfilesResponse * NimbleStudioClient::listLaunchProfiles(const ListLaunchProfilesRequest &request)
{
    return qobject_cast<ListLaunchProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListStreamingImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the streaming image resources available to this
 *
 * studio>
 *
 * This list will contain both images provided by AWS, as well as streaming images that you have created in your
 */
ListStreamingImagesResponse * NimbleStudioClient::listStreamingImages(const ListStreamingImagesRequest &request)
{
    return qobject_cast<ListStreamingImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListStreamingSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the streaming image resources in a
 */
ListStreamingSessionsResponse * NimbleStudioClient::listStreamingSessions(const ListStreamingSessionsRequest &request)
{
    return qobject_cast<ListStreamingSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListStudioComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the StudioComponents in a
 */
ListStudioComponentsResponse * NimbleStudioClient::listStudioComponents(const ListStudioComponentsRequest &request)
{
    return qobject_cast<ListStudioComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListStudioMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get all users in a given studio
 */
ListStudioMembersResponse * NimbleStudioClient::listStudioMembers(const ListStudioMembersRequest &request)
{
    return qobject_cast<ListStudioMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListStudiosResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List studios in your AWS account in the requested AWS
 */
ListStudiosResponse * NimbleStudioClient::listStudios(const ListStudiosRequest &request)
{
    return qobject_cast<ListStudiosResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the tags for a resource, given its Amazon Resource Names
 *
 * (ARN)>
 *
 * This operation supports ARNs for all resource types in Nimble Studio that support tags, including studio, studio
 * component, launch profile, streaming image, and streaming session. All resources that can be tagged will contain an ARN
 * property, so you do not have to create this ARN
 */
ListTagsForResourceResponse * NimbleStudioClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * PutLaunchProfileMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add/update users with given persona to launch profile
 */
PutLaunchProfileMembersResponse * NimbleStudioClient::putLaunchProfileMembers(const PutLaunchProfileMembersRequest &request)
{
    return qobject_cast<PutLaunchProfileMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * PutStudioMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add/update users with given persona to studio
 */
PutStudioMembersResponse * NimbleStudioClient::putStudioMembers(const PutStudioMembersRequest &request)
{
    return qobject_cast<PutStudioMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * StartStudioSSOConfigurationRepairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Repairs the SSO configuration for a given
 *
 * studio>
 *
 * If the studio has a valid AWS SSO configuration currently associated with it, this operation will fail with a validation
 *
 * error>
 *
 * If the studio does not have a valid AWS SSO configuration currently associated with it, then a new AWS SSO application
 * is created for the studio and the studio is changed to the READY
 *
 * state>
 *
 * After the AWS SSO application is repaired, you must use the Amazon Nimble Studio console to add administrators and users
 * to your
 */
StartStudioSSOConfigurationRepairResponse * NimbleStudioClient::startStudioSSOConfigurationRepair(const StartStudioSSOConfigurationRepairRequest &request)
{
    return qobject_cast<StartStudioSSOConfigurationRepairResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates tags for a resource, given its
 */
TagResourceResponse * NimbleStudioClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the tags for a
 */
UntagResourceResponse * NimbleStudioClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * UpdateLaunchProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a launch
 */
UpdateLaunchProfileResponse * NimbleStudioClient::updateLaunchProfile(const UpdateLaunchProfileRequest &request)
{
    return qobject_cast<UpdateLaunchProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * UpdateLaunchProfileMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a user persona in launch profile
 */
UpdateLaunchProfileMemberResponse * NimbleStudioClient::updateLaunchProfileMember(const UpdateLaunchProfileMemberRequest &request)
{
    return qobject_cast<UpdateLaunchProfileMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * UpdateStreamingImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update streaming
 */
UpdateStreamingImageResponse * NimbleStudioClient::updateStreamingImage(const UpdateStreamingImageRequest &request)
{
    return qobject_cast<UpdateStreamingImageResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * UpdateStudioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a Studio
 *
 * resource>
 *
 * Currently, this operation only supports updating the displayName of your
 */
UpdateStudioResponse * NimbleStudioClient::updateStudio(const UpdateStudioRequest &request)
{
    return qobject_cast<UpdateStudioResponse *>(send(request));
}

/*!
 * Sends \a request to the NimbleStudioClient service, and returns a pointer to an
 * UpdateStudioComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a studio component
 */
UpdateStudioComponentResponse * NimbleStudioClient::updateStudioComponent(const UpdateStudioComponentRequest &request)
{
    return qobject_cast<UpdateStudioComponentResponse *>(send(request));
}

/*!
 * \class QtAws::NimbleStudio::NimbleStudioClientPrivate
 * \brief The NimbleStudioClientPrivate class provides private implementation for NimbleStudioClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a NimbleStudioClientPrivate object with public implementation \a q.
 */
NimbleStudioClientPrivate::NimbleStudioClientPrivate(NimbleStudioClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace NimbleStudio
} // namespace QtAws
