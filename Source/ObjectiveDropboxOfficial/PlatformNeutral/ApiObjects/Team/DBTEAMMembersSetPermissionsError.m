///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMMembersSetPermissionsError.h"
#import "DBTEAMUserSelectorError.h"

#pragma mark - API Object

@implementation DBTEAMMembersSetPermissionsError

#pragma mark - Constructors

- (instancetype)initWithUserNotFound {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersSetPermissionsErrorUserNotFound;
  }
  return self;
}

- (instancetype)initWithLastAdmin {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersSetPermissionsErrorLastAdmin;
  }
  return self;
}

- (instancetype)initWithUserNotInTeam {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersSetPermissionsErrorUserNotInTeam;
  }
  return self;
}

- (instancetype)initWithCannotSetPermissions {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersSetPermissionsErrorCannotSetPermissions;
  }
  return self;
}

- (instancetype)initWithTeamLicenseLimit {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersSetPermissionsErrorTeamLicenseLimit;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBTEAMMembersSetPermissionsErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isUserNotFound {
  return _tag == DBTEAMMembersSetPermissionsErrorUserNotFound;
}

- (BOOL)isLastAdmin {
  return _tag == DBTEAMMembersSetPermissionsErrorLastAdmin;
}

- (BOOL)isUserNotInTeam {
  return _tag == DBTEAMMembersSetPermissionsErrorUserNotInTeam;
}

- (BOOL)isCannotSetPermissions {
  return _tag == DBTEAMMembersSetPermissionsErrorCannotSetPermissions;
}

- (BOOL)isTeamLicenseLimit {
  return _tag == DBTEAMMembersSetPermissionsErrorTeamLicenseLimit;
}

- (BOOL)isOther {
  return _tag == DBTEAMMembersSetPermissionsErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMMembersSetPermissionsErrorUserNotFound:
    return @"DBTEAMMembersSetPermissionsErrorUserNotFound";
  case DBTEAMMembersSetPermissionsErrorLastAdmin:
    return @"DBTEAMMembersSetPermissionsErrorLastAdmin";
  case DBTEAMMembersSetPermissionsErrorUserNotInTeam:
    return @"DBTEAMMembersSetPermissionsErrorUserNotInTeam";
  case DBTEAMMembersSetPermissionsErrorCannotSetPermissions:
    return @"DBTEAMMembersSetPermissionsErrorCannotSetPermissions";
  case DBTEAMMembersSetPermissionsErrorTeamLicenseLimit:
    return @"DBTEAMMembersSetPermissionsErrorTeamLicenseLimit";
  case DBTEAMMembersSetPermissionsErrorOther:
    return @"DBTEAMMembersSetPermissionsErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMMembersSetPermissionsErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMMembersSetPermissionsErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMMembersSetPermissionsErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMMembersSetPermissionsErrorSerializer

+ (NSDictionary *)serialize:(DBTEAMMembersSetPermissionsError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isUserNotFound]) {
    jsonDict[@".tag"] = @"user_not_found";
  } else if ([valueObj isLastAdmin]) {
    jsonDict[@".tag"] = @"last_admin";
  } else if ([valueObj isUserNotInTeam]) {
    jsonDict[@".tag"] = @"user_not_in_team";
  } else if ([valueObj isCannotSetPermissions]) {
    jsonDict[@".tag"] = @"cannot_set_permissions";
  } else if ([valueObj isTeamLicenseLimit]) {
    jsonDict[@".tag"] = @"team_license_limit";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMMembersSetPermissionsError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"user_not_found"]) {
    return [[DBTEAMMembersSetPermissionsError alloc] initWithUserNotFound];
  } else if ([tag isEqualToString:@"last_admin"]) {
    return [[DBTEAMMembersSetPermissionsError alloc] initWithLastAdmin];
  } else if ([tag isEqualToString:@"user_not_in_team"]) {
    return [[DBTEAMMembersSetPermissionsError alloc] initWithUserNotInTeam];
  } else if ([tag isEqualToString:@"cannot_set_permissions"]) {
    return [[DBTEAMMembersSetPermissionsError alloc] initWithCannotSetPermissions];
  } else if ([tag isEqualToString:@"team_license_limit"]) {
    return [[DBTEAMMembersSetPermissionsError alloc] initWithTeamLicenseLimit];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBTEAMMembersSetPermissionsError alloc] initWithOther];
  }

  @throw([NSException
      exceptionWithName:@"InvalidTag"
                 reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
               userInfo:nil]);
}

@end
