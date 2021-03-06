add_compile_definitions(QTAWSCOMPREHENDMEDICAL_LIBRARY)

add_library(QtAwsComprehendMedical
  comprehendmedicalclient.h
  comprehendmedicalclient_p.h
  comprehendmedicalrequest.h
  comprehendmedicalrequest_p.h
  comprehendmedicalresponse.h
  comprehendmedicalresponse_p.h
  describeentitiesdetectionv2jobrequest.h
  describeentitiesdetectionv2jobrequest_p.h
  describeentitiesdetectionv2jobresponse.h
  describeentitiesdetectionv2jobresponse_p.h
  describeicd10cminferencejobrequest.h
  describeicd10cminferencejobrequest_p.h
  describeicd10cminferencejobresponse.h
  describeicd10cminferencejobresponse_p.h
  describephidetectionjobrequest.h
  describephidetectionjobrequest_p.h
  describephidetectionjobresponse.h
  describephidetectionjobresponse_p.h
  describerxnorminferencejobrequest.h
  describerxnorminferencejobrequest_p.h
  describerxnorminferencejobresponse.h
  describerxnorminferencejobresponse_p.h
  detectentitiesrequest.h
  detectentitiesrequest_p.h
  detectentitiesresponse.h
  detectentitiesresponse_p.h
  detectentitiesv2request.h
  detectentitiesv2request_p.h
  detectentitiesv2response.h
  detectentitiesv2response_p.h
  detectphirequest.h
  detectphirequest_p.h
  detectphiresponse.h
  detectphiresponse_p.h
  infericd10cmrequest.h
  infericd10cmrequest_p.h
  infericd10cmresponse.h
  infericd10cmresponse_p.h
  inferrxnormrequest.h
  inferrxnormrequest_p.h
  inferrxnormresponse.h
  inferrxnormresponse_p.h
  listentitiesdetectionv2jobsrequest.h
  listentitiesdetectionv2jobsrequest_p.h
  listentitiesdetectionv2jobsresponse.h
  listentitiesdetectionv2jobsresponse_p.h
  listicd10cminferencejobsrequest.h
  listicd10cminferencejobsrequest_p.h
  listicd10cminferencejobsresponse.h
  listicd10cminferencejobsresponse_p.h
  listphidetectionjobsrequest.h
  listphidetectionjobsrequest_p.h
  listphidetectionjobsresponse.h
  listphidetectionjobsresponse_p.h
  listrxnorminferencejobsrequest.h
  listrxnorminferencejobsrequest_p.h
  listrxnorminferencejobsresponse.h
  listrxnorminferencejobsresponse_p.h
  qtawscomprehendmedicalglobal.h
  startentitiesdetectionv2jobrequest.h
  startentitiesdetectionv2jobrequest_p.h
  startentitiesdetectionv2jobresponse.h
  startentitiesdetectionv2jobresponse_p.h
  starticd10cminferencejobrequest.h
  starticd10cminferencejobrequest_p.h
  starticd10cminferencejobresponse.h
  starticd10cminferencejobresponse_p.h
  startphidetectionjobrequest.h
  startphidetectionjobrequest_p.h
  startphidetectionjobresponse.h
  startphidetectionjobresponse_p.h
  startrxnorminferencejobrequest.h
  startrxnorminferencejobrequest_p.h
  startrxnorminferencejobresponse.h
  startrxnorminferencejobresponse_p.h
  stopentitiesdetectionv2jobrequest.h
  stopentitiesdetectionv2jobrequest_p.h
  stopentitiesdetectionv2jobresponse.h
  stopentitiesdetectionv2jobresponse_p.h
  stopicd10cminferencejobrequest.h
  stopicd10cminferencejobrequest_p.h
  stopicd10cminferencejobresponse.h
  stopicd10cminferencejobresponse_p.h
  stopphidetectionjobrequest.h
  stopphidetectionjobrequest_p.h
  stopphidetectionjobresponse.h
  stopphidetectionjobresponse_p.h
  stoprxnorminferencejobrequest.h
  stoprxnorminferencejobrequest_p.h
  stoprxnorminferencejobresponse.h
  stoprxnorminferencejobresponse_p.h
  comprehendmedicalclient.cpp
  comprehendmedicalrequest.cpp
  comprehendmedicalresponse.cpp
  describeentitiesdetectionv2jobrequest.cpp
  describeentitiesdetectionv2jobresponse.cpp
  describeicd10cminferencejobrequest.cpp
  describeicd10cminferencejobresponse.cpp
  describephidetectionjobrequest.cpp
  describephidetectionjobresponse.cpp
  describerxnorminferencejobrequest.cpp
  describerxnorminferencejobresponse.cpp
  detectentitiesrequest.cpp
  detectentitiesresponse.cpp
  detectentitiesv2request.cpp
  detectentitiesv2response.cpp
  detectphirequest.cpp
  detectphiresponse.cpp
  infericd10cmrequest.cpp
  infericd10cmresponse.cpp
  inferrxnormrequest.cpp
  inferrxnormresponse.cpp
  listentitiesdetectionv2jobsrequest.cpp
  listentitiesdetectionv2jobsresponse.cpp
  listicd10cminferencejobsrequest.cpp
  listicd10cminferencejobsresponse.cpp
  listphidetectionjobsrequest.cpp
  listphidetectionjobsresponse.cpp
  listrxnorminferencejobsrequest.cpp
  listrxnorminferencejobsresponse.cpp
  startentitiesdetectionv2jobrequest.cpp
  startentitiesdetectionv2jobresponse.cpp
  starticd10cminferencejobrequest.cpp
  starticd10cminferencejobresponse.cpp
  startphidetectionjobrequest.cpp
  startphidetectionjobresponse.cpp
  startrxnorminferencejobrequest.cpp
  startrxnorminferencejobresponse.cpp
  stopentitiesdetectionv2jobrequest.cpp
  stopentitiesdetectionv2jobresponse.cpp
  stopicd10cminferencejobrequest.cpp
  stopicd10cminferencejobresponse.cpp
  stopphidetectionjobrequest.cpp
  stopphidetectionjobresponse.cpp
  stoprxnorminferencejobrequest.cpp
  stoprxnorminferencejobresponse.cpp)

target_link_libraries(QtAwsComprehendMedical
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
