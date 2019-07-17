include(../../common.pri)

TARGET = QtAwsSecurityHub
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acceptinvitationrequest.h \
    acceptinvitationrequest_p.h \
    acceptinvitationresponse.h \
    acceptinvitationresponse_p.h \
    batchdisablestandardsrequest.h \
    batchdisablestandardsrequest_p.h \
    batchdisablestandardsresponse.h \
    batchdisablestandardsresponse_p.h \
    batchenablestandardsrequest.h \
    batchenablestandardsrequest_p.h \
    batchenablestandardsresponse.h \
    batchenablestandardsresponse_p.h \
    batchimportfindingsrequest.h \
    batchimportfindingsrequest_p.h \
    batchimportfindingsresponse.h \
    batchimportfindingsresponse_p.h \
    createactiontargetrequest.h \
    createactiontargetrequest_p.h \
    createactiontargetresponse.h \
    createactiontargetresponse_p.h \
    createinsightrequest.h \
    createinsightrequest_p.h \
    createinsightresponse.h \
    createinsightresponse_p.h \
    createmembersrequest.h \
    createmembersrequest_p.h \
    createmembersresponse.h \
    createmembersresponse_p.h \
    declineinvitationsrequest.h \
    declineinvitationsrequest_p.h \
    declineinvitationsresponse.h \
    declineinvitationsresponse_p.h \
    deleteactiontargetrequest.h \
    deleteactiontargetrequest_p.h \
    deleteactiontargetresponse.h \
    deleteactiontargetresponse_p.h \
    deleteinsightrequest.h \
    deleteinsightrequest_p.h \
    deleteinsightresponse.h \
    deleteinsightresponse_p.h \
    deleteinvitationsrequest.h \
    deleteinvitationsrequest_p.h \
    deleteinvitationsresponse.h \
    deleteinvitationsresponse_p.h \
    deletemembersrequest.h \
    deletemembersrequest_p.h \
    deletemembersresponse.h \
    deletemembersresponse_p.h \
    describeactiontargetsrequest.h \
    describeactiontargetsrequest_p.h \
    describeactiontargetsresponse.h \
    describeactiontargetsresponse_p.h \
    describehubrequest.h \
    describehubrequest_p.h \
    describehubresponse.h \
    describehubresponse_p.h \
    describeproductsrequest.h \
    describeproductsrequest_p.h \
    describeproductsresponse.h \
    describeproductsresponse_p.h \
    disableimportfindingsforproductrequest.h \
    disableimportfindingsforproductrequest_p.h \
    disableimportfindingsforproductresponse.h \
    disableimportfindingsforproductresponse_p.h \
    disablesecurityhubrequest.h \
    disablesecurityhubrequest_p.h \
    disablesecurityhubresponse.h \
    disablesecurityhubresponse_p.h \
    disassociatefrommasteraccountrequest.h \
    disassociatefrommasteraccountrequest_p.h \
    disassociatefrommasteraccountresponse.h \
    disassociatefrommasteraccountresponse_p.h \
    disassociatemembersrequest.h \
    disassociatemembersrequest_p.h \
    disassociatemembersresponse.h \
    disassociatemembersresponse_p.h \
    enableimportfindingsforproductrequest.h \
    enableimportfindingsforproductrequest_p.h \
    enableimportfindingsforproductresponse.h \
    enableimportfindingsforproductresponse_p.h \
    enablesecurityhubrequest.h \
    enablesecurityhubrequest_p.h \
    enablesecurityhubresponse.h \
    enablesecurityhubresponse_p.h \
    getenabledstandardsrequest.h \
    getenabledstandardsrequest_p.h \
    getenabledstandardsresponse.h \
    getenabledstandardsresponse_p.h \
    getfindingsrequest.h \
    getfindingsrequest_p.h \
    getfindingsresponse.h \
    getfindingsresponse_p.h \
    getinsightresultsrequest.h \
    getinsightresultsrequest_p.h \
    getinsightresultsresponse.h \
    getinsightresultsresponse_p.h \
    getinsightsrequest.h \
    getinsightsrequest_p.h \
    getinsightsresponse.h \
    getinsightsresponse_p.h \
    getinvitationscountrequest.h \
    getinvitationscountrequest_p.h \
    getinvitationscountresponse.h \
    getinvitationscountresponse_p.h \
    getmasteraccountrequest.h \
    getmasteraccountrequest_p.h \
    getmasteraccountresponse.h \
    getmasteraccountresponse_p.h \
    getmembersrequest.h \
    getmembersrequest_p.h \
    getmembersresponse.h \
    getmembersresponse_p.h \
    invitemembersrequest.h \
    invitemembersrequest_p.h \
    invitemembersresponse.h \
    invitemembersresponse_p.h \
    listenabledproductsforimportrequest.h \
    listenabledproductsforimportrequest_p.h \
    listenabledproductsforimportresponse.h \
    listenabledproductsforimportresponse_p.h \
    listinvitationsrequest.h \
    listinvitationsrequest_p.h \
    listinvitationsresponse.h \
    listinvitationsresponse_p.h \
    listmembersrequest.h \
    listmembersrequest_p.h \
    listmembersresponse.h \
    listmembersresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    securityhubclient.h \
    securityhubclient_p.h \
    securityhubrequest.h \
    securityhubrequest_p.h \
    securityhubresponse.h \
    securityhubresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateactiontargetrequest.h \
    updateactiontargetrequest_p.h \
    updateactiontargetresponse.h \
    updateactiontargetresponse_p.h \
    updatefindingsrequest.h \
    updatefindingsrequest_p.h \
    updatefindingsresponse.h \
    updatefindingsresponse_p.h \
    updateinsightrequest.h \
    updateinsightrequest_p.h \
    updateinsightresponse.h \
    updateinsightresponse_p.h \

