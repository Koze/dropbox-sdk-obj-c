///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMPOLICIESSharedFolderMemberPolicy.h"

@implementation DBXTEAMPOLICIESSharedFolderMemberPolicy 

- (instancetype)initWithTeam {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMPOLICIESSharedFolderMemberPolicyTeam;
    }
    return self;
}

- (instancetype)initWithAnyone {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMPOLICIESSharedFolderMemberPolicyAnyone;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMPOLICIESSharedFolderMemberPolicyOther;
    }
    return self;
}

- (BOOL)isTeam {
    return _tag == DBXTEAMPOLICIESSharedFolderMemberPolicyTeam;
}

- (BOOL)isAnyone {
    return _tag == DBXTEAMPOLICIESSharedFolderMemberPolicyAnyone;
}

- (BOOL)isOther {
    return _tag == DBXTEAMPOLICIESSharedFolderMemberPolicyOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMPOLICIESSharedFolderMemberPolicyTeam:
           return @"DBXTEAMPOLICIESSharedFolderMemberPolicyTeam";
        case DBXTEAMPOLICIESSharedFolderMemberPolicyAnyone:
           return @"DBXTEAMPOLICIESSharedFolderMemberPolicyAnyone";
        case DBXTEAMPOLICIESSharedFolderMemberPolicyOther:
           return @"DBXTEAMPOLICIESSharedFolderMemberPolicyOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMPOLICIESSharedFolderMemberPolicySerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMPOLICIESSharedFolderMemberPolicySerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMPOLICIESSharedFolderMemberPolicySerializer serialize:self] description];
}

@end


@implementation DBXTEAMPOLICIESSharedFolderMemberPolicySerializer 

+ (NSDictionary *)serialize:(DBXTEAMPOLICIESSharedFolderMemberPolicy *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isTeam]) {
        jsonDict[@".tag"] = @"team";
    }
    else if ([valueObj isAnyone]) {
        jsonDict[@".tag"] = @"anyone";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMPOLICIESSharedFolderMemberPolicy *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"team"]) {
        return [[DBXTEAMPOLICIESSharedFolderMemberPolicy alloc] initWithTeam];
    }
    else if ([tag isEqualToString:@"anyone"]) {
        return [[DBXTEAMPOLICIESSharedFolderMemberPolicy alloc] initWithAnyone];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXTEAMPOLICIESSharedFolderMemberPolicy alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end