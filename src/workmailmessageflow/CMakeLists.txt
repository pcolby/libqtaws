add_compile_definitions(QTAWSWORKMAILMESSAGEFLOW_LIBRARY)

add_library(QtAwsWorkMailMessageFlow
  getrawmessagecontentrequest.h
  getrawmessagecontentrequest_p.h
  getrawmessagecontentresponse.h
  getrawmessagecontentresponse_p.h
  putrawmessagecontentrequest.h
  putrawmessagecontentrequest_p.h
  putrawmessagecontentresponse.h
  putrawmessagecontentresponse_p.h
  qtawsworkmailmessageflowglobal.h
  workmailmessageflowclient.h
  workmailmessageflowclient_p.h
  workmailmessageflowrequest.h
  workmailmessageflowrequest_p.h
  workmailmessageflowresponse.h
  workmailmessageflowresponse_p.h
  getrawmessagecontentrequest.cpp
  getrawmessagecontentresponse.cpp
  putrawmessagecontentrequest.cpp
  putrawmessagecontentresponse.cpp
  workmailmessageflowclient.cpp
  workmailmessageflowrequest.cpp
  workmailmessageflowresponse.cpp)

target_link_libraries(QtAwsWorkMailMessageFlow
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
