#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawsglobal.h"

#include <QCryptographicHash>
#include <QDateTime>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4;

/// @private
class QTAWS_EXPORT AwsSignatureV4Private {
    Q_DECLARE_PUBLIC(AwsSignatureV4)

public:
    AwsSignatureV4Private(const QCryptographicHash::Algorithm hashAlgorithm, AwsSignatureV4 * const q);

    void setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                const QNetworkAccessManager::Operation operation,
                                QNetworkRequest &request, const QByteArray &payload,
                                const QDateTime &timestamp) const;

    QDateTime setDateHeader(QNetworkRequest &request, const QDateTime &dateTime = QDateTime::currentDateTimeUtc()) const;

protected:
    static const QLatin1String DateFormat;
    static const QLatin1String DateTimeFormat;

    const QCryptographicHash::Algorithm hashAlgorithm;

    QByteArray algorithmDesignation(const QCryptographicHash::Algorithm algorithm) const;

    QByteArray authorizationHeaderValue(const AwsAbstractCredentials &credentials,
                                        const QNetworkAccessManager::Operation operation,
                                        QNetworkRequest &request, const QByteArray &payload,
                                        const QDateTime &timestamp) const;

    QByteArray canonicalHeader(const QByteArray &headerName, const QByteArray &headerValue) const;

    QByteArray canonicalHeaders(const QNetworkRequest &request, QByteArray * const signedHeaders) const;

    QByteArray canonicalQuery(const QUrlQuery &query) const;

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QNetworkRequest &request,
                                const QByteArray &payload, QByteArray * const signedHeaders) const;

    QString canonicalUri(const QUrl &url) const;

    QByteArray credentialScope(const QDate &date, const QString &region, const QString &service) const;

    QString extractRegion(const QUrl &url) const;

    QString httpMethod(const QNetworkAccessManager::Operation operation) const;

    QByteArray signingKey(const AwsAbstractCredentials &credentials, const QDate &date,
                          const QString &region, const QString &service) const;

    QByteArray stringToSign(const QByteArray &algorithmDesignation, const QDateTime &requestDate,
                            const QByteArray &credentialScope, const QByteArray &canonicalRequest) const;

private:
    AwsSignatureV4 * const q_ptr;
    friend class TestAwsSignatureV4;
};

QTAWS_END_NAMESPACE

#endif