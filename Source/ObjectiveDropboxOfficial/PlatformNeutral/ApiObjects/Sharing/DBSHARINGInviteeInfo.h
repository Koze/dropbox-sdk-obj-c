///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `InviteeInfo` union.
///
/// Information about the recipient of a shared content invitation.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGInviteeInfo : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGInviteeInfoTag` enum type represents the possible tag states
/// with which the `DBSHARINGInviteeInfo` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGInviteeInfoTag) {
  /// E-mail address of invited user.
  DBSHARINGInviteeInfoEmail,

  /// (no description).
  DBSHARINGInviteeInfoOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGInviteeInfoTag tag;

/// E-mail address of invited user. @note Ensure the `isEmail` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull email;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "email".
///
/// Description of the "email" tag state: E-mail address of invited user.
///
/// @param email E-mail address of invited user.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithEmail:(NSString * _Nonnull)email;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "email".
///
/// @note Call this method and ensure it returns true before accessing the
/// `email` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "email".
///
- (BOOL)isEmail;

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
/// The serialization class for the `DBSHARINGInviteeInfo` union.
///
@interface DBSHARINGInviteeInfoSerializer : NSObject

///
/// Serializes `DBSHARINGInviteeInfo` instances.
///
/// @param instance An instance of the `DBSHARINGInviteeInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGInviteeInfo` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGInviteeInfo * _Nonnull)instance;

///
/// Deserializes `DBSHARINGInviteeInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGInviteeInfo` API object.
///
/// @return An instantiation of the `DBSHARINGInviteeInfo` object.
///
+ (DBSHARINGInviteeInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
