add_compile_definitions(QTAWSIDENTITYSTORE_LIBRARY)

add_library(QtAwsIdentityStore
  describegrouprequest.h
  describegrouprequest_p.h
  describegroupresponse.h
  describegroupresponse_p.h
  describeuserrequest.h
  describeuserrequest_p.h
  describeuserresponse.h
  describeuserresponse_p.h
  identitystoreclient.h
  identitystoreclient_p.h
  identitystorerequest.h
  identitystorerequest_p.h
  identitystoreresponse.h
  identitystoreresponse_p.h
  listgroupsrequest.h
  listgroupsrequest_p.h
  listgroupsresponse.h
  listgroupsresponse_p.h
  listusersrequest.h
  listusersrequest_p.h
  listusersresponse.h
  listusersresponse_p.h
  qtawsidentitystoreglobal.h
  describegrouprequest.cpp
  describegroupresponse.cpp
  describeuserrequest.cpp
  describeuserresponse.cpp
  identitystoreclient.cpp
  identitystorerequest.cpp
  identitystoreresponse.cpp
  listgroupsrequest.cpp
  listgroupsresponse.cpp
  listusersrequest.cpp
  listusersresponse.cpp)

target_link_libraries(QtAwsIdentityStore
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
