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

#include "kmsclient.h"
#include "kmsclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelkeydeletionrequest.h"
#include "cancelkeydeletionresponse.h"
#include "connectcustomkeystorerequest.h"
#include "connectcustomkeystoreresponse.h"
#include "createaliasrequest.h"
#include "createaliasresponse.h"
#include "createcustomkeystorerequest.h"
#include "createcustomkeystoreresponse.h"
#include "creategrantrequest.h"
#include "creategrantresponse.h"
#include "createkeyrequest.h"
#include "createkeyresponse.h"
#include "decryptrequest.h"
#include "decryptresponse.h"
#include "deletealiasrequest.h"
#include "deletealiasresponse.h"
#include "deletecustomkeystorerequest.h"
#include "deletecustomkeystoreresponse.h"
#include "deleteimportedkeymaterialrequest.h"
#include "deleteimportedkeymaterialresponse.h"
#include "describecustomkeystoresrequest.h"
#include "describecustomkeystoresresponse.h"
#include "describekeyrequest.h"
#include "describekeyresponse.h"
#include "disablekeyrequest.h"
#include "disablekeyresponse.h"
#include "disablekeyrotationrequest.h"
#include "disablekeyrotationresponse.h"
#include "disconnectcustomkeystorerequest.h"
#include "disconnectcustomkeystoreresponse.h"
#include "enablekeyrequest.h"
#include "enablekeyresponse.h"
#include "enablekeyrotationrequest.h"
#include "enablekeyrotationresponse.h"
#include "encryptrequest.h"
#include "encryptresponse.h"
#include "generatedatakeyrequest.h"
#include "generatedatakeyresponse.h"
#include "generatedatakeypairrequest.h"
#include "generatedatakeypairresponse.h"
#include "generatedatakeypairwithoutplaintextrequest.h"
#include "generatedatakeypairwithoutplaintextresponse.h"
#include "generatedatakeywithoutplaintextrequest.h"
#include "generatedatakeywithoutplaintextresponse.h"
#include "generaterandomrequest.h"
#include "generaterandomresponse.h"
#include "getkeypolicyrequest.h"
#include "getkeypolicyresponse.h"
#include "getkeyrotationstatusrequest.h"
#include "getkeyrotationstatusresponse.h"
#include "getparametersforimportrequest.h"
#include "getparametersforimportresponse.h"
#include "getpublickeyrequest.h"
#include "getpublickeyresponse.h"
#include "importkeymaterialrequest.h"
#include "importkeymaterialresponse.h"
#include "listaliasesrequest.h"
#include "listaliasesresponse.h"
#include "listgrantsrequest.h"
#include "listgrantsresponse.h"
#include "listkeypoliciesrequest.h"
#include "listkeypoliciesresponse.h"
#include "listkeysrequest.h"
#include "listkeysresponse.h"
#include "listresourcetagsrequest.h"
#include "listresourcetagsresponse.h"
#include "listretirablegrantsrequest.h"
#include "listretirablegrantsresponse.h"
#include "putkeypolicyrequest.h"
#include "putkeypolicyresponse.h"
#include "reencryptrequest.h"
#include "reencryptresponse.h"
#include "retiregrantrequest.h"
#include "retiregrantresponse.h"
#include "revokegrantrequest.h"
#include "revokegrantresponse.h"
#include "schedulekeydeletionrequest.h"
#include "schedulekeydeletionresponse.h"
#include "signrequest.h"
#include "signresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatealiasrequest.h"
#include "updatealiasresponse.h"
#include "updatecustomkeystorerequest.h"
#include "updatecustomkeystoreresponse.h"
#include "updatekeydescriptionrequest.h"
#include "updatekeydescriptionresponse.h"
#include "verifyrequest.h"
#include "verifyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::KMS
 * \brief Contains classess for accessing AWS Key Management Service (KMS).
 *
 * \inmodule QtAwsKms
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace KMS {

/*!
 * \class QtAws::KMS::KmsClient
 * \brief The KmsClient class provides access to the AWS Key Management Service (KMS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKMS
 *
 *  <fullname>AWS Key Management Service</fullname>
 * 
 *  AWS Key Management Service (AWS KMS) is an encryption and key management web service. This guide describes the AWS KMS
 *  operations that you can call programmatically. For general information about AWS KMS, see the <a
 *  href="https://docs.aws.amazon.com/kms/latest/developerguide/"> <i>AWS Key Management Service Developer Guide</i>
 * 
 *  </a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, macOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS KMS and other AWS
 *  services. For example, the SDKs take care of tasks such as signing requests (see below), managing errors, and retrying
 *  requests automatically. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend that you use the AWS SDKs to make programmatic API calls to AWS
 * 
 *  KMS>
 * 
 *  Clients must support TLS (Transport Layer Security) 1.0. We recommend TLS 1.2. Clients must also support cipher suites
 *  with Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman
 *  (ECDHE). Most modern systems such as Java 7 and later support these
 * 
 *  modes>
 * 
 *  <b>Signing Requests</b>
 * 
 *  </p
 * 
 *  Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you <i>do not</i>
 *  use your AWS account (root) access key ID and secret key for everyday work with AWS KMS. Instead, use the access key ID
 *  and secret access key for an IAM user. You can also use the AWS Security Token Service to generate temporary security
 *  credentials that you can use to sign
 * 
 *  requests>
 * 
 *  All AWS KMS operations require <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version
 * 
 *  4</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS KMS supports AWS CloudTrail, a service that logs AWS API calls and related events for your AWS account and delivers
 *  them to an Amazon S3 bucket that you specify. By using the information collected by CloudTrail, you can determine what
 *  requests were made to AWS KMS, who made the request, when it was made, and so on. To learn more about CloudTrail,
 *  including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/">AWS CloudTrail User
 * 
 *  Guide</a>>
 * 
 *  <b>Additional Resources</b>
 * 
 *  </p
 * 
 *  For more information about credentials and request signing, see the
 * 
 *  following> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a> -
 *  This topic provides general information about the types of credentials used for accessing
 * 
 *  AWS> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a> -
 *  This section of the <i>IAM User Guide</i> describes how to create and use temporary security
 * 
 *  credentials> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>
 *  - This set of topics walks you through the process of signing a request using an access key ID and a secret access
 * 
 *  key> </li> </ul>
 * 
 *  <b>Commonly Used API Operations</b>
 * 
 *  </p
 * 
 *  Of the API operations discussed in this guide, the following will prove the most useful for most applications. You will
 *  likely perform operations other than these, such as creating keys and assigning policies, by using the
 * 
 *  console> <ul> <li>
 * 
 *  <a>Encrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>Decrypt</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKey</a>
 * 
 *  </p </li> <li>
 * 
 *  <a>GenerateDataKeyWithoutPlaintext</a>
 */

/*!
 * \brief Constructs a KmsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
KmsClient::KmsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KmsClientPrivate(this), parent)
{
    Q_D(KmsClient);
    d->apiVersion = QStringLiteral("2014-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Key Management Service");
    d->serviceName = QStringLiteral("kms");
}

/*!
 * \overload KmsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
KmsClient::KmsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KmsClientPrivate(this), parent)
{
    Q_D(KmsClient);
    d->apiVersion = QStringLiteral("2014-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Key Management Service");
    d->serviceName = QStringLiteral("kms");
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CancelKeyDeletionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the deletion of a customer master key (CMK). When this operation succeeds, the key state of the CMK is
 * <code>Disabled</code>. To enable the CMK, use <a>EnableKey</a>.
 *
 * </p
 *
 * For more information about scheduling and canceling deletion of a CMK, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting Customer Master Keys</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CancelKeyDeletion</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>ScheduleKeyDeletion</a>
 */
CancelKeyDeletionResponse * KmsClient::cancelKeyDeletion(const CancelKeyDeletionRequest &request)
{
    return qobject_cast<CancelKeyDeletionResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ConnectCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Connects or reconnects a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a> to its
 * associated AWS CloudHSM
 *
 * cluster>
 *
 * The custom key store must be connected before you can create customer master keys (CMKs) in the key store or use the
 * CMKs it contains. You can disconnect and reconnect a custom key store at any
 *
 * time>
 *
 * To connect a custom key store, its associated AWS CloudHSM cluster must have at least one active HSM. To get the number
 * of active HSMs in a cluster, use the <a
 * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_DescribeClusters.html">DescribeClusters</a>
 * operation. To add HSMs to the cluster, use the <a
 * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/API_CreateHsm.html">CreateHsm</a> operation. Also, the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
 * <code>kmsuser</code> crypto user</a> (CU) must not be logged into the cluster. This prevents AWS KMS from using this
 * account to log
 *
 * in>
 *
 * The connection process can take an extended amount of time to complete; up to 20 minutes. This operation starts the
 * connection process, but it does not wait for it to complete. When it succeeds, this operation quickly returns an HTTP
 * 200 response and a JSON object with no properties. However, this response does not indicate that the custom key store is
 * connected. To get the connection state of the custom key store, use the <a>DescribeCustomKeyStores</a>
 *
 * operation>
 *
 * During the connection process, AWS KMS finds the AWS CloudHSM cluster that is associated with the custom key store,
 * creates the connection infrastructure, connects to the cluster, logs into the AWS CloudHSM client as the
 * <code>kmsuser</code> CU, and rotates its
 *
 * password>
 *
 * The <code>ConnectCustomKeyStore</code> operation might fail for various reasons. To find the reason, use the
 * <a>DescribeCustomKeyStores</a> operation and see the <code>ConnectionErrorCode</code> in the response. For help
 * interpreting the <code>ConnectionErrorCode</code>, see
 *
 * <a>CustomKeyStoresListEntry</a>>
 *
 * To fix the failure, use the <a>DisconnectCustomKeyStore</a> operation to disconnect the custom key store, correct the
 * error, use the <a>UpdateCustomKeyStore</a> operation if necessary, and then use <code>ConnectCustomKeyStore</code>
 *
 * again>
 *
 * If you are having trouble connecting or disconnecting a custom key store, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting a Custom Key Store</a> in
 * the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a custom key store in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ConnectCustomKeyStore</a>
 * (IAM
 *
 * policy>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeCustomKeyStores</a>
 *
 * </p </li> <li>
 *
 * <a>DisconnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateCustomKeyStore</a>
 */
ConnectCustomKeyStoreResponse * KmsClient::connectCustomKeyStore(const ConnectCustomKeyStoreRequest &request)
{
    return qobject_cast<ConnectCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a friendly name for a customer master key (CMK). You can use an alias to identify a CMK in the AWS KMS console,
 * in the <a>DescribeKey</a> operation and in <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
 * operations</a>, such as <a>Encrypt</a> and <a>GenerateDataKey</a>.
 *
 * </p
 *
 * You can also change the CMK that's associated with the alias (<a>UpdateAlias</a>) or delete the alias
 * (<a>DeleteAlias</a>) at any time. These operations don't affect the underlying CMK.
 *
 * </p
 *
 * You can associate the alias with any customer managed CMK in the same AWS Region. Each alias is associated with only on
 * CMK at a time, but a CMK can have multiple aliases. A valid CMK is required. You can't create an alias without a
 *
 * CMK>
 *
 * The alias must be unique in the account and Region, but you can have aliases with the same name in different Regions.
 * For detailed information about aliases, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html">Using aliases</a> in the <i>AWS Key
 * Management Service Developer
 *
 * Guide</i>>
 *
 * This operation does not return a response. To get the alias that you created, use the <a>ListAliases</a>
 *
 * operation>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on an alias in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateAlias</a>
 * on the alias (IAM
 *
 * policy)> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateAlias</a>
 * on the CMK (key
 *
 * policy)> </li> </ul>
 *
 * For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
 * access to aliases</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 */
CreateAliasResponse * KmsClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key
 * store</a> that is associated with an <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/clusters.html">AWS
 * CloudHSM cluster</a> that you own and
 *
 * manage>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * Before you create the custom key store, you must assemble the required elements, including an AWS CloudHSM cluster that
 * fulfills the requirements for a custom key store. For details about the required elements, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keystore.html#before-keystore">Assemble the
 * Prerequisites</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * When the operation completes successfully, it returns the ID of the new custom key store. Before you can use your new
 * custom key store, you need to use the <a>ConnectCustomKeyStore</a> operation to connect the new key store to its AWS
 * CloudHSM cluster. Even if you are not going to use your custom key store immediately, you might want to connect it to
 * verify that all settings are correct and then disconnect it until you are ready to use
 *
 * it>
 *
 * For help with failures, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting a Custom Key Store</a> in
 * the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a custom key store in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateCustomKeyStore</a>
 * (IAM
 *
 * policy)>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ConnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeCustomKeyStores</a>
 *
 * </p </li> <li>
 *
 * <a>DisconnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateCustomKeyStore</a>
 */
CreateCustomKeyStoreResponse * KmsClient::createCustomKeyStore(const CreateCustomKeyStoreRequest &request)
{
    return qobject_cast<CreateCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a grant to a customer master key (CMK). The grant allows the grantee principal to use the CMK when the conditions
 * specified in the grant are met. When setting permissions, grants are an alternative to key policies.
 *
 * </p
 *
 * To create a grant that allows a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
 * operation</a> only when the request includes a particular <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption context</a>, use
 * the <code>Constraints</code> parameter. For details, see
 *
 * <a>GrantConstraints</a>>
 *
 * You can create grants on symmetric and asymmetric CMKs. However, if the grant allows an operation that the CMK does not
 * support, <code>CreateGrant</code> fails with a <code>ValidationException</code>.
 *
 * </p <ul> <li>
 *
 * Grants for symmetric CMKs cannot allow operations that are not supported for symmetric CMKs, including <a>Sign</a>,
 * <a>Verify</a>, and <a>GetPublicKey</a>. (There are limited exceptions to this rule for legacy operations, but you should
 * not create a grant for an operation that AWS KMS does not
 *
 * support.> </li> <li>
 *
 * Grants for asymmetric CMKs cannot allow operations that are not supported for asymmetric CMKs, including operations that
 * <a href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GenerateDataKey">generate data keys</a> or <a
 * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GenerateDataKeyPair">data key pairs</a>, or operations
 * related to <a href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic key rotation</a>,
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported key material</a>, or CMKs
 * in <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key
 *
 * stores</a>> </li> <li>
 *
 * Grants for asymmetric CMKs with a <code>KeyUsage</code> of <code>ENCRYPT_DECRYPT</code> cannot allow the <a>Sign</a> or
 * <a>Verify</a> operations. Grants for asymmetric CMKs with a <code>KeyUsage</code> of <code>SIGN_VERIFY</code> cannot
 * allow the <a>Encrypt</a> or <a>Decrypt</a>
 *
 * operations> </li> <li>
 *
 * Grants for asymmetric CMKs cannot include an encryption context grant constraint. An encryption context is not supported
 * on asymmetric
 *
 * CMKs> </li> </ul>
 *
 * For information about symmetric and asymmetric CMKs, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using Symmetric and Asymmetric
 * CMKs</a> in the <i>AWS Key Management Service Developer Guide</i>. For more information about grants, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a> in the <i> <i>AWS Key Management
 * Service Developer Guide</i>
 *
 * </i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation on a CMK in a different AWS account, specify the key ARN in the
 * value of the <code>KeyId</code> parameter.
 *
 * </p
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateGrant</a> (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ListGrants</a>
 *
 * </p </li> <li>
 *
 * <a>ListRetirableGrants</a>
 *
 * </p </li> <li>
 *
 * <a>RetireGrant</a>
 *
 * </p </li> <li>
 *
 * <a>RevokeGrant</a>
 */
CreateGrantResponse * KmsClient::createGrant(const CreateGrantRequest &request)
{
    return qobject_cast<CreateGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * CreateKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a unique customer managed <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master-keys">customer master key</a> (CMK) in
 * your AWS account and
 *
 * Region>
 *
 * You can use the <code>CreateKey</code> operation to create symmetric or asymmetric
 *
 * CMKs> <ul> <li>
 *
 * <b>Symmetric CMKs</b> contain a 256-bit symmetric key that never leaves AWS KMS unencrypted. To use the CMK, you must
 * call AWS KMS. You can use a symmetric CMK to encrypt and decrypt small amounts of data, but they are typically used to
 * generate <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#data-keys">data keys</a> and <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#data-key-pairs">data keys pairs</a>. For
 * details, see <a>GenerateDataKey</a> and
 *
 * <a>GenerateDataKeyPair</a>> </li> <li>
 *
 * <b>Asymmetric CMKs</b> can contain an RSA key pair or an Elliptic Curve (ECC) key pair. The private key in an asymmetric
 * CMK never leaves AWS KMS unencrypted. However, you can use the <a>GetPublicKey</a> operation to download the public key
 * so it can be used outside of AWS KMS. CMKs with RSA key pairs can be used to encrypt or decrypt data or sign and verify
 * messages (but not both). CMKs with ECC key pairs can be used only to sign and verify
 *
 * messages> </li> </ul>
 *
 * For information about symmetric and asymmetric CMKs, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using Symmetric and Asymmetric
 * CMKs</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * To create different types of CMKs, use the following
 *
 * guidance> <dl> <dt>Asymmetric CMKs</dt> <dd>
 *
 * To create an asymmetric CMK, use the <code>CustomerMasterKeySpec</code> parameter to specify the type of key material in
 * the CMK. Then, use the <code>KeyUsage</code> parameter to determine whether the CMK will be used to encrypt and decrypt
 * or sign and verify. You can't change these properties after the CMK is
 *
 * created>
 *
 *
 * </p </dd> <dt>Symmetric CMKs</dt> <dd>
 *
 * When creating a symmetric CMK, you don't need to specify the <code>CustomerMasterKeySpec</code> or <code>KeyUsage</code>
 * parameters. The default value for <code>CustomerMasterKeySpec</code>, <code>SYMMETRIC_DEFAULT</code>, and the default
 * value for <code>KeyUsage</code>, <code>ENCRYPT_DECRYPT</code>, are the only valid values for symmetric CMKs.
 *
 * </p
 *
 *
 * </p </dd> <dt>Imported Key Material</dt> <dd>
 *
 * To import your own key material, begin by creating a symmetric CMK with no key material. To do this, use the
 * <code>Origin</code> parameter of <code>CreateKey</code> with a value of <code>EXTERNAL</code>. Next, use
 * <a>GetParametersForImport</a> operation to get a public key and import token, and use the public key to encrypt your key
 * material. Then, use <a>ImportKeyMaterial</a> with your import token to import the key material. For step-by-step
 * instructions, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key
 * Material</a> in the <i> <i>AWS Key Management Service Developer Guide</i> </i>. You cannot import the key material into
 * an asymmetric
 *
 * CMK>
 *
 *
 * </p </dd> <dt>Custom Key Stores</dt> <dd>
 *
 * To create a symmetric CMK in a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>, use
 * the <code>CustomKeyStoreId</code> parameter to specify the custom key store. You must also use the <code>Origin</code>
 * parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS CloudHSM cluster that is associated with the custom key
 * store must have at least two active HSMs in different Availability Zones in the AWS Region.
 *
 * </p
 *
 * You cannot create an asymmetric CMK in a custom key store. For information about custom key stores in AWS KMS see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Using Custom Key Stores</a>
 * in the <i> <i>AWS Key Management Service Developer Guide</i>
 *
 * </i>> </dd> </dl>
 *
 * <b>Cross-account use</b>: No. You cannot use this operation to create a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:CreateKey</a> (IAM
 * policy). To use the <code>Tags</code> parameter, <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a> (IAM
 * policy). For examples and information about related permissions, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/iam-policies.html#iam-policy-example-create-key">Allow a
 * user to create CMKs</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>DescribeKey</a>
 *
 * </p </li> <li>
 *
 * <a>ListKeys</a>
 *
 * </p </li> <li>
 *
 * <a>ScheduleKeyDeletion</a>
 */
CreateKeyResponse * KmsClient::createKey(const CreateKeyRequest &request)
{
    return qobject_cast<CreateKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DecryptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Decrypts ciphertext that was encrypted by a AWS KMS customer master key (CMK) using any of the following
 *
 * operations> <ul> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyWithoutPlaintext</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPairWithoutPlaintext</a>
 *
 * </p </li> </ul>
 *
 * You can use this operation to decrypt ciphertext that was encrypted under a symmetric or asymmetric CMK. When the CMK is
 * asymmetric, you must specify the CMK and the encryption algorithm that was used to encrypt the ciphertext. For
 * information about symmetric and asymmetric CMKs, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using Symmetric and Asymmetric
 * CMKs</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The Decrypt operation also decrypts ciphertext that was encrypted outside of AWS KMS by the public key in an AWS KMS
 * asymmetric CMK. However, it cannot decrypt ciphertext produced by other libraries, such as the <a
 * href="https://docs.aws.amazon.com/encryption-sdk/latest/developer-guide/">AWS Encryption SDK</a> or <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon S3 client-side
 * encryption</a>. These libraries return a ciphertext format that is incompatible with AWS
 *
 * KMS>
 *
 * If the ciphertext was encrypted under a symmetric CMK, the <code>KeyId</code> parameter is optional. AWS KMS can get
 * this information from metadata that it adds to the symmetric ciphertext blob. This feature adds durability to your
 * implementation by ensuring that authorized users can decrypt ciphertext decades after it was encrypted, even if they've
 * lost track of the CMK ID. However, specifying the CMK is always recommended as a best practice. When you use the
 * <code>KeyId</code> parameter to specify a CMK, AWS KMS only uses the CMK you specify. If the ciphertext was encrypted
 * under a different CMK, the <code>Decrypt</code> operation fails. This practice ensures that you use the CMK that you
 *
 * intend>
 *
 * Whenever possible, use key policies to give users permission to call the <code>Decrypt</code> operation on a particular
 * CMK, instead of using IAM policies. Otherwise, you might create an IAM user policy that gives the user
 * <code>Decrypt</code> permission on all CMKs. This user could decrypt ciphertext that was encrypted by CMKs in other
 * accounts if the key policy for the cross-account CMK permits it. If you must use an IAM policy for <code>Decrypt</code>
 * permissions, limit the user to particular CMKs or particular trusted accounts. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/iam-policies.html#iam-policies-best-practices">Best
 * practices for IAM policies</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. You can decrypt a ciphertext using a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Decrypt</a> (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 *
 * </p </li> <li>
 *
 * <a>ReEncrypt</a>
 */
DecryptResponse * KmsClient::decrypt(const DecryptRequest &request)
{
    return qobject_cast<DecryptResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DeleteAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified alias.
 *
 * </p
 *
 * Because an alias is not a property of a CMK, you can delete and change the aliases of a CMK without affecting the CMK.
 * Also, aliases do not appear in the response from the <a>DescribeKey</a> operation. To get the aliases of all CMKs, use
 * the <a>ListAliases</a> operation.
 *
 * </p
 *
 * Each CMK can have multiple aliases. To change the alias of a CMK, use <a>DeleteAlias</a> to delete the current alias and
 * <a>CreateAlias</a> to create a new alias. To associate an existing alias with a different customer master key (CMK),
 * call
 *
 * <a>UpdateAlias</a>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on an alias in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteAlias</a>
 * on the alias (IAM
 *
 * policy)> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteAlias</a>
 * on the CMK (key
 *
 * policy)> </li> </ul>
 *
 * For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
 * access to aliases</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 */
DeleteAliasResponse * KmsClient::deleteAlias(const DeleteAliasRequest &request)
{
    return qobject_cast<DeleteAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DeleteCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key
 * store</a>. This operation does not delete the AWS CloudHSM cluster that is associated with the custom key store, or
 * affect any users or keys in the
 *
 * cluster>
 *
 * The custom key store that you delete cannot contain any AWS KMS <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">customer master keys (CMKs)</a>.
 * Before deleting the key store, verify that you will never need to use any of the CMKs in the key store for any <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
 * operations</a>. Then, use <a>ScheduleKeyDeletion</a> to delete the AWS KMS customer master keys (CMKs) from the key
 * store. When the scheduled waiting period expires, the <code>ScheduleKeyDeletion</code> operation deletes the CMKs. Then
 * it makes a best effort to delete the key material from the associated cluster. However, you might need to manually <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-orphaned-key">delete the
 * orphaned key material</a> from the cluster and its
 *
 * backups>
 *
 * After all CMKs are deleted from AWS KMS, use <a>DisconnectCustomKeyStore</a> to disconnect the key store from AWS KMS.
 * Then, you can delete the custom key
 *
 * store>
 *
 * Instead of deleting the custom key store, consider using <a>DisconnectCustomKeyStore</a> to disconnect it from AWS KMS.
 * While the key store is disconnected, you cannot create or use the CMKs in the key store. But, you do not need to delete
 * CMKs and you can reconnect a disconnected custom key store at any
 *
 * time>
 *
 * If the operation succeeds, it returns a JSON object with no
 *
 * properties>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a custom key store in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteCustomKeyStore</a>
 * (IAM
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ConnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>CreateCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeCustomKeyStores</a>
 *
 * </p </li> <li>
 *
 * <a>DisconnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateCustomKeyStore</a>
 */
DeleteCustomKeyStoreResponse * KmsClient::deleteCustomKeyStore(const DeleteCustomKeyStoreRequest &request)
{
    return qobject_cast<DeleteCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DeleteImportedKeyMaterialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes key material that you previously imported. This operation makes the specified customer master key (CMK)
 * unusable. For more information about importing key material into AWS KMS, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the
 * <i>AWS Key Management Service Developer Guide</i>.
 *
 * </p
 *
 * When the specified CMK is in the <code>PendingDeletion</code> state, this operation does not change the CMK's state.
 * Otherwise, it changes the CMK's state to
 *
 * <code>PendingImport</code>>
 *
 * After you delete key material, you can use <a>ImportKeyMaterial</a> to reimport the same key material into the
 *
 * CMK>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DeleteImportedKeyMaterial</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>GetParametersForImport</a>
 *
 * </p </li> <li>
 *
 * <a>ImportKeyMaterial</a>
 */
DeleteImportedKeyMaterialResponse * KmsClient::deleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest &request)
{
    return qobject_cast<DeleteImportedKeyMaterialResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DescribeCustomKeyStoresResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key stores</a> in the
 * account and
 *
 * region>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * By default, this operation returns information about all custom key stores in the account and region. To get only
 * information about a particular custom key store, use either the <code>CustomKeyStoreName</code> or
 * <code>CustomKeyStoreId</code> parameter (but not
 *
 * both)>
 *
 * To determine whether the custom key store is connected to its AWS CloudHSM cluster, use the <code>ConnectionState</code>
 * element in the response. If an attempt to connect the custom key store failed, the <code>ConnectionState</code> value is
 * <code>FAILED</code> and the <code>ConnectionErrorCode</code> element in the response indicates the cause of the failure.
 * For help interpreting the <code>ConnectionErrorCode</code>, see
 *
 * <a>CustomKeyStoresListEntry</a>>
 *
 * Custom key stores have a <code>DISCONNECTED</code> connection state if the key store has never been connected or you use
 * the <a>DisconnectCustomKeyStore</a> operation to disconnect it. If your custom key store state is <code>CONNECTED</code>
 * but you are having trouble using it, make sure that its associated AWS CloudHSM cluster is active and contains the
 * minimum number of HSMs required for the operation, if
 *
 * any>
 *
 * For help repairing your custom key store, see the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html">Troubleshooting Custom Key Stores</a>
 * topic in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a custom key store in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DescribeCustomKeyStores</a>
 * (IAM
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ConnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>CreateCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DisconnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateCustomKeyStore</a>
 */
DescribeCustomKeyStoresResponse * KmsClient::describeCustomKeyStores(const DescribeCustomKeyStoresRequest &request)
{
    return qobject_cast<DescribeCustomKeyStoresResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DescribeKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides detailed information about a customer master key (CMK). You can run <code>DescribeKey</code> on a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer managed CMK</a> or an
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">AWS managed
 *
 * CMK</a>>
 *
 * This detailed information includes the key ARN, creation date (and deletion date, if applicable), the key state, and the
 * origin and expiration date (if any) of the key material. For CMKs in custom key stores, it includes information about
 * the custom key store, such as the key store ID and the AWS CloudHSM cluster ID. It includes fields, like
 * <code>KeySpec</code>, that help you distinguish symmetric from asymmetric CMKs. It also provides information that is
 * particularly important to asymmetric CMKs, such as the key usage (encryption or signing) and the encryption algorithms
 * or signing algorithms that the CMK
 *
 * supports>
 *
 * <code>DescribeKey</code> does not return the following
 *
 * information> <ul> <li>
 *
 * Aliases associated with the CMK. To get this information, use
 *
 * <a>ListAliases</a>> </li> <li>
 *
 * Whether automatic key rotation is enabled on the CMK. To get this information, use <a>GetKeyRotationStatus</a>. Also,
 * some key states prevent a CMK from being automatically rotated. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotate-keys-how-it-works">How Automatic Key
 * Rotation Works</a> in <i>AWS Key Management Service Developer
 *
 * Guide</i>> </li> <li>
 *
 * Tags on the CMK. To get this information, use
 *
 * <a>ListResourceTags</a>> </li> <li>
 *
 * Key policies and grants on the CMK. To get this information, use <a>GetKeyPolicy</a> and
 *
 * <a>ListGrants</a>> </li> </ul>
 *
 * If you call the <code>DescribeKey</code> operation on a <i>predefined AWS alias</i>, that is, an AWS alias with no key
 * ID, AWS KMS creates an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">AWS
 * managed CMK</a>. Then, it associates the alias with the new CMK, and returns the <code>KeyId</code> and <code>Arn</code>
 * of the new CMK in the
 *
 * response>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DescribeKey</a> (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>GetKeyPolicy</a>
 *
 * </p </li> <li>
 *
 * <a>GetKeyRotationStatus</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>ListGrants</a>
 *
 * </p </li> <li>
 *
 * <a>ListKeys</a>
 *
 * </p </li> <li>
 *
 * <a>ListResourceTags</a>
 *
 * </p </li> <li>
 *
 * <a>ListRetirableGrants</a>
 */
DescribeKeyResponse * KmsClient::describeKey(const DescribeKeyRequest &request)
{
    return qobject_cast<DescribeKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DisableKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the state of a customer master key (CMK) to disabled. This change temporarily prevents use of the CMK for <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
 * operations</a>.
 *
 * </p
 *
 * For more information about how key state affects the use of a CMK, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects the Use of a Customer
 * Master Key</a> in the <i> <i>AWS Key Management Service Developer Guide</i>
 *
 * </i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DisableKey</a> (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>EnableKey</a>
 */
DisableKeyResponse * KmsClient::disableKey(const DisableKeyRequest &request)
{
    return qobject_cast<DisableKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DisableKeyRotationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables <a href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic rotation of the key
 * material</a> for the specified symmetric customer master key
 *
 * (CMK)>
 *
 * You cannot enable automatic rotation of asymmetric CMKs, CMKs with imported key material, or CMKs in a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>.
 *
 * </p
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DisableKeyRotation</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>EnableKeyRotation</a>
 *
 * </p </li> <li>
 *
 * <a>GetKeyRotationStatus</a>
 */
DisableKeyRotationResponse * KmsClient::disableKeyRotation(const DisableKeyRotationRequest &request)
{
    return qobject_cast<DisableKeyRotationResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * DisconnectCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects the <a href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
 * key store</a> from its associated AWS CloudHSM cluster. While a custom key store is disconnected, you can manage the
 * custom key store and its customer master keys (CMKs), but you cannot create or use CMKs in the custom key store. You can
 * reconnect the custom key store at any
 *
 * time> <note>
 *
 * While a custom key store is disconnected, all attempts to create customer master keys (CMKs) in the custom key store or
 * to use existing CMKs in <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
 * operations</a> will fail. This action can prevent users from storing and accessing sensitive
 *
 * data> </note> <p/>
 *
 * To find the connection state of a custom key store, use the <a>DescribeCustomKeyStores</a> operation. To reconnect a
 * custom key store, use the <a>ConnectCustomKeyStore</a>
 *
 * operation>
 *
 * If the operation succeeds, it returns a JSON object with no
 *
 * properties>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a custom key store in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:DisconnectCustomKeyStore</a>
 * (IAM
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ConnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>CreateCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeCustomKeyStores</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateCustomKeyStore</a>
 */
DisconnectCustomKeyStoreResponse * KmsClient::disconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest &request)
{
    return qobject_cast<DisconnectCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * EnableKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the key state of a customer master key (CMK) to enabled. This allows you to use the CMK for <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
 * operations</a>.
 *
 * </p
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:EnableKey</a> (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>DisableKey</a>
 */
EnableKeyResponse * KmsClient::enableKey(const EnableKeyRequest &request)
{
    return qobject_cast<EnableKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * EnableKeyRotationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables <a href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic rotation of the key
 * material</a> for the specified symmetric customer master key
 *
 * (CMK)>
 *
 * You cannot enable automatic rotation of asymmetric CMKs, CMKs with imported key material, or CMKs in a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key
 *
 * store</a>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:EnableKeyRotation</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>DisableKeyRotation</a>
 *
 * </p </li> <li>
 *
 * <a>GetKeyRotationStatus</a>
 */
EnableKeyRotationResponse * KmsClient::enableKeyRotation(const EnableKeyRotationRequest &request)
{
    return qobject_cast<EnableKeyRotationResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * EncryptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Encrypts plaintext into ciphertext by using a customer master key (CMK). The <code>Encrypt</code> operation has two
 * primary use
 *
 * cases> <ul> <li>
 *
 * You can encrypt small amounts of arbitrary data, such as a personal identifier or database password, or other sensitive
 * information.
 *
 * </p </li> <li>
 *
 * You can use the <code>Encrypt</code> operation to move encrypted data from one AWS Region to another. For example, in
 * Region A, generate a data key and use the plaintext key to encrypt your data. Then, in Region A, use the
 * <code>Encrypt</code> operation to encrypt the plaintext data key under a CMK in Region B. Now, you can move the
 * encrypted data and the encrypted data key to Region B. When necessary, you can decrypt the encrypted data key and the
 * encrypted data entirely within in Region
 *
 * B> </li> </ul>
 *
 * You don't need to use the <code>Encrypt</code> operation to encrypt a data key. The <a>GenerateDataKey</a> and
 * <a>GenerateDataKeyPair</a> operations return a plaintext data key and an encrypted copy of that data
 *
 * key>
 *
 * When you encrypt data, you must specify a symmetric or asymmetric CMK to use in the encryption operation. The CMK must
 * have a <code>KeyUsage</code> value of <code>ENCRYPT_DECRYPT.</code> To find the <code>KeyUsage</code> of a CMK, use the
 * <a>DescribeKey</a> operation.
 *
 * </p
 *
 * If you use a symmetric CMK, you can use an encryption context to add additional security to your encryption operation.
 * If you specify an <code>EncryptionContext</code> when encrypting data, you must specify the same encryption context (a
 * case-sensitive exact match) when decrypting the data. Otherwise, the request to decrypt fails with an
 * <code>InvalidCiphertextException</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * If you specify an asymmetric CMK, you must also specify the encryption algorithm. The algorithm must be compatible with
 * the CMK
 *
 * type> <b>
 *
 * When you use an asymmetric CMK to encrypt or reencrypt data, be sure to record the CMK and encryption algorithm that you
 * choose. You will be required to provide the same CMK and encryption algorithm when you decrypt the data. If the CMK and
 * algorithm do not match the values used to encrypt the data, the decrypt operation
 *
 * fails>
 *
 * You are not required to supply the CMK ID and encryption algorithm when you decrypt with symmetric CMKs because AWS KMS
 * stores this information in the ciphertext blob. AWS KMS cannot store metadata in ciphertext generated with asymmetric
 * keys. The standard format for asymmetric key ciphertext does not include configurable
 *
 * fields> </b>
 *
 * The maximum size of the data that you can encrypt varies with the type of CMK and the encryption algorithm that you
 *
 * choose> <ul> <li>
 *
 * Symmetric
 *
 * CMK> <ul> <li>
 *
 * <code>SYMMETRIC_DEFAULT</code>: 4096
 *
 * byte> </li> </ul> </li> <li>
 *
 * <code>RSA_2048</code>
 *
 * </p <ul> <li>
 *
 * <code>RSAES_OAEP_SHA_1</code>: 214
 *
 * byte> </li> <li>
 *
 * <code>RSAES_OAEP_SHA_256</code>: 190
 *
 * byte> </li> </ul> </li> <li>
 *
 * <code>RSA_3072</code>
 *
 * </p <ul> <li>
 *
 * <code>RSAES_OAEP_SHA_1</code>: 342
 *
 * byte> </li> <li>
 *
 * <code>RSAES_OAEP_SHA_256</code>: 318
 *
 * byte> </li> </ul> </li> <li>
 *
 * <code>RSA_4096</code>
 *
 * </p <ul> <li>
 *
 * <code>RSAES_OAEP_SHA_1</code>: 470
 *
 * byte> </li> <li>
 *
 * <code>RSAES_OAEP_SHA_256</code>: 446
 *
 * byte> </li> </ul> </li> </ul>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Encrypt</a> (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 */
EncryptResponse * KmsClient::encrypt(const EncryptRequest &request)
{
    return qobject_cast<EncryptResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateDataKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a unique symmetric data key for client-side encryption. This operation returns a plaintext copy of the data
 * key and a copy that is encrypted under a customer master key (CMK) that you specify. You can use the plaintext key to
 * encrypt your data outside of AWS KMS and store the encrypted data key with the encrypted
 *
 * data>
 *
 * <code>GenerateDataKey</code> returns a unique data key for each request. The bytes in the plaintext key are not related
 * to the caller or the
 *
 * CMK>
 *
 * To generate a data key, specify the symmetric CMK that will be used to encrypt the data key. You cannot use an
 * asymmetric CMK to generate data keys. To get the type of your CMK, use the <a>DescribeKey</a> operation. You must also
 * specify the length of the data key. Use either the <code>KeySpec</code> or <code>NumberOfBytes</code> parameters (but
 * not both). For 128-bit and 256-bit data keys, use the <code>KeySpec</code> parameter.
 *
 * </p
 *
 * To get only an encrypted copy of the data key, use <a>GenerateDataKeyWithoutPlaintext</a>. To generate an asymmetric
 * data key pair, use the <a>GenerateDataKeyPair</a> or <a>GenerateDataKeyPairWithoutPlaintext</a> operation. To get a
 * cryptographically secure random byte string, use
 *
 * <a>GenerateRandom</a>>
 *
 * You can use the optional encryption context to add additional security to the encryption operation. If you specify an
 * <code>EncryptionContext</code>, you must specify the same encryption context (a case-sensitive exact match) when
 * decrypting the encrypted data key. Otherwise, the request to decrypt fails with an
 * <code>InvalidCiphertextException</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>How to use your data key</b>
 *
 * </p
 *
 * We recommend that you use the following pattern to encrypt data locally in your application. You can write your own code
 * or use a client-side encryption library, such as the <a
 * href="https://docs.aws.amazon.com/encryption-sdk/latest/developer-guide/">AWS Encryption SDK</a>, the <a
 * href="https://docs.aws.amazon.com/dynamodb-encryption-client/latest/devguide/">Amazon DynamoDB Encryption Client</a>, or
 * <a href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon S3 client-side
 * encryption</a> to do these tasks for
 *
 * you>
 *
 * To encrypt data outside of AWS
 *
 * KMS> <ol> <li>
 *
 * Use the <code>GenerateDataKey</code> operation to get a data
 *
 * key> </li> <li>
 *
 * Use the plaintext data key (in the <code>Plaintext</code> field of the response) to encrypt your data outside of AWS
 * KMS. Then erase the plaintext data key from
 *
 * memory> </li> <li>
 *
 * Store the encrypted data key (in the <code>CiphertextBlob</code> field of the response) with the encrypted
 *
 * data> </li> </ol>
 *
 * To decrypt data outside of AWS
 *
 * KMS> <ol> <li>
 *
 * Use the <a>Decrypt</a> operation to decrypt the encrypted data key. The operation returns a plaintext copy of the data
 *
 * key> </li> <li>
 *
 * Use the plaintext data key to decrypt data outside of AWS KMS, then erase the plaintext data key from
 *
 * memory> </li> </ol>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKey</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPairWithoutPlaintext</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyWithoutPlaintext</a>
 */
GenerateDataKeyResponse * KmsClient::generateDataKey(const GenerateDataKeyRequest &request)
{
    return qobject_cast<GenerateDataKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateDataKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a unique asymmetric data key pair. The <code>GenerateDataKeyPair</code> operation returns a plaintext public
 * key, a plaintext private key, and a copy of the private key that is encrypted under the symmetric CMK you specify. You
 * can use the data key pair to perform asymmetric cryptography outside of AWS
 *
 * KMS>
 *
 * <code>GenerateDataKeyPair</code> returns a unique data key pair for each request. The bytes in the keys are not related
 * to the caller or the CMK that is used to encrypt the private
 *
 * key>
 *
 * You can use the public key that <code>GenerateDataKeyPair</code> returns to encrypt data or verify a signature outside
 * of AWS KMS. Then, store the encrypted private key with the data. When you are ready to decrypt data or sign a message,
 * you can use the <a>Decrypt</a> operation to decrypt the encrypted private
 *
 * key>
 *
 * To generate a data key pair, you must specify a symmetric customer master key (CMK) to encrypt the private key in a data
 * key pair. You cannot use an asymmetric CMK or a CMK in a custom key store. To get the type and origin of your CMK, use
 * the <a>DescribeKey</a> operation.
 *
 * </p
 *
 * If you are using the data key pair to encrypt data, or for any operation where you don't immediately need a private key,
 * consider using the <a>GenerateDataKeyPairWithoutPlaintext</a> operation.
 * <code>GenerateDataKeyPairWithoutPlaintext</code> returns a plaintext public key and an encrypted private key, but omits
 * the plaintext private key that you need only to decrypt ciphertext or sign a message. Later, when you need to decrypt
 * the data or sign a message, use the <a>Decrypt</a> operation to decrypt the encrypted private key in the data key
 *
 * pair>
 *
 * You can use the optional encryption context to add additional security to the encryption operation. If you specify an
 * <code>EncryptionContext</code>, you must specify the same encryption context (a case-sensitive exact match) when
 * decrypting the encrypted data key. Otherwise, the request to decrypt fails with an
 * <code>InvalidCiphertextException</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKeyPair</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPairWithoutPlaintext</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyWithoutPlaintext</a>
 */
GenerateDataKeyPairResponse * KmsClient::generateDataKeyPair(const GenerateDataKeyPairRequest &request)
{
    return qobject_cast<GenerateDataKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateDataKeyPairWithoutPlaintextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a unique asymmetric data key pair. The <code>GenerateDataKeyPairWithoutPlaintext</code> operation returns a
 * plaintext public key and a copy of the private key that is encrypted under the symmetric CMK you specify. Unlike
 * <a>GenerateDataKeyPair</a>, this operation does not return a plaintext private key.
 *
 * </p
 *
 * To generate a data key pair, you must specify a symmetric customer master key (CMK) to encrypt the private key in the
 * data key pair. You cannot use an asymmetric CMK or a CMK in a custom key store. To get the type and origin of your CMK,
 * use the <code>KeySpec</code> field in the <a>DescribeKey</a>
 *
 * response>
 *
 * You can use the public key that <code>GenerateDataKeyPairWithoutPlaintext</code> returns to encrypt data or verify a
 * signature outside of AWS KMS. Then, store the encrypted private key with the data. When you are ready to decrypt data or
 * sign a message, you can use the <a>Decrypt</a> operation to decrypt the encrypted private
 *
 * key>
 *
 * <code>GenerateDataKeyPairWithoutPlaintext</code> returns a unique data key pair for each request. The bytes in the key
 * are not related to the caller or CMK that is used to encrypt the private
 *
 * key>
 *
 * You can use the optional encryption context to add additional security to the encryption operation. If you specify an
 * <code>EncryptionContext</code>, you must specify the same encryption context (a case-sensitive exact match) when
 * decrypting the encrypted data key. Otherwise, the request to decrypt fails with an
 * <code>InvalidCiphertextException</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKeyPairWithoutPlaintext</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyWithoutPlaintext</a>
 */
GenerateDataKeyPairWithoutPlaintextResponse * KmsClient::generateDataKeyPairWithoutPlaintext(const GenerateDataKeyPairWithoutPlaintextRequest &request)
{
    return qobject_cast<GenerateDataKeyPairWithoutPlaintextResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateDataKeyWithoutPlaintextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a unique symmetric data key. This operation returns a data key that is encrypted under a customer master key
 * (CMK) that you specify. To request an asymmetric data key pair, use the <a>GenerateDataKeyPair</a> or
 * <a>GenerateDataKeyPairWithoutPlaintext</a>
 *
 * operations>
 *
 * <code>GenerateDataKeyWithoutPlaintext</code> is identical to the <a>GenerateDataKey</a> operation except that returns
 * only the encrypted copy of the data key. This operation is useful for systems that need to encrypt data at some point,
 * but not immediately. When you need to encrypt the data, you call the <a>Decrypt</a> operation on the encrypted copy of
 * the key.
 *
 * </p
 *
 * It's also useful in distributed systems with different levels of trust. For example, you might store encrypted data in
 * containers. One component of your system creates new containers and stores an encrypted data key with each container.
 * Then, a different component puts the data into the containers. That component first decrypts the data key, uses the
 * plaintext data key to encrypt data, puts the encrypted data into the container, and then destroys the plaintext data
 * key. In this system, the component that creates the containers never sees the plaintext data
 *
 * key>
 *
 * <code>GenerateDataKeyWithoutPlaintext</code> returns a unique data key for each request. The bytes in the keys are not
 * related to the caller or CMK that is used to encrypt the private
 *
 * key>
 *
 * To generate a data key, you must specify the symmetric customer master key (CMK) that is used to encrypt the data key.
 * You cannot use an asymmetric CMK to generate a data key. To get the type of your CMK, use the <a>DescribeKey</a>
 *
 * operation>
 *
 * If the operation succeeds, you will find the encrypted copy of the data key in the <code>CiphertextBlob</code>
 *
 * field>
 *
 * You can use the optional encryption context to add additional security to the encryption operation. If you specify an
 * <code>EncryptionContext</code>, you must specify the same encryption context (a case-sensitive exact match) when
 * decrypting the encrypted data key. Otherwise, the request to decrypt fails with an
 * <code>InvalidCiphertextException</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption Context</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateDataKeyWithoutPlaintext</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPairWithoutPlaintext</a>
 */
GenerateDataKeyWithoutPlaintextResponse * KmsClient::generateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest &request)
{
    return qobject_cast<GenerateDataKeyWithoutPlaintextResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GenerateRandomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a random byte string that is cryptographically
 *
 * secure>
 *
 * By default, the random byte string is generated in AWS KMS. To generate the byte string in the AWS CloudHSM cluster that
 * is associated with a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>,
 * specify the custom key store
 *
 * ID>
 *
 * For more information about entropy and random number generation, see the <a
 * href="https://d0.awsstatic.com/whitepapers/KMS-Cryptographic-Details.pdf">AWS Key Management Service Cryptographic
 * Details</a>
 *
 * whitepaper>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GenerateRandom</a>
 * (IAM
 */
GenerateRandomResponse * KmsClient::generateRandom(const GenerateRandomRequest &request)
{
    return qobject_cast<GenerateRandomResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetKeyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a key policy attached to the specified customer master key
 *
 * (CMK)>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetKeyPolicy</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>PutKeyPolicy</a>
 */
GetKeyPolicyResponse * KmsClient::getKeyPolicy(const GetKeyPolicyRequest &request)
{
    return qobject_cast<GetKeyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetKeyRotationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a Boolean value that indicates whether <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html">automatic rotation of the key material</a>
 * is enabled for the specified customer master key
 *
 * (CMK)>
 *
 * You cannot enable automatic rotation of asymmetric CMKs, CMKs with imported key material, or CMKs in a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>. The
 * key rotation status for these CMKs is always
 *
 * <code>false</code>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>> <ul> <li>
 *
 * Disabled: The key rotation status does not change when you disable a CMK. However, while the CMK is disabled, AWS KMS
 * does not rotate the backing
 *
 * key> </li> <li>
 *
 * Pending deletion: While a CMK is pending deletion, its key rotation status is <code>false</code> and AWS KMS does not
 * rotate the backing key. If you cancel the deletion, the original key rotation status is
 *
 * restored> </li> </ul>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation on a CMK in a different AWS account, specify the key ARN in the
 * value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetKeyRotationStatus</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>DisableKeyRotation</a>
 *
 * </p </li> <li>
 *
 * <a>EnableKeyRotation</a>
 */
GetKeyRotationStatusResponse * KmsClient::getKeyRotationStatus(const GetKeyRotationStatusRequest &request)
{
    return qobject_cast<GetKeyRotationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetParametersForImportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the items you need to import key material into a symmetric, customer managed customer master key (CMK). For more
 * information about importing key material into AWS KMS, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * This operation returns a public key and an import token. Use the public key to encrypt the symmetric key material. Store
 * the import token to send with a subsequent <a>ImportKeyMaterial</a>
 *
 * request>
 *
 * You must specify the key ID of the symmetric CMK into which you will import key material. This CMK's <code>Origin</code>
 * must be <code>EXTERNAL</code>. You must also specify the wrapping algorithm and type of wrapping key (public key) that
 * you will use to encrypt the key material. You cannot perform this operation on an asymmetric CMK or on any CMK in a
 * different AWS
 *
 * account>
 *
 * To import key material, you must use the public key and import token from the same response. These items are valid for
 * 24 hours. The expiration date and time appear in the <code>GetParametersForImport</code> response. You cannot use an
 * expired token in an <a>ImportKeyMaterial</a> request. If your key and token expire, send another
 * <code>GetParametersForImport</code>
 *
 * request>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetParametersForImport</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ImportKeyMaterial</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteImportedKeyMaterial</a>
 */
GetParametersForImportResponse * KmsClient::getParametersForImport(const GetParametersForImportRequest &request)
{
    return qobject_cast<GetParametersForImportResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * GetPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the public key of an asymmetric CMK. Unlike the private key of a asymmetric CMK, which never leaves AWS KMS
 * unencrypted, callers with <code>kms:GetPublicKey</code> permission can download the public key of an asymmetric CMK. You
 * can share the public key to allow others to encrypt messages and verify signatures outside of AWS KMS. For information
 * about symmetric and asymmetric CMKs, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using Symmetric and Asymmetric
 * CMKs</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * You do not need to download the public key. Instead, you can use the public key within AWS KMS by calling the
 * <a>Encrypt</a>, <a>ReEncrypt</a>, or <a>Verify</a> operations with the identifier of an asymmetric CMK. When you use the
 * public key within AWS KMS, you benefit from the authentication, authorization, and logging that are part of every AWS
 * KMS operation. You also reduce of risk of encrypting data that cannot be decrypted. These features are not effective
 * outside of AWS KMS. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/download-public-key.html#download-public-key-considerations">Special
 * Considerations for Downloading Public
 *
 * Keys</a>>
 *
 * To help you use the public key safely outside of AWS KMS, <code>GetPublicKey</code> returns important information about
 * the public key in the response,
 *
 * including> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-CustomerMasterKeySpec">CustomerMasterKeySpec</a>:
 * The type of key material in the public key, such as <code>RSA_4096</code> or
 *
 * <code>ECC_NIST_P521</code>> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-KeyUsage">KeyUsage</a>:
 * Whether the key is used for encryption or
 *
 * signing> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-EncryptionAlgorithms">EncryptionAlgorithms</a>
 * or <a
 * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GetPublicKey.html#KMS-GetPublicKey-response-SigningAlgorithms">SigningAlgorithms</a>:
 * A list of the encryption algorithms or the signing algorithms for the
 *
 * key> </li> </ul>
 *
 * Although AWS KMS cannot enforce these restrictions on external operations, it is crucial that you use this information
 * to prevent the public key from being used improperly. For example, you can prevent a public signing key from being used
 * encrypt data, or prevent a public key from being used with an encryption algorithm that is not supported by AWS KMS. You
 * can also avoid errors, such as using the wrong signing algorithm in a verification
 *
 * operation>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:GetPublicKey</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>CreateKey</a>
 */
GetPublicKeyResponse * KmsClient::getPublicKey(const GetPublicKeyRequest &request)
{
    return qobject_cast<GetPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ImportKeyMaterialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports key material into an existing symmetric AWS KMS customer master key (CMK) that was created without key material.
 * After you successfully import key material into a CMK, you can <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html#reimport-key-material">reimport the same
 * key material</a> into that CMK, but you cannot import different key material.
 *
 * </p
 *
 * You cannot perform this operation on an asymmetric CMK or on any CMK in a different AWS account. For more information
 * about creating CMKs with no key material and then importing key material, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing Key Material</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * Before using this operation, call <a>GetParametersForImport</a>. Its response includes a public key and an import token.
 * Use the public key to encrypt the key material. Then, submit the import token from the same
 * <code>GetParametersForImport</code>
 *
 * response>
 *
 * When calling this operation, you must specify the following
 *
 * values> <ul> <li>
 *
 * The key ID or key ARN of a CMK with no key material. Its <code>Origin</code> must be
 *
 * <code>EXTERNAL</code>>
 *
 * To create a CMK with no key material, call <a>CreateKey</a> and set the value of its <code>Origin</code> parameter to
 * <code>EXTERNAL</code>. To get the <code>Origin</code> of a CMK, call
 *
 * <a>DescribeKey</a>.> </li> <li>
 *
 * The encrypted key material. To get the public key to encrypt the key material, call
 *
 * <a>GetParametersForImport</a>> </li> <li>
 *
 * The import token that <a>GetParametersForImport</a> returned. You must use a public key and token from the same
 * <code>GetParametersForImport</code>
 *
 * response> </li> <li>
 *
 * Whether the key material expires and if so, when. If you set an expiration date, AWS KMS deletes the key material from
 * the CMK on the specified date, and the CMK becomes unusable. To use the CMK again, you must reimport the same key
 * material. The only way to change an expiration date is by reimporting the same key material and specifying a new
 * expiration date.
 *
 * </p </li> </ul>
 *
 * When this operation is successful, the key state of the CMK changes from <code>PendingImport</code> to
 * <code>Enabled</code>, and you can use the
 *
 * CMK>
 *
 * If this operation fails, use the exception to help determine the problem. If the error is related to the key material,
 * the import token, or wrapping key, use <a>GetParametersForImport</a> to get a new public key and import token for the
 * CMK and repeat the import procedure. For help, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html#importing-keys-overview">How To Import
 * Key Material</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ImportKeyMaterial</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>DeleteImportedKeyMaterial</a>
 *
 * </p </li> <li>
 *
 * <a>GetParametersForImport</a>
 */
ImportKeyMaterialResponse * KmsClient::importKeyMaterial(const ImportKeyMaterialRequest &request)
{
    return qobject_cast<ImportKeyMaterialResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of aliases in the caller's AWS account and region. For more information about aliases, see
 *
 * <a>CreateAlias</a>>
 *
 * By default, the <code>ListAliases</code> operation returns all aliases in the account and region. To get only the
 * aliases associated with a particular customer master key (CMK), use the <code>KeyId</code>
 *
 * parameter>
 *
 * The <code>ListAliases</code> response can include aliases that you created and associated with your customer managed
 * CMKs, and aliases that AWS created and associated with AWS managed CMKs in your account. You can recognize AWS aliases
 * because their names have the format <code>aws/&lt;service-name&gt;</code>, such as
 *
 * <code>aws/dynamodb</code>>
 *
 * The response might also include aliases that have no <code>TargetKeyId</code> field. These are predefined aliases that
 * AWS has created but has not yet associated with a CMK. Aliases that AWS creates in your account, including predefined
 * aliases, do not count against your <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/limits.html#aliases-limit">AWS KMS aliases
 *
 * quota</a>>
 *
 * <b>Cross-account use</b>: No. <code>ListAliases</code> does not return aliases in other AWS
 *
 * accounts>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListAliases</a> (IAM
 *
 * policy>
 *
 * For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
 * access to aliases</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>UpdateAlias</a>
 */
ListAliasesResponse * KmsClient::listAliases(const ListAliasesRequest &request)
{
    return qobject_cast<ListAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all grants for the specified customer master key (CMK).
 *
 * </p
 *
 * You must specify the CMK in all requests. You can filter the grant list by grant ID or grantee
 *
 * principal> <note>
 *
 * The <code>GranteePrincipal</code> field in the <code>ListGrants</code> response usually contains the user or role
 * designated as the grantee principal in the grant. However, when the grantee principal in the grant is an AWS service,
 * the <code>GranteePrincipal</code> field contains the <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">service
 * principal</a>, which might represent several different grantee
 *
 * principals> </note>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation on a CMK in a different AWS account, specify the key ARN in the
 * value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListGrants</a> (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateGrant</a>
 *
 * </p </li> <li>
 *
 * <a>ListRetirableGrants</a>
 *
 * </p </li> <li>
 *
 * <a>RetireGrant</a>
 *
 * </p </li> <li>
 *
 * <a>RevokeGrant</a>
 */
ListGrantsResponse * KmsClient::listGrants(const ListGrantsRequest &request)
{
    return qobject_cast<ListGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListKeyPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the names of the key policies that are attached to a customer master key (CMK). This operation is designed to get
 * policy names that you can use in a <a>GetKeyPolicy</a> operation. However, the only valid policy name is
 * <code>default</code>.
 *
 * </p
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListKeyPolicies</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>GetKeyPolicy</a>
 *
 * </p </li> <li>
 *
 * <a>PutKeyPolicy</a>
 */
ListKeyPoliciesResponse * KmsClient::listKeyPolicies(const ListKeyPoliciesRequest &request)
{
    return qobject_cast<ListKeyPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListKeysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all customer master keys (CMKs) in the caller's AWS account and
 *
 * Region>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListKeys</a> (IAM
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateKey</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeKey</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 *
 * </p </li> <li>
 *
 * <a>ListResourceTags</a>
 */
ListKeysResponse * KmsClient::listKeys(const ListKeysRequest &request)
{
    return qobject_cast<ListKeysResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListResourceTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tags on the specified customer master key
 *
 * (CMK)>
 *
 * For general information about tags, including the format and syntax, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging AWS resources</a> in the <i>Amazon Web
 * Services General Reference</i>. For information about using tags in AWS KMS, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
 *
 * keys</a>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListResourceTags</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>TagResource</a>
 *
 * </p </li> <li>
 *
 * <a>UntagResource</a>
 */
ListResourceTagsResponse * KmsClient::listResourceTags(const ListResourceTagsRequest &request)
{
    return qobject_cast<ListResourceTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ListRetirableGrantsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all grants in which the specified principal is the <code>RetiringPrincipal</code> in the grant.
 *
 * </p
 *
 * You can specify any principal in your AWS account. The grants that are returned include grants for CMKs in your AWS
 * account and other AWS
 *
 * accounts>
 *
 * You might use this operation to determine which grants you may retire. To retire a grant, use the <a>RetireGrant</a>
 *
 * operation>
 *
 * <b>Cross-account use</b>: You must specify a principal in your AWS account. However, this operation can return grants in
 * any AWS account. You do not need <code>kms:ListRetirableGrants</code> permission (or any other additional permission) in
 * any AWS account other than your
 *
 * own>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ListRetirableGrants</a>
 * (IAM policy) in your AWS
 *
 * account>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateGrant</a>
 *
 * </p </li> <li>
 *
 * <a>ListGrants</a>
 *
 * </p </li> <li>
 *
 * <a>RetireGrant</a>
 *
 * </p </li> <li>
 *
 * <a>RevokeGrant</a>
 */
ListRetirableGrantsResponse * KmsClient::listRetirableGrants(const ListRetirableGrantsRequest &request)
{
    return qobject_cast<ListRetirableGrantsResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * PutKeyPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a key policy to the specified customer master key (CMK).
 *
 * </p
 *
 * For more information about key policies, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Key Policies</a> in the <i>AWS Key
 * Management Service Developer Guide</i>. For help writing and formatting a JSON policy document, see the <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies.html">IAM JSON Policy Reference</a> in the <i>
 * <i>IAM User Guide</i> </i>. For examples of adding a key policy in multiple programming languages, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/programming-key-policies.html#put-policy">Setting a key
 * policy</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:PutKeyPolicy</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>GetKeyPolicy</a>
 */
PutKeyPolicyResponse * KmsClient::putKeyPolicy(const PutKeyPolicyRequest &request)
{
    return qobject_cast<PutKeyPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ReEncryptResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Decrypts ciphertext and then reencrypts it entirely within AWS KMS. You can use this operation to change the customer
 * master key (CMK) under which data is encrypted, such as when you <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotate-keys-manually">manually rotate</a> a
 * CMK or change the CMK that protects a ciphertext. You can also use it to reencrypt ciphertext under the same CMK, such
 * as to change the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption context</a> of a
 *
 * ciphertext>
 *
 * The <code>ReEncrypt</code> operation can decrypt ciphertext that was encrypted by using an AWS KMS CMK in an AWS KMS
 * operation, such as <a>Encrypt</a> or <a>GenerateDataKey</a>. It can also decrypt ciphertext that was encrypted by using
 * the public key of an <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/symm-asymm-concepts.html#asymmetric-cmks">asymmetric CMK</a>
 * outside of AWS KMS. However, it cannot decrypt ciphertext produced by other libraries, such as the <a
 * href="https://docs.aws.amazon.com/encryption-sdk/latest/developer-guide/">AWS Encryption SDK</a> or <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingClientSideEncryption.html">Amazon S3 client-side
 * encryption</a>. These libraries return a ciphertext format that is incompatible with AWS
 *
 * KMS>
 *
 * When you use the <code>ReEncrypt</code> operation, you need to provide information for the decrypt operation and the
 * subsequent encrypt
 *
 * operation> <ul> <li>
 *
 * If your ciphertext was encrypted under an asymmetric CMK, you must use the <code>SourceKeyId</code> parameter to
 * identify the CMK that encrypted the ciphertext. You must also supply the encryption algorithm that was used. This
 * information is required to decrypt the
 *
 * data> </li> <li>
 *
 * If your ciphertext was encrypted under a symmetric CMK, the <code>SourceKeyId</code> parameter is optional. AWS KMS can
 * get this information from metadata that it adds to the symmetric ciphertext blob. This feature adds durability to your
 * implementation by ensuring that authorized users can decrypt ciphertext decades after it was encrypted, even if they've
 * lost track of the CMK ID. However, specifying the source CMK is always recommended as a best practice. When you use the
 * <code>SourceKeyId</code> parameter to specify a CMK, AWS KMS uses only the CMK you specify. If the ciphertext was
 * encrypted under a different CMK, the <code>ReEncrypt</code> operation fails. This practice ensures that you use the CMK
 * that you
 *
 * intend> </li> <li>
 *
 * To reencrypt the data, you must use the <code>DestinationKeyId</code> parameter specify the CMK that re-encrypts the
 * data after it is decrypted. You can select a symmetric or asymmetric CMK. If the destination CMK is an asymmetric CMK,
 * you must also provide the encryption algorithm. The algorithm that you choose must be compatible with the
 *
 * CMK> <b>
 *
 * When you use an asymmetric CMK to encrypt or reencrypt data, be sure to record the CMK and encryption algorithm that you
 * choose. You will be required to provide the same CMK and encryption algorithm when you decrypt the data. If the CMK and
 * algorithm do not match the values used to encrypt the data, the decrypt operation
 *
 * fails>
 *
 * You are not required to supply the CMK ID and encryption algorithm when you decrypt with symmetric CMKs because AWS KMS
 * stores this information in the ciphertext blob. AWS KMS cannot store metadata in ciphertext generated with asymmetric
 * keys. The standard format for asymmetric key ciphertext does not include configurable
 *
 * fields> </b> </li> </ul>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. The source CMK and destination CMK can be in different AWS accounts. Either or both CMKs
 * can be in a different account than the
 *
 * caller>
 *
 * <b>Required
 *
 * permissions</b>> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ReEncryptFrom</a>
 * permission on the source CMK (key
 *
 * policy> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ReEncryptTo</a>
 * permission on the destination CMK (key
 *
 * policy> </li> </ul>
 *
 * To permit reencryption from or to a CMK, include the <code>"kms:ReEncrypt*"</code> permission in your <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">key policy</a>. This permission is
 * automatically included in the key policy when you use the console to create a CMK. But you must include it manually when
 * you create a CMK programmatically or when you use the <a>PutKeyPolicy</a> operation to set a key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>Decrypt</a>
 *
 * </p </li> <li>
 *
 * <a>Encrypt</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKey</a>
 *
 * </p </li> <li>
 *
 * <a>GenerateDataKeyPair</a>
 */
ReEncryptResponse * KmsClient::reEncrypt(const ReEncryptRequest &request)
{
    return qobject_cast<ReEncryptResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * RetireGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retires a grant. To clean up, you can retire a grant when you're done using it. You should revoke a grant when you
 * intend to actively deny operations that depend on it. The following are permitted to call this
 *
 * API> <ul> <li>
 *
 * The AWS account (root user) under which the grant was
 *
 * create> </li> <li>
 *
 * The <code>RetiringPrincipal</code>, if present in the
 *
 * gran> </li> <li>
 *
 * The <code>GranteePrincipal</code>, if <code>RetireGrant</code> is an operation specified in the
 *
 * gran> </li> </ul>
 *
 * You must identify the grant to retire by its grant token or by a combination of the grant ID and the Amazon Resource
 * Name (ARN) of the customer master key (CMK). A grant token is a unique variable-length base64-encoded string. A grant ID
 * is a 64 character unique identifier of a grant. The <a>CreateGrant</a> operation returns
 *
 * both>
 *
 * <b>Cross-account use</b>: Yes. You can retire a grant on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions:</b>: Permission to retire a grant is specified in the grant. You cannot control access to this
 * operation in a policy. For more information, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Using grants</a> in the <i>AWS Key Management
 * Service Developer
 *
 * Guide</i>>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateGrant</a>
 *
 * </p </li> <li>
 *
 * <a>ListGrants</a>
 *
 * </p </li> <li>
 *
 * <a>ListRetirableGrants</a>
 *
 * </p </li> <li>
 *
 * <a>RevokeGrant</a>
 */
RetireGrantResponse * KmsClient::retireGrant(const RetireGrantRequest &request)
{
    return qobject_cast<RetireGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * RevokeGrantResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes the specified grant for the specified customer master key (CMK). You can revoke a grant to actively deny
 * operations that depend on
 *
 * it>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation on a CMK in a different AWS account, specify the key ARN in the
 * value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:RevokeGrant</a> (key
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateGrant</a>
 *
 * </p </li> <li>
 *
 * <a>ListGrants</a>
 *
 * </p </li> <li>
 *
 * <a>ListRetirableGrants</a>
 *
 * </p </li> <li>
 *
 * <a>RetireGrant</a>
 */
RevokeGrantResponse * KmsClient::revokeGrant(const RevokeGrantRequest &request)
{
    return qobject_cast<RevokeGrantResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * ScheduleKeyDeletionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules the deletion of a customer master key (CMK). You may provide a waiting period, specified in days, before
 * deletion occurs. If you do not provide a waiting period, the default period of 30 days is used. When this operation is
 * successful, the key state of the CMK changes to <code>PendingDeletion</code>. Before the waiting period ends, you can
 * use <a>CancelKeyDeletion</a> to cancel the deletion of the CMK. After the waiting period ends, AWS KMS deletes the CMK
 * and all AWS KMS data associated with it, including all aliases that refer to
 *
 * it> <b>
 *
 * Deleting a CMK is a destructive and potentially dangerous operation. When a CMK is deleted, all data that was encrypted
 * under the CMK is unrecoverable. To prevent the use of a CMK without deleting it, use
 *
 * <a>DisableKey</a>> </b>
 *
 * If you schedule deletion of a CMK from a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom key store</a>, when
 * the waiting period expires, <code>ScheduleKeyDeletion</code> deletes the CMK from AWS KMS. Then AWS KMS makes a best
 * effort to delete the key material from the associated AWS CloudHSM cluster. However, you might need to manually <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-orphaned-key">delete the
 * orphaned key material</a> from the cluster and its
 *
 * backups>
 *
 * For more information about scheduling a CMK for deletion, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/deleting-keys.html">Deleting Customer Master Keys</a> in the
 * <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:ScheduleKeyDeletion</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * <a>CancelKeyDeletion</a>
 *
 * </p </li> <li>
 *
 * <a>DisableKey</a>
 */
ScheduleKeyDeletionResponse * KmsClient::scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request)
{
    return qobject_cast<ScheduleKeyDeletionResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * SignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <a href="https://en.wikipedia.org/wiki/Digital_signature">digital signature</a> for a message or message
 * digest by using the private key in an asymmetric CMK. To verify the signature, use the <a>Verify</a> operation, or use
 * the public key in the same asymmetric CMK outside of AWS KMS. For information about symmetric and asymmetric CMKs, see
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using Symmetric and Asymmetric
 * CMKs</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * Digital signatures are generated and verified by using asymmetric key pair, such as an RSA or ECC pair that is
 * represented by an asymmetric customer master key (CMK). The key owner (or an authorized user) uses their private key to
 * sign a message. Anyone with the public key can verify that the message was signed with that particular private key and
 * that the message hasn't changed since it was signed.
 *
 * </p
 *
 * To use the <code>Sign</code> operation, provide the following
 *
 * information> <ul> <li>
 *
 * Use the <code>KeyId</code> parameter to identify an asymmetric CMK with a <code>KeyUsage</code> value of
 * <code>SIGN_VERIFY</code>. To get the <code>KeyUsage</code> value of a CMK, use the <a>DescribeKey</a> operation. The
 * caller must have <code>kms:Sign</code> permission on the
 *
 * CMK> </li> <li>
 *
 * Use the <code>Message</code> parameter to specify the message or message digest to sign. You can submit messages of up
 * to 4096 bytes. To sign a larger message, generate a hash digest of the message, and then provide the hash digest in the
 * <code>Message</code> parameter. To indicate whether the message is a full message or a digest, use the
 * <code>MessageType</code>
 *
 * parameter> </li> <li>
 *
 * Choose a signing algorithm that is compatible with the CMK.
 *
 * </p </li> </ul> <b>
 *
 * When signing a message, be sure to record the CMK and the signing algorithm. This information is required to verify the
 *
 * signature> </b>
 *
 * To verify the signature that this operation generates, use the <a>Verify</a> operation. Or use the <a>GetPublicKey</a>
 * operation to download the public key and then use the public key to verify the signature outside of AWS KMS.
 *
 * </p
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code>
 *
 * parameter>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Sign</a> (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>Verify</a>
 */
SignResponse * KmsClient::sign(const SignRequest &request)
{
    return qobject_cast<SignResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or edits tags on a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer managed
 *
 * CMK</a>>
 *
 * Each tag consists of a tag key and a tag value, both of which are case-sensitive strings. The tag value can be an empty
 * (null) string.
 *
 * </p
 *
 * To add a tag, specify a new tag key and a tag value. To edit a tag, specify an existing tag key and a new tag
 *
 * value>
 *
 * You can use this operation to tag a <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer managed CMK</a>, but
 * you cannot tag an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">AWS
 * managed CMK</a>, an <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">AWS
 * owned CMK</a>, or an
 *
 * alias>
 *
 * For general information about tags, including the format and syntax, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging AWS resources</a> in the <i>Amazon Web
 * Services General Reference</i>. For information about using tags in AWS KMS, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
 *
 * keys</a>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS account.
 *
 * </p
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:TagResource</a> (key
 *
 * policy>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * <a>UntagResource</a>
 *
 * </p </li> <li>
 *
 * <a>ListResourceTags</a>
 */
TagResourceResponse * KmsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes tags from a <a href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
 * managed CMK</a>. To delete a tag, specify the tag key and the
 *
 * CMK>
 *
 * When it succeeds, the <code>UntagResource</code> operation doesn't return any output. Also, if the specified tag key
 * isn't found on the CMK, it doesn't throw an exception or return a response. To confirm that the operation worked, use
 * the <a>ListResourceTags</a>
 *
 * operation>
 *
 * For general information about tags, including the format and syntax, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging AWS resources</a> in the <i>Amazon Web
 * Services General Reference</i>. For information about using tags in AWS KMS, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/tagging-keys.html">Tagging
 *
 * keys</a>>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS
 *
 * account>
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UntagResource</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * <a>TagResource</a>
 *
 * </p </li> <li>
 *
 * <a>ListResourceTags</a>
 */
UntagResourceResponse * KmsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UpdateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an existing AWS KMS alias with a different customer master key (CMK). Each alias is associated with only one
 * CMK at a time, although a CMK can have multiple aliases. The alias and the CMK must be in the same AWS account and
 *
 * region>
 *
 * The current and new CMK must be the same type (both symmetric or both asymmetric), and they must have the same key usage
 * (<code>ENCRYPT_DECRYPT</code> or <code>SIGN_VERIFY</code>). This restriction prevents errors in code that uses aliases.
 * If you must assign an alias to a different type of CMK, use <a>DeleteAlias</a> to delete the old alias and
 * <a>CreateAlias</a> to create a new
 *
 * alias>
 *
 * You cannot use <code>UpdateAlias</code> to change an alias name. To change an alias name, use <a>DeleteAlias</a> to
 * delete the old alias and <a>CreateAlias</a> to create a new
 *
 * alias>
 *
 * Because an alias is not a property of a CMK, you can create, update, and delete the aliases of a CMK without affecting
 * the CMK. Also, aliases do not appear in the response from the <a>DescribeKey</a> operation. To get the aliases of all
 * CMKs in the account, use the <a>ListAliases</a> operation.
 *
 * </p
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS account.
 *
 * </p
 *
 * <b>Required permissions</b>
 *
 * </p <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateAlias</a>
 * on the alias (IAM
 *
 * policy)> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateAlias</a>
 * on the current CMK (key
 *
 * policy)> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateAlias</a>
 * on the new CMK (key
 *
 * policy)> </li> </ul>
 *
 * For details, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-alias.html#alias-access">Controlling
 * access to aliases</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateAlias</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteAlias</a>
 *
 * </p </li> <li>
 *
 * <a>ListAliases</a>
 */
UpdateAliasResponse * KmsClient::updateAlias(const UpdateAliasRequest &request)
{
    return qobject_cast<UpdateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UpdateCustomKeyStoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the properties of a custom key store. Use the <code>CustomKeyStoreId</code> parameter to identify the custom key
 * store you want to edit. Use the remaining parameters to change the properties of the custom key
 *
 * store>
 *
 * You can only update a custom key store that is disconnected. To disconnect the custom key store, use
 * <a>DisconnectCustomKeyStore</a>. To reconnect the custom key store after the update completes, use
 * <a>ConnectCustomKeyStore</a>. To find the connection state of a custom key store, use the <a>DescribeCustomKeyStores</a>
 *
 * operation>
 *
 * Use the parameters of <code>UpdateCustomKeyStore</code> to edit your keystore
 *
 * settings> <ul> <li>
 *
 * Use the <b>NewCustomKeyStoreName</b> parameter to change the friendly name of the custom key store to the value that you
 *
 * specify>
 *
 *
 * </p </li> <li>
 *
 * Use the <b>KeyStorePassword</b> parameter tell AWS KMS the current password of the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-concepts.html#concept-kmsuser">
 * <code>kmsuser</code> crypto user (CU)</a> in the associated AWS CloudHSM cluster. You can use this parameter to <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/fix-keystore.html#fix-keystore-password">fix connection
 * failures</a> that occur when AWS KMS cannot log into the associated cluster because the <code>kmsuser</code> password
 * has changed. This value does not change the password in the AWS CloudHSM
 *
 * cluster>
 *
 *
 * </p </li> <li>
 *
 * Use the <b>CloudHsmClusterId</b> parameter to associate the custom key store with a different, but related, AWS CloudHSM
 * cluster. You can use this parameter to repair a custom key store if its AWS CloudHSM cluster becomes corrupted or is
 * deleted, or when you need to create or restore a cluster from a backup.
 *
 * </p </li> </ul>
 *
 * If the operation succeeds, it returns a JSON object with no
 *
 * properties>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom Key Store feature</a>
 * feature in AWS KMS, which combines the convenience and extensive integration of AWS KMS with the isolation and control
 * of a single-tenant key
 *
 * store>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a custom key store in a different AWS account.
 *
 * </p
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateCustomKeyStore</a>
 * (IAM
 *
 * policy>
 *
 * <b>Related operations:</b>
 *
 * </p <ul> <li>
 *
 * <a>ConnectCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>CreateCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DeleteCustomKeyStore</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeCustomKeyStores</a>
 *
 * </p </li> <li>
 *
 * <a>DisconnectCustomKeyStore</a>
 */
UpdateCustomKeyStoreResponse * KmsClient::updateCustomKeyStore(const UpdateCustomKeyStoreRequest &request)
{
    return qobject_cast<UpdateCustomKeyStoreResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * UpdateKeyDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of a customer master key (CMK). To see the description of a CMK, use <a>DescribeKey</a>.
 *
 * </p
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: No. You cannot perform this operation on a CMK in a different AWS account.
 *
 * </p
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:UpdateKeyDescription</a>
 * (key
 *
 * policy>
 *
 * <b>Related operations</b>
 *
 * </p <ul> <li>
 *
 * <a>CreateKey</a>
 *
 * </p </li> <li>
 *
 * <a>DescribeKey</a>
 */
UpdateKeyDescriptionResponse * KmsClient::updateKeyDescription(const UpdateKeyDescriptionRequest &request)
{
    return qobject_cast<UpdateKeyDescriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the KmsClient service, and returns a pointer to an
 * VerifyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Verifies a digital signature that was generated by the <a>Sign</a> operation.
 *
 * </p <p/>
 *
 * Verification confirms that an authorized user signed the message with the specified CMK and signing algorithm, and the
 * message hasn't changed since it was signed. If the signature is verified, the value of the <code>SignatureValid</code>
 * field in the response is <code>True</code>. If the signature verification fails, the <code>Verify</code> operation fails
 * with an <code>KMSInvalidSignatureException</code>
 *
 * exception>
 *
 * A digital signature is generated by using the private key in an asymmetric CMK. The signature is verified by using the
 * public key in the same asymmetric CMK. For information about symmetric and asymmetric CMKs, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using Symmetric and Asymmetric
 * CMKs</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * To verify a digital signature, you can use the <code>Verify</code> operation. Specify the same asymmetric CMK, message,
 * and signing algorithm that were used to produce the
 *
 * signature>
 *
 * You can also verify the digital signature by using the public key of the CMK outside of AWS KMS. Use the
 * <a>GetPublicKey</a> operation to download the public key in the asymmetric CMK and then use the public key to verify the
 * signature outside of AWS KMS. The advantage of using the <code>Verify</code> operation is that it is performed within
 * AWS KMS. As a result, it's easy to call, the operation is performed within the FIPS boundary, it is logged in AWS
 * CloudTrail, and you can use key policy and IAM policy to determine who is authorized to use the CMK to verify
 *
 * signatures>
 *
 * The CMK that you use for this operation must be in a compatible key state. For details, see <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-state.html">How Key State Affects Use of a Customer
 * Master Key</a> in the <i>AWS Key Management Service Developer
 *
 * Guide</i>>
 *
 * <b>Cross-account use</b>: Yes. To perform this operation with a CMK in a different AWS account, specify the key ARN or
 * alias ARN in the value of the <code>KeyId</code> parameter.
 *
 * </p
 *
 * <b>Required permissions</b>: <a
 * href="https://docs.aws.amazon.com/kms/latest/developerguide/kms-api-permissions-reference.html">kms:Verify</a> (key
 *
 * policy>
 *
 * <b>Related operations</b>: <a>Sign</a>
 */
VerifyResponse * KmsClient::verify(const VerifyRequest &request)
{
    return qobject_cast<VerifyResponse *>(send(request));
}

/*!
 * \class QtAws::KMS::KmsClientPrivate
 * \brief The KmsClientPrivate class provides private implementation for KmsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsKMS
 */

/*!
 * Constructs a KmsClientPrivate object with public implementation \a q.
 */
KmsClientPrivate::KmsClientPrivate(KmsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KMS
} // namespace QtAws
