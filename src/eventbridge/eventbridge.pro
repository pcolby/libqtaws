include(../../common.pri)

TARGET = QtAwsEventBridge
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    activateeventsourcerequest.h \
    activateeventsourcerequest_p.h \
    activateeventsourceresponse.h \
    activateeventsourceresponse_p.h \
    createeventbusrequest.h \
    createeventbusrequest_p.h \
    createeventbusresponse.h \
    createeventbusresponse_p.h \
    createpartnereventsourcerequest.h \
    createpartnereventsourcerequest_p.h \
    createpartnereventsourceresponse.h \
    createpartnereventsourceresponse_p.h \
    deactivateeventsourcerequest.h \
    deactivateeventsourcerequest_p.h \
    deactivateeventsourceresponse.h \
    deactivateeventsourceresponse_p.h \
    deleteeventbusrequest.h \
    deleteeventbusrequest_p.h \
    deleteeventbusresponse.h \
    deleteeventbusresponse_p.h \
    deletepartnereventsourcerequest.h \
    deletepartnereventsourcerequest_p.h \
    deletepartnereventsourceresponse.h \
    deletepartnereventsourceresponse_p.h \
    deleterulerequest.h \
    deleterulerequest_p.h \
    deleteruleresponse.h \
    deleteruleresponse_p.h \
    describeeventbusrequest.h \
    describeeventbusrequest_p.h \
    describeeventbusresponse.h \
    describeeventbusresponse_p.h \
    describeeventsourcerequest.h \
    describeeventsourcerequest_p.h \
    describeeventsourceresponse.h \
    describeeventsourceresponse_p.h \
    describepartnereventsourcerequest.h \
    describepartnereventsourcerequest_p.h \
    describepartnereventsourceresponse.h \
    describepartnereventsourceresponse_p.h \
    describerulerequest.h \
    describerulerequest_p.h \
    describeruleresponse.h \
    describeruleresponse_p.h \
    disablerulerequest.h \
    disablerulerequest_p.h \
    disableruleresponse.h \
    disableruleresponse_p.h \
    enablerulerequest.h \
    enablerulerequest_p.h \
    enableruleresponse.h \
    enableruleresponse_p.h \
    eventbridgeclient.h \
    eventbridgeclient_p.h \
    eventbridgerequest.h \
    eventbridgerequest_p.h \
    eventbridgeresponse.h \
    eventbridgeresponse_p.h \
    listeventbusesrequest.h \
    listeventbusesrequest_p.h \
    listeventbusesresponse.h \
    listeventbusesresponse_p.h \
    listeventsourcesrequest.h \
    listeventsourcesrequest_p.h \
    listeventsourcesresponse.h \
    listeventsourcesresponse_p.h \
    listpartnereventsourceaccountsrequest.h \
    listpartnereventsourceaccountsrequest_p.h \
    listpartnereventsourceaccountsresponse.h \
    listpartnereventsourceaccountsresponse_p.h \
    listpartnereventsourcesrequest.h \
    listpartnereventsourcesrequest_p.h \
    listpartnereventsourcesresponse.h \
    listpartnereventsourcesresponse_p.h \
    listrulenamesbytargetrequest.h \
    listrulenamesbytargetrequest_p.h \
    listrulenamesbytargetresponse.h \
    listrulenamesbytargetresponse_p.h \
    listrulesrequest.h \
    listrulesrequest_p.h \
    listrulesresponse.h \
    listrulesresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listtargetsbyrulerequest.h \
    listtargetsbyrulerequest_p.h \
    listtargetsbyruleresponse.h \
    listtargetsbyruleresponse_p.h \
    puteventsrequest.h \
    puteventsrequest_p.h \
    puteventsresponse.h \
    puteventsresponse_p.h \
    putpartnereventsrequest.h \
    putpartnereventsrequest_p.h \
    putpartnereventsresponse.h \
    putpartnereventsresponse_p.h \
    putpermissionrequest.h \
    putpermissionrequest_p.h \
    putpermissionresponse.h \
    putpermissionresponse_p.h \
    putrulerequest.h \
    putrulerequest_p.h \
    putruleresponse.h \
    putruleresponse_p.h \
    puttargetsrequest.h \
    puttargetsrequest_p.h \
    puttargetsresponse.h \
    puttargetsresponse_p.h \
    removepermissionrequest.h \
    removepermissionrequest_p.h \
    removepermissionresponse.h \
    removepermissionresponse_p.h \
    removetargetsrequest.h \
    removetargetsrequest_p.h \
    removetargetsresponse.h \
    removetargetsresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    testeventpatternrequest.h \
    testeventpatternrequest_p.h \
    testeventpatternresponse.h \
    testeventpatternresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \

SOURCES += \
    activateeventsourcerequest.cpp \
    activateeventsourceresponse.cpp \
    createeventbusrequest.cpp \
    createeventbusresponse.cpp \
    createpartnereventsourcerequest.cpp \
    createpartnereventsourceresponse.cpp \
    deactivateeventsourcerequest.cpp \
    deactivateeventsourceresponse.cpp \
    deleteeventbusrequest.cpp \
    deleteeventbusresponse.cpp \
    deletepartnereventsourcerequest.cpp \
    deletepartnereventsourceresponse.cpp \
    deleterulerequest.cpp \
    deleteruleresponse.cpp \
    describeeventbusrequest.cpp \
    describeeventbusresponse.cpp \
    describeeventsourcerequest.cpp \
    describeeventsourceresponse.cpp \
    describepartnereventsourcerequest.cpp \
    describepartnereventsourceresponse.cpp \
    describerulerequest.cpp \
    describeruleresponse.cpp \
    disablerulerequest.cpp \
    disableruleresponse.cpp \
    enablerulerequest.cpp \
    enableruleresponse.cpp \
    eventbridgeclient.cpp \
    eventbridgerequest.cpp \
    eventbridgeresponse.cpp \
    listeventbusesrequest.cpp \
    listeventbusesresponse.cpp \
    listeventsourcesrequest.cpp \
    listeventsourcesresponse.cpp \
    listpartnereventsourceaccountsrequest.cpp \
    listpartnereventsourceaccountsresponse.cpp \
    listpartnereventsourcesrequest.cpp \
    listpartnereventsourcesresponse.cpp \
    listrulenamesbytargetrequest.cpp \
    listrulenamesbytargetresponse.cpp \
    listrulesrequest.cpp \
    listrulesresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listtargetsbyrulerequest.cpp \
    listtargetsbyruleresponse.cpp \
    puteventsrequest.cpp \
    puteventsresponse.cpp \
    putpartnereventsrequest.cpp \
    putpartnereventsresponse.cpp \
    putpermissionrequest.cpp \
    putpermissionresponse.cpp \
    putrulerequest.cpp \
    putruleresponse.cpp \
    puttargetsrequest.cpp \
    puttargetsresponse.cpp \
    removepermissionrequest.cpp \
    removepermissionresponse.cpp \
    removetargetsrequest.cpp \
    removetargetsresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    testeventpatternrequest.cpp \
    testeventpatternresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \

win32:CONFIG += skip_target_version_ext
