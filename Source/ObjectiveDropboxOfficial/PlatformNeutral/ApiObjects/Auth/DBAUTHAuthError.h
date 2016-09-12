///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `AuthError` union.
///
/// Errors occurred during authentication.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBAUTHAuthError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBAUTHAuthErrorTag` enum type represents the possible tag states with
/// which the `DBAUTHAuthError` union can exist.
typedef NS_ENUM(NSInteger, DBAUTHAuthErrorTag) {
  /// The access token is invalid.
  DBAUTHAuthErrorInvalidAccessToken,

  /// The user specified in 'Dropbox-API-Select-User' is no longer on the
  /// team.
  DBAUTHAuthErrorInvalidSelectUser,

  /// The user specified in 'Dropbox-API-Select-Admin' is not a Dropbox
  /// Business team admin.
  DBAUTHAuthErrorInvalidSelectAdmin,

  /// (no description).
  DBAUTHAuthErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBAUTHAuthErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "invalid_access_token".
///
/// Description of the "invalid_access_token" tag state: The access token is
/// invalid.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInvalidAccessToken;

///
/// Initializes union class with tag state of "invalid_select_user".
///
/// Description of the "invalid_select_user" tag state: The user specified in
/// 'Dropbox-API-Select-User' is no longer on the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInvalidSelectUser;

///
/// Initializes union class with tag state of "invalid_select_admin".
///
/// Description of the "invalid_select_admin" tag state: The user specified in
/// 'Dropbox-API-Select-Admin' is not a Dropbox Business team admin.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInvalidSelectAdmin;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "invalid_access_token".
///
/// @return Whether the union's current tag state has value
/// "invalid_access_token".
///
- (BOOL)isInvalidAccessToken;

///
/// Retrieves whether the union's current tag state has value
/// "invalid_select_user".
///
/// @return Whether the union's current tag state has value
/// "invalid_select_user".
///
- (BOOL)isInvalidSelectUser;

///
/// Retrieves whether the union's current tag state has value
/// "invalid_select_admin".
///
/// @return Whether the union's current tag state has value
/// "invalid_select_admin".
///
- (BOOL)isInvalidSelectAdmin;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBAUTHAuthError` union.
///
@interface DBAUTHAuthErrorSerializer : NSObject

///
/// Serializes `DBAUTHAuthError` instances.
///
/// @param instance An instance of the `DBAUTHAuthError` API object.
///
/// @return A json-compatible dictionary representation of the `DBAUTHAuthError`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBAUTHAuthError * _Nonnull)instance;

///
/// Deserializes `DBAUTHAuthError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBAUTHAuthError` API object.
///
/// @return An instantiation of the `DBAUTHAuthError` object.
///
+ (DBAUTHAuthError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
