add_compile_definitions(QTAWSPERSONALIZEEVENTS_LIBRARY)

add_library(QtAwsPersonalizeEvents
  personalizeeventsclient.h
  personalizeeventsclient_p.h
  personalizeeventsrequest.h
  personalizeeventsrequest_p.h
  personalizeeventsresponse.h
  personalizeeventsresponse_p.h
  puteventsrequest.h
  puteventsrequest_p.h
  puteventsresponse.h
  puteventsresponse_p.h
  putitemsrequest.h
  putitemsrequest_p.h
  putitemsresponse.h
  putitemsresponse_p.h
  putusersrequest.h
  putusersrequest_p.h
  putusersresponse.h
  putusersresponse_p.h
  qtawspersonalizeeventsglobal.h
  personalizeeventsclient.cpp
  personalizeeventsrequest.cpp
  personalizeeventsresponse.cpp
  puteventsrequest.cpp
  puteventsresponse.cpp
  putitemsrequest.cpp
  putitemsresponse.cpp
  putusersrequest.cpp
  putusersresponse.cpp)

target_link_libraries(QtAwsPersonalizeEvents
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
