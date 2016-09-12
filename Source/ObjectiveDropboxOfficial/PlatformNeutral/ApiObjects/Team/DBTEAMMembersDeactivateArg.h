///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMUserSelectorArg;

#pragma mark - API Object

///
/// The `MembersDeactivateArg` struct.
///
/// Exactly one of team_member_id, email, or external_id must be provided to
/// identify the user account.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersDeactivateArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Identity of user to remove/suspend.
@property(nonatomic, readonly) DBTEAMUserSelectorArg * _Nonnull user;

/// If provided, controls if the user's data will be deleted on their linked
/// devices.
@property(nonatomic, readonly) NSNumber * _Nonnull wipeData;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param user Identity of user to remove/suspend.
/// @param wipeData If provided, controls if the user's data will be deleted on
/// their linked devices.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUser:(DBTEAMUserSelectorArg * _Nonnull)user wipeData:(NSNumber * _Nullable)wipeData;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param user Identity of user to remove/suspend.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUser:(DBTEAMUserSelectorArg * _Nonnull)user;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersDeactivateArg` struct.
///
@interface DBTEAMMembersDeactivateArgSerializer : NSObject

///
/// Serializes `DBTEAMMembersDeactivateArg` instances.
///
/// @param instance An instance of the `DBTEAMMembersDeactivateArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersDeactivateArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersDeactivateArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersDeactivateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersDeactivateArg` API object.
///
/// @return An instantiation of the `DBTEAMMembersDeactivateArg` object.
///
+ (DBTEAMMembersDeactivateArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
