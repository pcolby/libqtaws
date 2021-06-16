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

#ifndef QTAWS_SSMCONTACTSREQUEST_H
#define QTAWS_SSMCONTACTSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SSMContacts {

class SSMContactsRequestPrivate;

class QTAWS_EXPORT SSMContactsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SSMContacts.
    enum Action {
        AcceptPageAction,
        ActivateContactChannelAction,
        CreateContactAction,
        CreateContactChannelAction,
        DeactivateContactChannelAction,
        DeleteContactAction,
        DeleteContactChannelAction,
        DescribeEngagementAction,
        DescribePageAction,
        GetContactAction,
        GetContactChannelAction,
        GetContactPolicyAction,
        ListContactChannelsAction,
        ListContactsAction,
        ListEngagementsAction,
        ListPageReceiptsAction,
        ListPagesByContactAction,
        ListPagesByEngagementAction,
        ListTagsForResourceAction,
        PutContactPolicyAction,
        SendActivationCodeAction,
        StartEngagementAction,
        StopEngagementAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateContactAction,
        UpdateContactChannelAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SSMContactsRequest(const Action action);
    SSMContactsRequest(const SSMContactsRequest &other);
    SSMContactsRequest &operator=(const SSMContactsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SSMContactsRequest &other) const;


protected:
    /// @cond internal
    SSMContactsRequest(SSMContactsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SSMContactsRequest)

};

} // namespace SSMContacts
} // namespace QtAws

#endif
