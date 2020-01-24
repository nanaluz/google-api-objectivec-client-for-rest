// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Asset API (cloudasset/v1)
// Description:
//   The cloud asset API manages the history and inventory of cloud resources.
// Documentation:
//   https://cloud.google.com/asset-inventory/docs/quickstart

#import "GTLRCloudAssetQuery.h"

#import "GTLRCloudAssetObjects.h"

// ----------------------------------------------------------------------------
// Constants

// contentType
NSString * const kGTLRCloudAssetContentTypeAccessPolicy        = @"ACCESS_POLICY";
NSString * const kGTLRCloudAssetContentTypeContentTypeUnspecified = @"CONTENT_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudAssetContentTypeIamPolicy           = @"IAM_POLICY";
NSString * const kGTLRCloudAssetContentTypeOrgPolicy           = @"ORG_POLICY";
NSString * const kGTLRCloudAssetContentTypeResource            = @"RESOURCE";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRCloudAssetQuery

@dynamic fields;

@end

@implementation GTLRCloudAssetQuery_FeedsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudAsset_CreateFeedRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/feeds";
  GTLRCloudAssetQuery_FeedsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudAsset_Feed class];
  query.loggingName = @"cloudasset.feeds.create";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_FeedsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudAssetQuery_FeedsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudAsset_Empty class];
  query.loggingName = @"cloudasset.feeds.delete";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_FeedsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudAssetQuery_FeedsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudAsset_Feed class];
  query.loggingName = @"cloudasset.feeds.get";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_FeedsList

@dynamic parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/feeds";
  GTLRCloudAssetQuery_FeedsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudAsset_ListFeedsResponse class];
  query.loggingName = @"cloudasset.feeds.list";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_FeedsPatch

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudAsset_UpdateFeedRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudAssetQuery_FeedsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudAsset_Feed class];
  query.loggingName = @"cloudasset.feeds.patch";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_OperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudAssetQuery_OperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudAsset_Operation class];
  query.loggingName = @"cloudasset.operations.get";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_V1BatchGetAssetsHistory

@dynamic assetNames, contentType, parent, readTimeWindowEndTime,
         readTimeWindowStartTime;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"readTimeWindowEndTime" : @"readTimeWindow.endTime",
    @"readTimeWindowStartTime" : @"readTimeWindow.startTime"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"assetNames" : [NSString class]
  };
  return map;
}

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:batchGetAssetsHistory";
  GTLRCloudAssetQuery_V1BatchGetAssetsHistory *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudAsset_BatchGetAssetsHistoryResponse class];
  query.loggingName = @"cloudasset.batchGetAssetsHistory";
  return query;
}

@end

@implementation GTLRCloudAssetQuery_V1ExportAssets

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudAsset_ExportAssetsRequest *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:exportAssets";
  GTLRCloudAssetQuery_V1ExportAssets *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudAsset_Operation class];
  query.loggingName = @"cloudasset.exportAssets";
  return query;
}

@end
