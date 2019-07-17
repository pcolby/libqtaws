include(../../common.pri)

TARGET = QtAwsDocDB
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagstoresourcerequest.h \
    addtagstoresourcerequest_p.h \
    addtagstoresourceresponse.h \
    addtagstoresourceresponse_p.h \
    applypendingmaintenanceactionrequest.h \
    applypendingmaintenanceactionrequest_p.h \
    applypendingmaintenanceactionresponse.h \
    applypendingmaintenanceactionresponse_p.h \
    copydbclusterparametergrouprequest.h \
    copydbclusterparametergrouprequest_p.h \
    copydbclusterparametergroupresponse.h \
    copydbclusterparametergroupresponse_p.h \
    copydbclustersnapshotrequest.h \
    copydbclustersnapshotrequest_p.h \
    copydbclustersnapshotresponse.h \
    copydbclustersnapshotresponse_p.h \
    createdbclusterparametergrouprequest.h \
    createdbclusterparametergrouprequest_p.h \
    createdbclusterparametergroupresponse.h \
    createdbclusterparametergroupresponse_p.h \
    createdbclusterrequest.h \
    createdbclusterrequest_p.h \
    createdbclusterresponse.h \
    createdbclusterresponse_p.h \
    createdbclustersnapshotrequest.h \
    createdbclustersnapshotrequest_p.h \
    createdbclustersnapshotresponse.h \
    createdbclustersnapshotresponse_p.h \
    createdbinstancerequest.h \
    createdbinstancerequest_p.h \
    createdbinstanceresponse.h \
    createdbinstanceresponse_p.h \
    createdbsubnetgrouprequest.h \
    createdbsubnetgrouprequest_p.h \
    createdbsubnetgroupresponse.h \
    createdbsubnetgroupresponse_p.h \
    deletedbclusterparametergrouprequest.h \
    deletedbclusterparametergrouprequest_p.h \
    deletedbclusterparametergroupresponse.h \
    deletedbclusterparametergroupresponse_p.h \
    deletedbclusterrequest.h \
    deletedbclusterrequest_p.h \
    deletedbclusterresponse.h \
    deletedbclusterresponse_p.h \
    deletedbclustersnapshotrequest.h \
    deletedbclustersnapshotrequest_p.h \
    deletedbclustersnapshotresponse.h \
    deletedbclustersnapshotresponse_p.h \
    deletedbinstancerequest.h \
    deletedbinstancerequest_p.h \
    deletedbinstanceresponse.h \
    deletedbinstanceresponse_p.h \
    deletedbsubnetgrouprequest.h \
    deletedbsubnetgrouprequest_p.h \
    deletedbsubnetgroupresponse.h \
    deletedbsubnetgroupresponse_p.h \
    describedbclusterparametergroupsrequest.h \
    describedbclusterparametergroupsrequest_p.h \
    describedbclusterparametergroupsresponse.h \
    describedbclusterparametergroupsresponse_p.h \
    describedbclusterparametersrequest.h \
    describedbclusterparametersrequest_p.h \
    describedbclusterparametersresponse.h \
    describedbclusterparametersresponse_p.h \
    describedbclustersnapshotattributesrequest.h \
    describedbclustersnapshotattributesrequest_p.h \
    describedbclustersnapshotattributesresponse.h \
    describedbclustersnapshotattributesresponse_p.h \
    describedbclustersnapshotsrequest.h \
    describedbclustersnapshotsrequest_p.h \
    describedbclustersnapshotsresponse.h \
    describedbclustersnapshotsresponse_p.h \
    describedbclustersrequest.h \
    describedbclustersrequest_p.h \
    describedbclustersresponse.h \
    describedbclustersresponse_p.h \
    describedbengineversionsrequest.h \
    describedbengineversionsrequest_p.h \
    describedbengineversionsresponse.h \
    describedbengineversionsresponse_p.h \
    describedbinstancesrequest.h \
    describedbinstancesrequest_p.h \
    describedbinstancesresponse.h \
    describedbinstancesresponse_p.h \
    describedbsubnetgroupsrequest.h \
    describedbsubnetgroupsrequest_p.h \
    describedbsubnetgroupsresponse.h \
    describedbsubnetgroupsresponse_p.h \
    describeenginedefaultclusterparametersrequest.h \
    describeenginedefaultclusterparametersrequest_p.h \
    describeenginedefaultclusterparametersresponse.h \
    describeenginedefaultclusterparametersresponse_p.h \
    describeeventcategoriesrequest.h \
    describeeventcategoriesrequest_p.h \
    describeeventcategoriesresponse.h \
    describeeventcategoriesresponse_p.h \
    describeeventsrequest.h \
    describeeventsrequest_p.h \
    describeeventsresponse.h \
    describeeventsresponse_p.h \
    describeorderabledbinstanceoptionsrequest.h \
    describeorderabledbinstanceoptionsrequest_p.h \
    describeorderabledbinstanceoptionsresponse.h \
    describeorderabledbinstanceoptionsresponse_p.h \
    describependingmaintenanceactionsrequest.h \
    describependingmaintenanceactionsrequest_p.h \
    describependingmaintenanceactionsresponse.h \
    describependingmaintenanceactionsresponse_p.h \
    docdbclient.h \
    docdbclient_p.h \
    docdbrequest.h \
    docdbrequest_p.h \
    docdbresponse.h \
    docdbresponse_p.h \
    failoverdbclusterrequest.h \
    failoverdbclusterrequest_p.h \
    failoverdbclusterresponse.h \
    failoverdbclusterresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    modifydbclusterparametergrouprequest.h \
    modifydbclusterparametergrouprequest_p.h \
    modifydbclusterparametergroupresponse.h \
    modifydbclusterparametergroupresponse_p.h \
    modifydbclusterrequest.h \
    modifydbclusterrequest_p.h \
    modifydbclusterresponse.h \
    modifydbclusterresponse_p.h \
    modifydbclustersnapshotattributerequest.h \
    modifydbclustersnapshotattributerequest_p.h \
    modifydbclustersnapshotattributeresponse.h \
    modifydbclustersnapshotattributeresponse_p.h \
    modifydbinstancerequest.h \
    modifydbinstancerequest_p.h \
    modifydbinstanceresponse.h \
    modifydbinstanceresponse_p.h \
    modifydbsubnetgrouprequest.h \
    modifydbsubnetgrouprequest_p.h \
    modifydbsubnetgroupresponse.h \
    modifydbsubnetgroupresponse_p.h \
    rebootdbinstancerequest.h \
    rebootdbinstancerequest_p.h \
    rebootdbinstanceresponse.h \
    rebootdbinstanceresponse_p.h \
    removetagsfromresourcerequest.h \
    removetagsfromresourcerequest_p.h \
    removetagsfromresourceresponse.h \
    removetagsfromresourceresponse_p.h \
    resetdbclusterparametergrouprequest.h \
    resetdbclusterparametergrouprequest_p.h \
    resetdbclusterparametergroupresponse.h \
    resetdbclusterparametergroupresponse_p.h \
    restoredbclusterfromsnapshotrequest.h \
    restoredbclusterfromsnapshotrequest_p.h \
    restoredbclusterfromsnapshotresponse.h \
    restoredbclusterfromsnapshotresponse_p.h \
    restoredbclustertopointintimerequest.h \
    restoredbclustertopointintimerequest_p.h \
    restoredbclustertopointintimeresponse.h \
    restoredbclustertopointintimeresponse_p.h \
    startdbclusterrequest.h \
    startdbclusterrequest_p.h \
    startdbclusterresponse.h \
    startdbclusterresponse_p.h \
    stopdbclusterrequest.h \
    stopdbclusterrequest_p.h \
    stopdbclusterresponse.h \
    stopdbclusterresponse_p.h \

