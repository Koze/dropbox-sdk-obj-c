///
/// Auto-generated by Stone, do not modify.
///

#import "DbxFilesListFolderArg.h"
#import "DbxStoneSerializers.h"
#import "DbxStoneValidators.h"

@implementation DbxFilesListFolderArg 

- (instancetype)initWithPath:(NSString *)path recursive:(NSNumber *)recursive includeMediaInfo:(NSNumber *)includeMediaInfo includeDeleted:(NSNumber *)includeDeleted includeHasExplicitSharedMembers:(NSNumber *)includeHasExplicitSharedMembers {
    [DbxStoneValidators stringValidator:nil maxLength:nil pattern:@"(/(.|[\\r\\n])*)?|(ns:[0-9]+(/.*)?)"](path);

    self = [super init];
    if (self != nil) {
        _path = path;
        _recursive = recursive ?: @NO;
        _includeMediaInfo = includeMediaInfo ?: @NO;
        _includeDeleted = includeDeleted ?: @NO;
        _includeHasExplicitSharedMembers = includeHasExplicitSharedMembers ?: @NO;
    }
    return self;
}

- (instancetype)initWithPath:(NSString *)path {
    return [self initWithPath:path recursive:nil includeMediaInfo:nil includeDeleted:nil includeHasExplicitSharedMembers:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DbxFilesListFolderArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DbxFilesListFolderArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DbxFilesListFolderArgSerializer serialize:self] description];
}

@end


@implementation DbxFilesListFolderArgSerializer 

+ (NSDictionary *)serialize:(DbxFilesListFolderArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = [DbxStringSerializer serialize:valueObj.path];
    jsonDict[@"recursive"] = [DbxBoolSerializer serialize:valueObj.recursive];
    jsonDict[@"include_media_info"] = [DbxBoolSerializer serialize:valueObj.includeMediaInfo];
    jsonDict[@"include_deleted"] = [DbxBoolSerializer serialize:valueObj.includeDeleted];
    jsonDict[@"include_has_explicit_shared_members"] = [DbxBoolSerializer serialize:valueObj.includeHasExplicitSharedMembers];

    return jsonDict;
}

+ (DbxFilesListFolderArg *)deserialize:(NSDictionary *)valueDict {
    NSString *path = [DbxStringSerializer deserialize:valueDict];
    NSNumber *recursive = [DbxBoolSerializer deserialize:valueDict];
    NSNumber *includeMediaInfo = [DbxBoolSerializer deserialize:valueDict];
    NSNumber *includeDeleted = [DbxBoolSerializer deserialize:valueDict];
    NSNumber *includeHasExplicitSharedMembers = [DbxBoolSerializer deserialize:valueDict];

    return [[DbxFilesListFolderArg alloc] initWithPath:path recursive:recursive includeMediaInfo:includeMediaInfo includeDeleted:includeDeleted includeHasExplicitSharedMembers:includeHasExplicitSharedMembers];
}

@end