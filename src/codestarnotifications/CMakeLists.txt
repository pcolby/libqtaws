add_compile_definitions(QTAWSCODESTARNOTIFICATIONS_LIBRARY)

add_library(QtAwsCodeStarNotifications
  codestarnotificationsclient.h
  codestarnotificationsclient_p.h
  codestarnotificationsrequest.h
  codestarnotificationsrequest_p.h
  codestarnotificationsresponse.h
  codestarnotificationsresponse_p.h
  createnotificationrulerequest.h
  createnotificationrulerequest_p.h
  createnotificationruleresponse.h
  createnotificationruleresponse_p.h
  deletenotificationrulerequest.h
  deletenotificationrulerequest_p.h
  deletenotificationruleresponse.h
  deletenotificationruleresponse_p.h
  deletetargetrequest.h
  deletetargetrequest_p.h
  deletetargetresponse.h
  deletetargetresponse_p.h
  describenotificationrulerequest.h
  describenotificationrulerequest_p.h
  describenotificationruleresponse.h
  describenotificationruleresponse_p.h
  listeventtypesrequest.h
  listeventtypesrequest_p.h
  listeventtypesresponse.h
  listeventtypesresponse_p.h
  listnotificationrulesrequest.h
  listnotificationrulesrequest_p.h
  listnotificationrulesresponse.h
  listnotificationrulesresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  listtargetsrequest.h
  listtargetsrequest_p.h
  listtargetsresponse.h
  listtargetsresponse_p.h
  qtawscodestarnotificationsglobal.h
  subscriberequest.h
  subscriberequest_p.h
  subscriberesponse.h
  subscriberesponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  unsubscriberequest.h
  unsubscriberequest_p.h
  unsubscriberesponse.h
  unsubscriberesponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updatenotificationrulerequest.h
  updatenotificationrulerequest_p.h
  updatenotificationruleresponse.h
  updatenotificationruleresponse_p.h
  codestarnotificationsclient.cpp
  codestarnotificationsrequest.cpp
  codestarnotificationsresponse.cpp
  createnotificationrulerequest.cpp
  createnotificationruleresponse.cpp
  deletenotificationrulerequest.cpp
  deletenotificationruleresponse.cpp
  deletetargetrequest.cpp
  deletetargetresponse.cpp
  describenotificationrulerequest.cpp
  describenotificationruleresponse.cpp
  listeventtypesrequest.cpp
  listeventtypesresponse.cpp
  listnotificationrulesrequest.cpp
  listnotificationrulesresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  listtargetsrequest.cpp
  listtargetsresponse.cpp
  subscriberequest.cpp
  subscriberesponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  unsubscriberequest.cpp
  unsubscriberesponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updatenotificationrulerequest.cpp
  updatenotificationruleresponse.cpp)

target_link_libraries(QtAwsCodeStarNotifications
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
