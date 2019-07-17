include(../../common.pri)

TARGET = QtAwsServiceQuotas
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associateservicequotatemplaterequest.h \
    associateservicequotatemplaterequest_p.h \
    associateservicequotatemplateresponse.h \
    associateservicequotatemplateresponse_p.h \
    deleteservicequotaincreaserequestfromtemplaterequest.h \
    deleteservicequotaincreaserequestfromtemplaterequest_p.h \
    deleteservicequotaincreaserequestfromtemplateresponse.h \
    deleteservicequotaincreaserequestfromtemplateresponse_p.h \
    disassociateservicequotatemplaterequest.h \
    disassociateservicequotatemplaterequest_p.h \
    disassociateservicequotatemplateresponse.h \
    disassociateservicequotatemplateresponse_p.h \
    getassociationforservicequotatemplaterequest.h \
    getassociationforservicequotatemplaterequest_p.h \
    getassociationforservicequotatemplateresponse.h \
    getassociationforservicequotatemplateresponse_p.h \
    getawsdefaultservicequotarequest.h \
    getawsdefaultservicequotarequest_p.h \
    getawsdefaultservicequotaresponse.h \
    getawsdefaultservicequotaresponse_p.h \
    getrequestedservicequotachangerequest.h \
    getrequestedservicequotachangerequest_p.h \
    getrequestedservicequotachangeresponse.h \
    getrequestedservicequotachangeresponse_p.h \
    getservicequotaincreaserequestfromtemplaterequest.h \
    getservicequotaincreaserequestfromtemplaterequest_p.h \
    getservicequotaincreaserequestfromtemplateresponse.h \
    getservicequotaincreaserequestfromtemplateresponse_p.h \
    getservicequotarequest.h \
    getservicequotarequest_p.h \
    getservicequotaresponse.h \
    getservicequotaresponse_p.h \
    listawsdefaultservicequotasrequest.h \
    listawsdefaultservicequotasrequest_p.h \
    listawsdefaultservicequotasresponse.h \
    listawsdefaultservicequotasresponse_p.h \
    listrequestedservicequotachangehistorybyquotarequest.h \
    listrequestedservicequotachangehistorybyquotarequest_p.h \
    listrequestedservicequotachangehistorybyquotaresponse.h \
    listrequestedservicequotachangehistorybyquotaresponse_p.h \
    listrequestedservicequotachangehistoryrequest.h \
    listrequestedservicequotachangehistoryrequest_p.h \
    listrequestedservicequotachangehistoryresponse.h \
    listrequestedservicequotachangehistoryresponse_p.h \
    listservicequotaincreaserequestsintemplaterequest.h \
    listservicequotaincreaserequestsintemplaterequest_p.h \
    listservicequotaincreaserequestsintemplateresponse.h \
    listservicequotaincreaserequestsintemplateresponse_p.h \
    listservicequotasrequest.h \
    listservicequotasrequest_p.h \
    listservicequotasresponse.h \
    listservicequotasresponse_p.h \
    listservicesrequest.h \
    listservicesrequest_p.h \
    listservicesresponse.h \
    listservicesresponse_p.h \
    putservicequotaincreaserequestintotemplaterequest.h \
    putservicequotaincreaserequestintotemplaterequest_p.h \
    putservicequotaincreaserequestintotemplateresponse.h \
    putservicequotaincreaserequestintotemplateresponse_p.h \
    requestservicequotaincreaserequest.h \
    requestservicequotaincreaserequest_p.h \
    requestservicequotaincreaseresponse.h \
    requestservicequotaincreaseresponse_p.h \
    servicequotasclient.h \
    servicequotasclient_p.h \
    servicequotasrequest.h \
    servicequotasrequest_p.h \
    servicequotasresponse.h \
    servicequotasresponse_p.h \

SOURCES += \
    associateservicequotatemplaterequest.cpp \
    associateservicequotatemplateresponse.cpp \
    deleteservicequotaincreaserequestfromtemplaterequest.cpp \
    deleteservicequotaincreaserequestfromtemplateresponse.cpp \
    disassociateservicequotatemplaterequest.cpp \
    disassociateservicequotatemplateresponse.cpp \
    getassociationforservicequotatemplaterequest.cpp \
    getassociationforservicequotatemplateresponse.cpp \
    getawsdefaultservicequotarequest.cpp \
    getawsdefaultservicequotaresponse.cpp \
    getrequestedservicequotachangerequest.cpp \
    getrequestedservicequotachangeresponse.cpp \
    getservicequotaincreaserequestfromtemplaterequest.cpp \
    getservicequotaincreaserequestfromtemplateresponse.cpp \
    getservicequotarequest.cpp \
    getservicequotaresponse.cpp \
    listawsdefaultservicequotasrequest.cpp \
    listawsdefaultservicequotasresponse.cpp \
    listrequestedservicequotachangehistorybyquotarequest.cpp \
    listrequestedservicequotachangehistorybyquotaresponse.cpp \
    listrequestedservicequotachangehistoryrequest.cpp \
    listrequestedservicequotachangehistoryresponse.cpp \
    listservicequotaincreaserequestsintemplaterequest.cpp \
    listservicequotaincreaserequestsintemplateresponse.cpp \
    listservicequotasrequest.cpp \
    listservicequotasresponse.cpp \
    listservicesrequest.cpp \
    listservicesresponse.cpp \
    putservicequotaincreaserequestintotemplaterequest.cpp \
    putservicequotaincreaserequestintotemplateresponse.cpp \
    requestservicequotaincreaserequest.cpp \
    requestservicequotaincreaseresponse.cpp \
    servicequotasclient.cpp \
    servicequotasrequest.cpp \
    servicequotasresponse.cpp \

win32:CONFIG += skip_target_version_ext
