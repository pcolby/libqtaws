add_compile_definitions(QTAWSEBS_LIBRARY)

add_library(QtAwsEbs
  completesnapshotrequest.h
  completesnapshotrequest_p.h
  completesnapshotresponse.h
  completesnapshotresponse_p.h
  ebsclient.h
  ebsclient_p.h
  ebsrequest.h
  ebsrequest_p.h
  ebsresponse.h
  ebsresponse_p.h
  getsnapshotblockrequest.h
  getsnapshotblockrequest_p.h
  getsnapshotblockresponse.h
  getsnapshotblockresponse_p.h
  listchangedblocksrequest.h
  listchangedblocksrequest_p.h
  listchangedblocksresponse.h
  listchangedblocksresponse_p.h
  listsnapshotblocksrequest.h
  listsnapshotblocksrequest_p.h
  listsnapshotblocksresponse.h
  listsnapshotblocksresponse_p.h
  putsnapshotblockrequest.h
  putsnapshotblockrequest_p.h
  putsnapshotblockresponse.h
  putsnapshotblockresponse_p.h
  qtawsebsglobal.h
  startsnapshotrequest.h
  startsnapshotrequest_p.h
  startsnapshotresponse.h
  startsnapshotresponse_p.h
  completesnapshotrequest.cpp
  completesnapshotresponse.cpp
  ebsclient.cpp
  ebsrequest.cpp
  ebsresponse.cpp
  getsnapshotblockrequest.cpp
  getsnapshotblockresponse.cpp
  listchangedblocksrequest.cpp
  listchangedblocksresponse.cpp
  listsnapshotblocksrequest.cpp
  listsnapshotblocksresponse.cpp
  putsnapshotblockrequest.cpp
  putsnapshotblockresponse.cpp
  startsnapshotrequest.cpp
  startsnapshotresponse.cpp)

target_link_libraries(QtAwsEbs
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
