include(../../common.pri)

TARGET = QtAwsSns
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addpermissionrequest.h \
    addpermissionrequest_p.h \
    addpermissionresponse.h \
    addpermissionresponse_p.h \
    checkifphonenumberisoptedoutrequest.h \
    checkifphonenumberisoptedoutrequest_p.h \
    checkifphonenumberisoptedoutresponse.h \
    checkifphonenumberisoptedoutresponse_p.h \
    confirmsubscriptionrequest.h \
    confirmsubscriptionrequest_p.h \
    confirmsubscriptionresponse.h \
    confirmsubscriptionresponse_p.h \
    createplatformapplicationrequest.h \
    createplatformapplicationrequest_p.h \
    createplatformapplicationresponse.h \
    createplatformapplicationresponse_p.h \
    createplatformendpointrequest.h \
    createplatformendpointrequest_p.h \
    createplatformendpointresponse.h \
    createplatformendpointresponse_p.h \
    createtopicrequest.h \
    createtopicrequest_p.h \
    createtopicresponse.h \
    createtopicresponse_p.h \
    deleteendpointrequest.h \
    deleteendpointrequest_p.h \
    deleteendpointresponse.h \
    deleteendpointresponse_p.h \
    deleteplatformapplicationrequest.h \
    deleteplatformapplicationrequest_p.h \
    deleteplatformapplicationresponse.h \
    deleteplatformapplicationresponse_p.h \
    deletetopicrequest.h \
    deletetopicrequest_p.h \
    deletetopicresponse.h \
    deletetopicresponse_p.h \
    getendpointattributesrequest.h \
    getendpointattributesrequest_p.h \
    getendpointattributesresponse.h \
    getendpointattributesresponse_p.h \
    getplatformapplicationattributesrequest.h \
    getplatformapplicationattributesrequest_p.h \
    getplatformapplicationattributesresponse.h \
    getplatformapplicationattributesresponse_p.h \
    getsmsattributesrequest.h \
    getsmsattributesrequest_p.h \
    getsmsattributesresponse.h \
    getsmsattributesresponse_p.h \
    getsubscriptionattributesrequest.h \
    getsubscriptionattributesrequest_p.h \
    getsubscriptionattributesresponse.h \
    getsubscriptionattributesresponse_p.h \
    gettopicattributesrequest.h \
    gettopicattributesrequest_p.h \
    gettopicattributesresponse.h \
    gettopicattributesresponse_p.h \
    listendpointsbyplatformapplicationrequest.h \
    listendpointsbyplatformapplicationrequest_p.h \
    listendpointsbyplatformapplicationresponse.h \
    listendpointsbyplatformapplicationresponse_p.h \
    listphonenumbersoptedoutrequest.h \
    listphonenumbersoptedoutrequest_p.h \
    listphonenumbersoptedoutresponse.h \
    listphonenumbersoptedoutresponse_p.h \
    listplatformapplicationsrequest.h \
    listplatformapplicationsrequest_p.h \
    listplatformapplicationsresponse.h \
    listplatformapplicationsresponse_p.h \
    listsubscriptionsbytopicrequest.h \
    listsubscriptionsbytopicrequest_p.h \
    listsubscriptionsbytopicresponse.h \
    listsubscriptionsbytopicresponse_p.h \
    listsubscriptionsrequest.h \
    listsubscriptionsrequest_p.h \
    listsubscriptionsresponse.h \
    listsubscriptionsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listtopicsrequest.h \
    listtopicsrequest_p.h \
    listtopicsresponse.h \
    listtopicsresponse_p.h \
    optinphonenumberrequest.h \
    optinphonenumberrequest_p.h \
    optinphonenumberresponse.h \
    optinphonenumberresponse_p.h \
    publishrequest.h \
    publishrequest_p.h \
    publishresponse.h \
    publishresponse_p.h \
    removepermissionrequest.h \
    removepermissionrequest_p.h \
    removepermissionresponse.h \
    removepermissionresponse_p.h \
    setendpointattributesrequest.h \
    setendpointattributesrequest_p.h \
    setendpointattributesresponse.h \
    setendpointattributesresponse_p.h \
    setplatformapplicationattributesrequest.h \
    setplatformapplicationattributesrequest_p.h \
    setplatformapplicationattributesresponse.h \
    setplatformapplicationattributesresponse_p.h \
    setsmsattributesrequest.h \
    setsmsattributesrequest_p.h \
    setsmsattributesresponse.h \
    setsmsattributesresponse_p.h \
    setsubscriptionattributesrequest.h \
    setsubscriptionattributesrequest_p.h \
    setsubscriptionattributesresponse.h \
    setsubscriptionattributesresponse_p.h \
    settopicattributesrequest.h \
    settopicattributesrequest_p.h \
    settopicattributesresponse.h \
    settopicattributesresponse_p.h \
    snsclient.h \
    snsclient_p.h \
    snsrequest.h \
    snsrequest_p.h \
    snsresponse.h \
    snsresponse_p.h \
    subscriberequest.h \
    subscriberequest_p.h \
    subscriberesponse.h \
    subscriberesponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    unsubscriberequest.h \
    unsubscriberequest_p.h \
    unsubscriberesponse.h \
    unsubscriberesponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \

