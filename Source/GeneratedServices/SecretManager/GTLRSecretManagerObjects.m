// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Secret Manager API (secretmanager/v1beta1)
// Description:
//   Stores and manages access to application secrets. Provides convenience
//   while improving security.
// Documentation:
//   https://cloud.google.com/secret-manager/

#import "GTLRSecretManagerObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRSecretManager_AuditLogConfig.logType
NSString * const kGTLRSecretManager_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRSecretManager_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRSecretManager_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRSecretManager_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRSecretManager_SecretVersion.state
NSString * const kGTLRSecretManager_SecretVersion_State_Destroyed = @"DESTROYED";
NSString * const kGTLRSecretManager_SecretVersion_State_Disabled = @"DISABLED";
NSString * const kGTLRSecretManager_SecretVersion_State_Enabled = @"ENABLED";
NSString * const kGTLRSecretManager_SecretVersion_State_StateUnspecified = @"STATE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_AccessSecretVersionResponse
//

@implementation GTLRSecretManager_AccessSecretVersionResponse
@dynamic name, payload;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_AddSecretVersionRequest
//

@implementation GTLRSecretManager_AddSecretVersionRequest
@dynamic payload;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_AuditConfig
//

@implementation GTLRSecretManager_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRSecretManager_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_AuditLogConfig
//

@implementation GTLRSecretManager_AuditLogConfig
@dynamic exemptedMembers, logType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Automatic
//

@implementation GTLRSecretManager_Automatic
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Binding
//

@implementation GTLRSecretManager_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_DestroySecretVersionRequest
//

@implementation GTLRSecretManager_DestroySecretVersionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_DisableSecretVersionRequest
//

@implementation GTLRSecretManager_DisableSecretVersionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Empty
//

@implementation GTLRSecretManager_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_EnableSecretVersionRequest
//

@implementation GTLRSecretManager_EnableSecretVersionRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Expr
//

@implementation GTLRSecretManager_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_ListLocationsResponse
//

@implementation GTLRSecretManager_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRSecretManager_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_ListSecretsResponse
//

@implementation GTLRSecretManager_ListSecretsResponse
@dynamic nextPageToken, secrets, totalSize;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"secrets" : [GTLRSecretManager_Secret class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"secrets";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_ListSecretVersionsResponse
//

@implementation GTLRSecretManager_ListSecretVersionsResponse
@dynamic nextPageToken, totalSize, versions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"versions" : [GTLRSecretManager_SecretVersion class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"versions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Location
//

@implementation GTLRSecretManager_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Location_Labels
//

@implementation GTLRSecretManager_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Location_Metadata
//

@implementation GTLRSecretManager_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Policy
//

@implementation GTLRSecretManager_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRSecretManager_AuditConfig class],
    @"bindings" : [GTLRSecretManager_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Replica
//

@implementation GTLRSecretManager_Replica
@dynamic location;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Replication
//

@implementation GTLRSecretManager_Replication
@dynamic automatic, userManaged;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Secret
//

@implementation GTLRSecretManager_Secret
@dynamic createTime, labels, name, replication;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_Secret_Labels
//

@implementation GTLRSecretManager_Secret_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_SecretPayload
//

@implementation GTLRSecretManager_SecretPayload
@dynamic data;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_SecretVersion
//

@implementation GTLRSecretManager_SecretVersion
@dynamic createTime, destroyTime, name, state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_SetIamPolicyRequest
//

@implementation GTLRSecretManager_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_TestIamPermissionsRequest
//

@implementation GTLRSecretManager_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_TestIamPermissionsResponse
//

@implementation GTLRSecretManager_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRSecretManager_UserManaged
//

@implementation GTLRSecretManager_UserManaged
@dynamic replicas;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"replicas" : [GTLRSecretManager_Replica class]
  };
  return map;
}

@end
