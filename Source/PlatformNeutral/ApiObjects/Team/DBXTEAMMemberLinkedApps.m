///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMApiApp.h"
#import "DBXTEAMMemberLinkedApps.h"

@implementation DBXTEAMMemberLinkedApps 

- (instancetype)initWithTeamMemberId:(NSString *)teamMemberId linkedApiApps:(NSArray<DBXTEAMApiApp *> *)linkedApiApps {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](linkedApiApps);

    self = [super init];
    if (self != nil) {
        _teamMemberId = teamMemberId;
        _linkedApiApps = linkedApiApps;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMMemberLinkedAppsSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMMemberLinkedAppsSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMMemberLinkedAppsSerializer serialize:self] description];
}

@end


@implementation DBXTEAMMemberLinkedAppsSerializer 

+ (NSDictionary *)serialize:(DBXTEAMMemberLinkedApps *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"team_member_id"] = valueObj.teamMemberId;
    jsonDict[@"linked_api_apps"] = [DBXArraySerializer serialize:valueObj.linkedApiApps withBlock:^id(id elem) { return [DBXTEAMApiAppSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBXTEAMMemberLinkedApps *)deserialize:(NSDictionary *)valueDict {
    NSString *teamMemberId = valueDict[@"team_member_id"];
    NSArray<DBXTEAMApiApp *> *linkedApiApps = [DBXArraySerializer deserialize:valueDict[@"linked_api_apps"] withBlock:^id(id elem) { return [DBXTEAMApiAppSerializer deserialize:elem]; }];

    return [[DBXTEAMMemberLinkedApps alloc] initWithTeamMemberId:teamMemberId linkedApiApps:linkedApiApps];
}

@end