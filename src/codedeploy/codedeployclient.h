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

#ifndef QTAWS_CODEDEPLOYCLIENT_H
#define QTAWS_CODEDEPLOYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace QtAws {
namespace CodeDeploy {

class CodeDeployClientPrivate;
class AddTagsToOnPremisesInstancesRequest;
class AddTagsToOnPremisesInstancesResponse;
class BatchGetApplicationRevisionsRequest;
class BatchGetApplicationRevisionsResponse;
class BatchGetApplicationsRequest;
class BatchGetApplicationsResponse;
class BatchGetDeploymentGroupsRequest;
class BatchGetDeploymentGroupsResponse;
class BatchGetDeploymentInstancesRequest;
class BatchGetDeploymentInstancesResponse;
class BatchGetDeploymentsRequest;
class BatchGetDeploymentsResponse;
class BatchGetOnPremisesInstancesRequest;
class BatchGetOnPremisesInstancesResponse;
class ContinueDeploymentRequest;
class ContinueDeploymentResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateDeploymentConfigRequest;
class CreateDeploymentConfigResponse;
class CreateDeploymentGroupRequest;
class CreateDeploymentGroupResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteDeploymentConfigRequest;
class DeleteDeploymentConfigResponse;
class DeleteDeploymentGroupRequest;
class DeleteDeploymentGroupResponse;
class DeleteGitHubAccountTokenRequest;
class DeleteGitHubAccountTokenResponse;
class DeregisterOnPremisesInstanceRequest;
class DeregisterOnPremisesInstanceResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetApplicationRevisionRequest;
class GetApplicationRevisionResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class GetDeploymentConfigRequest;
class GetDeploymentConfigResponse;
class GetDeploymentGroupRequest;
class GetDeploymentGroupResponse;
class GetDeploymentInstanceRequest;
class GetDeploymentInstanceResponse;
class GetOnPremisesInstanceRequest;
class GetOnPremisesInstanceResponse;
class ListApplicationRevisionsRequest;
class ListApplicationRevisionsResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListDeploymentConfigsRequest;
class ListDeploymentConfigsResponse;
class ListDeploymentGroupsRequest;
class ListDeploymentGroupsResponse;
class ListDeploymentInstancesRequest;
class ListDeploymentInstancesResponse;
class ListDeploymentsRequest;
class ListDeploymentsResponse;
class ListGitHubAccountTokenNamesRequest;
class ListGitHubAccountTokenNamesResponse;
class ListOnPremisesInstancesRequest;
class ListOnPremisesInstancesResponse;
class PutLifecycleEventHookExecutionStatusRequest;
class PutLifecycleEventHookExecutionStatusResponse;
class RegisterApplicationRevisionRequest;
class RegisterApplicationRevisionResponse;
class RegisterOnPremisesInstanceRequest;
class RegisterOnPremisesInstanceResponse;
class RemoveTagsFromOnPremisesInstancesRequest;
class RemoveTagsFromOnPremisesInstancesResponse;
class SkipWaitTimeForInstanceTerminationRequest;
class SkipWaitTimeForInstanceTerminationResponse;
class StopDeploymentRequest;
class StopDeploymentResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateDeploymentGroupRequest;
class UpdateDeploymentGroupResponse;

class QTAWS_EXPORT CodeDeployClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodeDeployClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeDeployClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToOnPremisesInstancesResponse * addTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest &request);
    BatchGetApplicationRevisionsResponse * batchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest &request);
    BatchGetApplicationsResponse * batchGetApplications(const BatchGetApplicationsRequest &request);
    BatchGetDeploymentGroupsResponse * batchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest &request);
    BatchGetDeploymentInstancesResponse * batchGetDeploymentInstances(const BatchGetDeploymentInstancesRequest &request);
    BatchGetDeploymentsResponse * batchGetDeployments(const BatchGetDeploymentsRequest &request);
    BatchGetOnPremisesInstancesResponse * batchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest &request);
    ContinueDeploymentResponse * continueDeployment(const ContinueDeploymentRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDeploymentConfigResponse * createDeploymentConfig(const CreateDeploymentConfigRequest &request);
    CreateDeploymentGroupResponse * createDeploymentGroup(const CreateDeploymentGroupRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteDeploymentConfigResponse * deleteDeploymentConfig(const DeleteDeploymentConfigRequest &request);
    DeleteDeploymentGroupResponse * deleteDeploymentGroup(const DeleteDeploymentGroupRequest &request);
    DeleteGitHubAccountTokenResponse * deleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest &request);
    DeregisterOnPremisesInstanceResponse * deregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetApplicationRevisionResponse * getApplicationRevision(const GetApplicationRevisionRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetDeploymentConfigResponse * getDeploymentConfig(const GetDeploymentConfigRequest &request);
    GetDeploymentGroupResponse * getDeploymentGroup(const GetDeploymentGroupRequest &request);
    GetDeploymentInstanceResponse * getDeploymentInstance(const GetDeploymentInstanceRequest &request);
    GetOnPremisesInstanceResponse * getOnPremisesInstance(const GetOnPremisesInstanceRequest &request);
    ListApplicationRevisionsResponse * listApplicationRevisions(const ListApplicationRevisionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListDeploymentConfigsResponse * listDeploymentConfigs(const ListDeploymentConfigsRequest &request);
    ListDeploymentGroupsResponse * listDeploymentGroups(const ListDeploymentGroupsRequest &request);
    ListDeploymentInstancesResponse * listDeploymentInstances(const ListDeploymentInstancesRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListGitHubAccountTokenNamesResponse * listGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest &request);
    ListOnPremisesInstancesResponse * listOnPremisesInstances(const ListOnPremisesInstancesRequest &request);
    PutLifecycleEventHookExecutionStatusResponse * putLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest &request);
    RegisterApplicationRevisionResponse * registerApplicationRevision(const RegisterApplicationRevisionRequest &request);
    RegisterOnPremisesInstanceResponse * registerOnPremisesInstance(const RegisterOnPremisesInstanceRequest &request);
    RemoveTagsFromOnPremisesInstancesResponse * removeTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest &request);
    SkipWaitTimeForInstanceTerminationResponse * skipWaitTimeForInstanceTermination(const SkipWaitTimeForInstanceTerminationRequest &request);
    StopDeploymentResponse * stopDeployment(const StopDeploymentRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateDeploymentGroupResponse * updateDeploymentGroup(const UpdateDeploymentGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeDeployClient)
    Q_DISABLE_COPY(CodeDeployClient)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