SOURCES += \
    acceptinvitationrequest.cpp \
    acceptinvitationresponse.cpp \
    batchdisablestandardsrequest.cpp \
    batchdisablestandardsresponse.cpp \
    batchenablestandardsrequest.cpp \
    batchenablestandardsresponse.cpp \
    batchimportfindingsrequest.cpp \
    batchimportfindingsresponse.cpp \
    createactiontargetrequest.cpp \
    createactiontargetresponse.cpp \
    createinsightrequest.cpp \
    createinsightresponse.cpp \
    createmembersrequest.cpp \
    createmembersresponse.cpp \
    declineinvitationsrequest.cpp \
    declineinvitationsresponse.cpp \
    deleteactiontargetrequest.cpp \
    deleteactiontargetresponse.cpp \
    deleteinsightrequest.cpp \
    deleteinsightresponse.cpp \
    deleteinvitationsrequest.cpp \
    deleteinvitationsresponse.cpp \
    deletemembersrequest.cpp \
    deletemembersresponse.cpp \
    describeactiontargetsrequest.cpp \
    describeactiontargetsresponse.cpp \
    describehubrequest.cpp \
    describehubresponse.cpp \
    describeproductsrequest.cpp \
    describeproductsresponse.cpp \
    disableimportfindingsforproductrequest.cpp \
    disableimportfindingsforproductresponse.cpp \
    disablesecurityhubrequest.cpp \
    disablesecurityhubresponse.cpp \
    disassociatefrommasteraccountrequest.cpp \
    disassociatefrommasteraccountresponse.cpp \
    disassociatemembersrequest.cpp \
    disassociatemembersresponse.cpp \
    enableimportfindingsforproductrequest.cpp \
    enableimportfindingsforproductresponse.cpp \
    enablesecurityhubrequest.cpp \
    enablesecurityhubresponse.cpp \
    getenabledstandardsrequest.cpp \
    getenabledstandardsresponse.cpp \
    getfindingsrequest.cpp \
    getfindingsresponse.cpp \
    getinsightresultsrequest.cpp \
    getinsightresultsresponse.cpp \
    getinsightsrequest.cpp \
    getinsightsresponse.cpp \
    getinvitationscountrequest.cpp \
    getinvitationscountresponse.cpp \
    getmasteraccountrequest.cpp \
    getmasteraccountresponse.cpp \
    getmembersrequest.cpp \
    getmembersresponse.cpp \
    invitemembersrequest.cpp \
    invitemembersresponse.cpp \
    listenabledproductsforimportrequest.cpp \
    listenabledproductsforimportresponse.cpp \
    listinvitationsrequest.cpp \
    listinvitationsresponse.cpp \
    listmembersrequest.cpp \
    listmembersresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    securityhubclient.cpp \
    securityhubrequest.cpp \
    securityhubresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateactiontargetrequest.cpp \
    updateactiontargetresponse.cpp \
    updatefindingsrequest.cpp \
    updatefindingsresponse.cpp \
    updateinsightrequest.cpp \
    updateinsightresponse.cpp \

win32:CONFIG += skip_target_version_ext
