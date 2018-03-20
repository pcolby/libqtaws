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

#ifndef QTAWS_CODESTARCLIENT_H
#define QTAWS_CODESTARCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CodeStar {

class CodeStarClientPrivate;
class AssociateTeamMemberResponse;
class CreateProjectResponse;
class CreateUserProfileResponse;
class DeleteProjectResponse;
class DeleteUserProfileResponse;
class DescribeProjectResponse;
class DescribeUserProfileResponse;
class DisassociateTeamMemberResponse;
class ListProjectsResponse;
class ListResourcesResponse;
class ListTagsForProjectResponse;
class ListTeamMembersResponse;
class ListUserProfilesResponse;
class TagProjectResponse;
class UntagProjectResponse;
class UpdateProjectResponse;
class UpdateTeamMemberResponse;
class UpdateUserProfileResponse;

class QTAWS_EXPORT CodeStarClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodeStarClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeStarClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateTeamMemberResponse * associateTeamMember(const AssociateTeamMemberRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateUserProfileResponse * createUserProfile(const CreateUserProfileRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteUserProfileResponse * deleteUserProfile(const DeleteUserProfileRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DescribeUserProfileResponse * describeUserProfile(const DescribeUserProfileRequest &request);
    DisassociateTeamMemberResponse * disassociateTeamMember(const DisassociateTeamMemberRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListTagsForProjectResponse * listTagsForProject(const ListTagsForProjectRequest &request);
    ListTeamMembersResponse * listTeamMembers(const ListTeamMembersRequest &request);
    ListUserProfilesResponse * listUserProfiles(const ListUserProfilesRequest &request);
    TagProjectResponse * tagProject(const TagProjectRequest &request);
    UntagProjectResponse * untagProject(const UntagProjectRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateTeamMemberResponse * updateTeamMember(const UpdateTeamMemberRequest &request);
    UpdateUserProfileResponse * updateUserProfile(const UpdateUserProfileRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeStarClient)
    Q_DISABLE_COPY(CodeStarClient)

};

} // namespace CodeStar
} // namespace AWS

#endif