SOURCES += \
    addpermissionrequest.cpp \
    addpermissionresponse.cpp \
    checkifphonenumberisoptedoutrequest.cpp \
    checkifphonenumberisoptedoutresponse.cpp \
    confirmsubscriptionrequest.cpp \
    confirmsubscriptionresponse.cpp \
    createplatformapplicationrequest.cpp \
    createplatformapplicationresponse.cpp \
    createplatformendpointrequest.cpp \
    createplatformendpointresponse.cpp \
    createtopicrequest.cpp \
    createtopicresponse.cpp \
    deleteendpointrequest.cpp \
    deleteendpointresponse.cpp \
    deleteplatformapplicationrequest.cpp \
    deleteplatformapplicationresponse.cpp \
    deletetopicrequest.cpp \
    deletetopicresponse.cpp \
    getendpointattributesrequest.cpp \
    getendpointattributesresponse.cpp \
    getplatformapplicationattributesrequest.cpp \
    getplatformapplicationattributesresponse.cpp \
    getsmsattributesrequest.cpp \
    getsmsattributesresponse.cpp \
    getsubscriptionattributesrequest.cpp \
    getsubscriptionattributesresponse.cpp \
    gettopicattributesrequest.cpp \
    gettopicattributesresponse.cpp \
    listendpointsbyplatformapplicationrequest.cpp \
    listendpointsbyplatformapplicationresponse.cpp \
    listphonenumbersoptedoutrequest.cpp \
    listphonenumbersoptedoutresponse.cpp \
    listplatformapplicationsrequest.cpp \
    listplatformapplicationsresponse.cpp \
    listsubscriptionsbytopicrequest.cpp \
    listsubscriptionsbytopicresponse.cpp \
    listsubscriptionsrequest.cpp \
    listsubscriptionsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listtopicsrequest.cpp \
    listtopicsresponse.cpp \
    optinphonenumberrequest.cpp \
    optinphonenumberresponse.cpp \
    publishrequest.cpp \
    publishresponse.cpp \
    removepermissionrequest.cpp \
    removepermissionresponse.cpp \
    setendpointattributesrequest.cpp \
    setendpointattributesresponse.cpp \
    setplatformapplicationattributesrequest.cpp \
    setplatformapplicationattributesresponse.cpp \
    setsmsattributesrequest.cpp \
    setsmsattributesresponse.cpp \
    setsubscriptionattributesrequest.cpp \
    setsubscriptionattributesresponse.cpp \
    settopicattributesrequest.cpp \
    settopicattributesresponse.cpp \
    snsclient.cpp \
    snsrequest.cpp \
    snsresponse.cpp \
    subscriberequest.cpp \
    subscriberesponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    unsubscriberequest.cpp \
    unsubscriberesponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \

win32:CONFIG += skip_target_version_ext
