add_compile_definitions(QTAWSSECRETSMANAGER_LIBRARY)

add_library(QtAwsSecretsManager
  cancelrotatesecretrequest.h
  cancelrotatesecretrequest_p.h
  cancelrotatesecretresponse.h
  cancelrotatesecretresponse_p.h
  createsecretrequest.h
  createsecretrequest_p.h
  createsecretresponse.h
  createsecretresponse_p.h
  deleteresourcepolicyrequest.h
  deleteresourcepolicyrequest_p.h
  deleteresourcepolicyresponse.h
  deleteresourcepolicyresponse_p.h
  deletesecretrequest.h
  deletesecretrequest_p.h
  deletesecretresponse.h
  deletesecretresponse_p.h
  describesecretrequest.h
  describesecretrequest_p.h
  describesecretresponse.h
  describesecretresponse_p.h
  getrandompasswordrequest.h
  getrandompasswordrequest_p.h
  getrandompasswordresponse.h
  getrandompasswordresponse_p.h
  getresourcepolicyrequest.h
  getresourcepolicyrequest_p.h
  getresourcepolicyresponse.h
  getresourcepolicyresponse_p.h
  getsecretvaluerequest.h
  getsecretvaluerequest_p.h
  getsecretvalueresponse.h
  getsecretvalueresponse_p.h
  listsecretsrequest.h
  listsecretsrequest_p.h
  listsecretsresponse.h
  listsecretsresponse_p.h
  listsecretversionidsrequest.h
  listsecretversionidsrequest_p.h
  listsecretversionidsresponse.h
  listsecretversionidsresponse_p.h
  putresourcepolicyrequest.h
  putresourcepolicyrequest_p.h
  putresourcepolicyresponse.h
  putresourcepolicyresponse_p.h
  putsecretvaluerequest.h
  putsecretvaluerequest_p.h
  putsecretvalueresponse.h
  putsecretvalueresponse_p.h
  qtawssecretsmanagerglobal.h
  removeregionsfromreplicationrequest.h
  removeregionsfromreplicationrequest_p.h
  removeregionsfromreplicationresponse.h
  removeregionsfromreplicationresponse_p.h
  replicatesecrettoregionsrequest.h
  replicatesecrettoregionsrequest_p.h
  replicatesecrettoregionsresponse.h
  replicatesecrettoregionsresponse_p.h
  restoresecretrequest.h
  restoresecretrequest_p.h
  restoresecretresponse.h
  restoresecretresponse_p.h
  rotatesecretrequest.h
  rotatesecretrequest_p.h
  rotatesecretresponse.h
  rotatesecretresponse_p.h
  secretsmanagerclient.h
  secretsmanagerclient_p.h
  secretsmanagerrequest.h
  secretsmanagerrequest_p.h
  secretsmanagerresponse.h
  secretsmanagerresponse_p.h
  stopreplicationtoreplicarequest.h
  stopreplicationtoreplicarequest_p.h
  stopreplicationtoreplicaresponse.h
  stopreplicationtoreplicaresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updatesecretrequest.h
  updatesecretrequest_p.h
  updatesecretresponse.h
  updatesecretresponse_p.h
  updatesecretversionstagerequest.h
  updatesecretversionstagerequest_p.h
  updatesecretversionstageresponse.h
  updatesecretversionstageresponse_p.h
  validateresourcepolicyrequest.h
  validateresourcepolicyrequest_p.h
  validateresourcepolicyresponse.h
  validateresourcepolicyresponse_p.h
  cancelrotatesecretrequest.cpp
  cancelrotatesecretresponse.cpp
  createsecretrequest.cpp
  createsecretresponse.cpp
  deleteresourcepolicyrequest.cpp
  deleteresourcepolicyresponse.cpp
  deletesecretrequest.cpp
  deletesecretresponse.cpp
  describesecretrequest.cpp
  describesecretresponse.cpp
  getrandompasswordrequest.cpp
  getrandompasswordresponse.cpp
  getresourcepolicyrequest.cpp
  getresourcepolicyresponse.cpp
  getsecretvaluerequest.cpp
  getsecretvalueresponse.cpp
  listsecretsrequest.cpp
  listsecretsresponse.cpp
  listsecretversionidsrequest.cpp
  listsecretversionidsresponse.cpp
  putresourcepolicyrequest.cpp
  putresourcepolicyresponse.cpp
  putsecretvaluerequest.cpp
  putsecretvalueresponse.cpp
  removeregionsfromreplicationrequest.cpp
  removeregionsfromreplicationresponse.cpp
  replicatesecrettoregionsrequest.cpp
  replicatesecrettoregionsresponse.cpp
  restoresecretrequest.cpp
  restoresecretresponse.cpp
  rotatesecretrequest.cpp
  rotatesecretresponse.cpp
  secretsmanagerclient.cpp
  secretsmanagerrequest.cpp
  secretsmanagerresponse.cpp
  stopreplicationtoreplicarequest.cpp
  stopreplicationtoreplicaresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updatesecretrequest.cpp
  updatesecretresponse.cpp
  updatesecretversionstagerequest.cpp
  updatesecretversionstageresponse.cpp
  validateresourcepolicyrequest.cpp
  validateresourcepolicyresponse.cpp)

target_link_libraries(QtAwsSecretsManager
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
