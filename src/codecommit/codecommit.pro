include(../../common.pri)

TARGET = QtAwsCodeCommit
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchdescribemergeconflictsrequest.h \
    batchdescribemergeconflictsrequest_p.h \
    batchdescribemergeconflictsresponse.h \
    batchdescribemergeconflictsresponse_p.h \
    batchgetrepositoriesrequest.h \
    batchgetrepositoriesrequest_p.h \
    batchgetrepositoriesresponse.h \
    batchgetrepositoriesresponse_p.h \
    codecommitclient.h \
    codecommitclient_p.h \
    codecommitrequest.h \
    codecommitrequest_p.h \
    codecommitresponse.h \
    codecommitresponse_p.h \
    createbranchrequest.h \
    createbranchrequest_p.h \
    createbranchresponse.h \
    createbranchresponse_p.h \
    createcommitrequest.h \
    createcommitrequest_p.h \
    createcommitresponse.h \
    createcommitresponse_p.h \
    createpullrequestrequest.h \
    createpullrequestrequest_p.h \
    createpullrequestresponse.h \
    createpullrequestresponse_p.h \
    createrepositoryrequest.h \
    createrepositoryrequest_p.h \
    createrepositoryresponse.h \
    createrepositoryresponse_p.h \
    createunreferencedmergecommitrequest.h \
    createunreferencedmergecommitrequest_p.h \
    createunreferencedmergecommitresponse.h \
    createunreferencedmergecommitresponse_p.h \
    deletebranchrequest.h \
    deletebranchrequest_p.h \
    deletebranchresponse.h \
    deletebranchresponse_p.h \
    deletecommentcontentrequest.h \
    deletecommentcontentrequest_p.h \
    deletecommentcontentresponse.h \
    deletecommentcontentresponse_p.h \
    deletefilerequest.h \
    deletefilerequest_p.h \
    deletefileresponse.h \
    deletefileresponse_p.h \
    deleterepositoryrequest.h \
    deleterepositoryrequest_p.h \
    deleterepositoryresponse.h \
    deleterepositoryresponse_p.h \
    describemergeconflictsrequest.h \
    describemergeconflictsrequest_p.h \
    describemergeconflictsresponse.h \
    describemergeconflictsresponse_p.h \
    describepullrequesteventsrequest.h \
    describepullrequesteventsrequest_p.h \
    describepullrequesteventsresponse.h \
    describepullrequesteventsresponse_p.h \
    getblobrequest.h \
    getblobrequest_p.h \
    getblobresponse.h \
    getblobresponse_p.h \
    getbranchrequest.h \
    getbranchrequest_p.h \
    getbranchresponse.h \
    getbranchresponse_p.h \
    getcommentrequest.h \
    getcommentrequest_p.h \
    getcommentresponse.h \
    getcommentresponse_p.h \
    getcommentsforcomparedcommitrequest.h \
    getcommentsforcomparedcommitrequest_p.h \
    getcommentsforcomparedcommitresponse.h \
    getcommentsforcomparedcommitresponse_p.h \
    getcommentsforpullrequestrequest.h \
    getcommentsforpullrequestrequest_p.h \
    getcommentsforpullrequestresponse.h \
    getcommentsforpullrequestresponse_p.h \
    getcommitrequest.h \
    getcommitrequest_p.h \
    getcommitresponse.h \
    getcommitresponse_p.h \
    getdifferencesrequest.h \
    getdifferencesrequest_p.h \
    getdifferencesresponse.h \
    getdifferencesresponse_p.h \
    getfilerequest.h \
    getfilerequest_p.h \
    getfileresponse.h \
    getfileresponse_p.h \
    getfolderrequest.h \
    getfolderrequest_p.h \
    getfolderresponse.h \
    getfolderresponse_p.h \
    getmergecommitrequest.h \
    getmergecommitrequest_p.h \
    getmergecommitresponse.h \
    getmergecommitresponse_p.h \
    getmergeconflictsrequest.h \
    getmergeconflictsrequest_p.h \
    getmergeconflictsresponse.h \
    getmergeconflictsresponse_p.h \
    getmergeoptionsrequest.h \
    getmergeoptionsrequest_p.h \
    getmergeoptionsresponse.h \
    getmergeoptionsresponse_p.h \
    getpullrequestrequest.h \
    getpullrequestrequest_p.h \
    getpullrequestresponse.h \
    getpullrequestresponse_p.h \
    getrepositoryrequest.h \
    getrepositoryrequest_p.h \
    getrepositoryresponse.h \
    getrepositoryresponse_p.h \
    getrepositorytriggersrequest.h \
    getrepositorytriggersrequest_p.h \
    getrepositorytriggersresponse.h \
    getrepositorytriggersresponse_p.h \
    listbranchesrequest.h \
    listbranchesrequest_p.h \
    listbranchesresponse.h \
    listbranchesresponse_p.h \
    listpullrequestsrequest.h \
    listpullrequestsrequest_p.h \
    listpullrequestsresponse.h \
    listpullrequestsresponse_p.h \
    listrepositoriesrequest.h \
    listrepositoriesrequest_p.h \
    listrepositoriesresponse.h \
    listrepositoriesresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    mergebranchesbyfastforwardrequest.h \
    mergebranchesbyfastforwardrequest_p.h \
    mergebranchesbyfastforwardresponse.h \
    mergebranchesbyfastforwardresponse_p.h \
    mergebranchesbysquashrequest.h \
    mergebranchesbysquashrequest_p.h \
    mergebranchesbysquashresponse.h \
    mergebranchesbysquashresponse_p.h \
    mergebranchesbythreewayrequest.h \
    mergebranchesbythreewayrequest_p.h \
    mergebranchesbythreewayresponse.h \
    mergebranchesbythreewayresponse_p.h \
    mergepullrequestbyfastforwardrequest.h \
    mergepullrequestbyfastforwardrequest_p.h \
    mergepullrequestbyfastforwardresponse.h \
    mergepullrequestbyfastforwardresponse_p.h \
    mergepullrequestbysquashrequest.h \
    mergepullrequestbysquashrequest_p.h \
    mergepullrequestbysquashresponse.h \
    mergepullrequestbysquashresponse_p.h \
    mergepullrequestbythreewayrequest.h \
    mergepullrequestbythreewayrequest_p.h \
    mergepullrequestbythreewayresponse.h \
    mergepullrequestbythreewayresponse_p.h \
    postcommentforcomparedcommitrequest.h \
    postcommentforcomparedcommitrequest_p.h \
    postcommentforcomparedcommitresponse.h \
    postcommentforcomparedcommitresponse_p.h \
    postcommentforpullrequestrequest.h \
    postcommentforpullrequestrequest_p.h \
    postcommentforpullrequestresponse.h \
    postcommentforpullrequestresponse_p.h \
    postcommentreplyrequest.h \
    postcommentreplyrequest_p.h \
    postcommentreplyresponse.h \
    postcommentreplyresponse_p.h \
    putfilerequest.h \
    putfilerequest_p.h \
    putfileresponse.h \
    putfileresponse_p.h \
    putrepositorytriggersrequest.h \
    putrepositorytriggersrequest_p.h \
    putrepositorytriggersresponse.h \
    putrepositorytriggersresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    testrepositorytriggersrequest.h \
    testrepositorytriggersrequest_p.h \
    testrepositorytriggersresponse.h \
    testrepositorytriggersresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatecommentrequest.h \
    updatecommentrequest_p.h \
    updatecommentresponse.h \
    updatecommentresponse_p.h \
    updatedefaultbranchrequest.h \
    updatedefaultbranchrequest_p.h \
    updatedefaultbranchresponse.h \
    updatedefaultbranchresponse_p.h \
    updatepullrequestdescriptionrequest.h \
    updatepullrequestdescriptionrequest_p.h \
    updatepullrequestdescriptionresponse.h \
    updatepullrequestdescriptionresponse_p.h \
    updatepullrequeststatusrequest.h \
    updatepullrequeststatusrequest_p.h \
    updatepullrequeststatusresponse.h \
    updatepullrequeststatusresponse_p.h \
    updatepullrequesttitlerequest.h \
    updatepullrequesttitlerequest_p.h \
    updatepullrequesttitleresponse.h \
    updatepullrequesttitleresponse_p.h \
    updaterepositorydescriptionrequest.h \
    updaterepositorydescriptionrequest_p.h \
    updaterepositorydescriptionresponse.h \
    updaterepositorydescriptionresponse_p.h \
    updaterepositorynamerequest.h \
    updaterepositorynamerequest_p.h \
    updaterepositorynameresponse.h \
    updaterepositorynameresponse_p.h \