SOURCES += \
    addtagstoresourcerequest.cpp \
    addtagstoresourceresponse.cpp \
    applypendingmaintenanceactionrequest.cpp \
    applypendingmaintenanceactionresponse.cpp \
    copydbclusterparametergrouprequest.cpp \
    copydbclusterparametergroupresponse.cpp \
    copydbclustersnapshotrequest.cpp \
    copydbclustersnapshotresponse.cpp \
    createdbclusterparametergrouprequest.cpp \
    createdbclusterparametergroupresponse.cpp \
    createdbclusterrequest.cpp \
    createdbclusterresponse.cpp \
    createdbclustersnapshotrequest.cpp \
    createdbclustersnapshotresponse.cpp \
    createdbinstancerequest.cpp \
    createdbinstanceresponse.cpp \
    createdbsubnetgrouprequest.cpp \
    createdbsubnetgroupresponse.cpp \
    deletedbclusterparametergrouprequest.cpp \
    deletedbclusterparametergroupresponse.cpp \
    deletedbclusterrequest.cpp \
    deletedbclusterresponse.cpp \
    deletedbclustersnapshotrequest.cpp \
    deletedbclustersnapshotresponse.cpp \
    deletedbinstancerequest.cpp \
    deletedbinstanceresponse.cpp \
    deletedbsubnetgrouprequest.cpp \
    deletedbsubnetgroupresponse.cpp \
    describedbclusterparametergroupsrequest.cpp \
    describedbclusterparametergroupsresponse.cpp \
    describedbclusterparametersrequest.cpp \
    describedbclusterparametersresponse.cpp \
    describedbclustersnapshotattributesrequest.cpp \
    describedbclustersnapshotattributesresponse.cpp \
    describedbclustersnapshotsrequest.cpp \
    describedbclustersnapshotsresponse.cpp \
    describedbclustersrequest.cpp \
    describedbclustersresponse.cpp \
    describedbengineversionsrequest.cpp \
    describedbengineversionsresponse.cpp \
    describedbinstancesrequest.cpp \
    describedbinstancesresponse.cpp \
    describedbsubnetgroupsrequest.cpp \
    describedbsubnetgroupsresponse.cpp \
    describeenginedefaultclusterparametersrequest.cpp \
    describeenginedefaultclusterparametersresponse.cpp \
    describeeventcategoriesrequest.cpp \
    describeeventcategoriesresponse.cpp \
    describeeventsrequest.cpp \
    describeeventsresponse.cpp \
    describeorderabledbinstanceoptionsrequest.cpp \
    describeorderabledbinstanceoptionsresponse.cpp \
    describependingmaintenanceactionsrequest.cpp \
    describependingmaintenanceactionsresponse.cpp \
    docdbclient.cpp \
    docdbrequest.cpp \
    docdbresponse.cpp \
    failoverdbclusterrequest.cpp \
    failoverdbclusterresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    modifydbclusterparametergrouprequest.cpp \
    modifydbclusterparametergroupresponse.cpp \
    modifydbclusterrequest.cpp \
    modifydbclusterresponse.cpp \
    modifydbclustersnapshotattributerequest.cpp \
    modifydbclustersnapshotattributeresponse.cpp \
    modifydbinstancerequest.cpp \
    modifydbinstanceresponse.cpp \
    modifydbsubnetgrouprequest.cpp \
    modifydbsubnetgroupresponse.cpp \
    rebootdbinstancerequest.cpp \
    rebootdbinstanceresponse.cpp \
    removetagsfromresourcerequest.cpp \
    removetagsfromresourceresponse.cpp \
    resetdbclusterparametergrouprequest.cpp \
    resetdbclusterparametergroupresponse.cpp \
    restoredbclusterfromsnapshotrequest.cpp \
    restoredbclusterfromsnapshotresponse.cpp \
    restoredbclustertopointintimerequest.cpp \
    restoredbclustertopointintimeresponse.cpp \
    startdbclusterrequest.cpp \
    startdbclusterresponse.cpp \
    stopdbclusterrequest.cpp \
    stopdbclusterresponse.cpp \

win32:CONFIG += skip_target_version_ext