SOURCES += \
    batchdescribemergeconflictsrequest.cpp \
    batchdescribemergeconflictsresponse.cpp \
    batchgetrepositoriesrequest.cpp \
    batchgetrepositoriesresponse.cpp \
    codecommitclient.cpp \
    codecommitrequest.cpp \
    codecommitresponse.cpp \
    createbranchrequest.cpp \
    createbranchresponse.cpp \
    createcommitrequest.cpp \
    createcommitresponse.cpp \
    createpullrequestrequest.cpp \
    createpullrequestresponse.cpp \
    createrepositoryrequest.cpp \
    createrepositoryresponse.cpp \
    createunreferencedmergecommitrequest.cpp \
    createunreferencedmergecommitresponse.cpp \
    deletebranchrequest.cpp \
    deletebranchresponse.cpp \
    deletecommentcontentrequest.cpp \
    deletecommentcontentresponse.cpp \
    deletefilerequest.cpp \
    deletefileresponse.cpp \
    deleterepositoryrequest.cpp \
    deleterepositoryresponse.cpp \
    describemergeconflictsrequest.cpp \
    describemergeconflictsresponse.cpp \
    describepullrequesteventsrequest.cpp \
    describepullrequesteventsresponse.cpp \
    getblobrequest.cpp \
    getblobresponse.cpp \
    getbranchrequest.cpp \
    getbranchresponse.cpp \
    getcommentrequest.cpp \
    getcommentresponse.cpp \
    getcommentsforcomparedcommitrequest.cpp \
    getcommentsforcomparedcommitresponse.cpp \
    getcommentsforpullrequestrequest.cpp \
    getcommentsforpullrequestresponse.cpp \
    getcommitrequest.cpp \
    getcommitresponse.cpp \
    getdifferencesrequest.cpp \
    getdifferencesresponse.cpp \
    getfilerequest.cpp \
    getfileresponse.cpp \
    getfolderrequest.cpp \
    getfolderresponse.cpp \
    getmergecommitrequest.cpp \
    getmergecommitresponse.cpp \
    getmergeconflictsrequest.cpp \
    getmergeconflictsresponse.cpp \
    getmergeoptionsrequest.cpp \
    getmergeoptionsresponse.cpp \
    getpullrequestrequest.cpp \
    getpullrequestresponse.cpp \
    getrepositoryrequest.cpp \
    getrepositoryresponse.cpp \
    getrepositorytriggersrequest.cpp \
    getrepositorytriggersresponse.cpp \
    listbranchesrequest.cpp \
    listbranchesresponse.cpp \
    listpullrequestsrequest.cpp \
    listpullrequestsresponse.cpp \
    listrepositoriesrequest.cpp \
    listrepositoriesresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    mergebranchesbyfastforwardrequest.cpp \
    mergebranchesbyfastforwardresponse.cpp \
    mergebranchesbysquashrequest.cpp \
    mergebranchesbysquashresponse.cpp \
    mergebranchesbythreewayrequest.cpp \
    mergebranchesbythreewayresponse.cpp \
    mergepullrequestbyfastforwardrequest.cpp \
    mergepullrequestbyfastforwardresponse.cpp \
    mergepullrequestbysquashrequest.cpp \
    mergepullrequestbysquashresponse.cpp \
    mergepullrequestbythreewayrequest.cpp \
    mergepullrequestbythreewayresponse.cpp \
    postcommentforcomparedcommitrequest.cpp \
    postcommentforcomparedcommitresponse.cpp \
    postcommentforpullrequestrequest.cpp \
    postcommentforpullrequestresponse.cpp \
    postcommentreplyrequest.cpp \
    postcommentreplyresponse.cpp \
    putfilerequest.cpp \
    putfileresponse.cpp \
    putrepositorytriggersrequest.cpp \
    putrepositorytriggersresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    testrepositorytriggersrequest.cpp \
    testrepositorytriggersresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatecommentrequest.cpp \
    updatecommentresponse.cpp \
    updatedefaultbranchrequest.cpp \
    updatedefaultbranchresponse.cpp \
    updatepullrequestdescriptionrequest.cpp \
    updatepullrequestdescriptionresponse.cpp \
    updatepullrequeststatusrequest.cpp \
    updatepullrequeststatusresponse.cpp \
    updatepullrequesttitlerequest.cpp \
    updatepullrequesttitleresponse.cpp \
    updaterepositorydescriptionrequest.cpp \
    updaterepositorydescriptionresponse.cpp \
    updaterepositorynamerequest.cpp \
    updaterepositorynameresponse.cpp \

win32:CONFIG += skip_target_version_ext
