///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMTeamMemberInfo;

#pragma mark - API Object

///
/// The `MembersGetInfoItem` union.
///
/// Describes a result obtained for a single user whose id was specified in the
/// parameter of `membersGetInfo`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersGetInfoItem : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMMembersGetInfoItemTag` enum type represents the possible tag
/// states with which the `DBTEAMMembersGetInfoItem` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMMembersGetInfoItemTag) {
  /// An ID that was provided as a parameter to `membersGetInfo`, and did not
  /// match a corresponding user. This might be a team_member_id, an email, or
  /// an external ID, depending on how the method was called.
  DBTEAMMembersGetInfoItemIdNotFound,

  /// Info about a team member.
  DBTEAMMembersGetInfoItemMemberInfo,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMMembersGetInfoItemTag tag;

/// An ID that was provided as a parameter to `membersGetInfo`, and did not
/// match a corresponding user. This might be a team_member_id, an email, or an
/// external ID, depending on how the method was called. @note Ensure the
/// `isIdNotFound` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull idNotFound;

/// Info about a team member. @note Ensure the `isMemberInfo` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBTEAMTeamMemberInfo * _Nonnull memberInfo;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "id_not_found".
///
/// Description of the "id_not_found" tag state: An ID that was provided as a
/// parameter to `membersGetInfo`, and did not match a corresponding user. This
/// might be a team_member_id, an email, or an external ID, depending on how the
/// method was called.
///
/// @param idNotFound An ID that was provided as a parameter to
/// `membersGetInfo`, and did not match a corresponding user. This might be a
/// team_member_id, an email, or an external ID, depending on how the method was
/// called.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithIdNotFound:(NSString * _Nonnull)idNotFound;

///
/// Initializes union class with tag state of "member_info".
///
/// Description of the "member_info" tag state: Info about a team member.
///
/// @param memberInfo Info about a team member.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMemberInfo:(DBTEAMTeamMemberInfo * _Nonnull)memberInfo;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "id_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `idNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "id_not_found".
///
- (BOOL)isIdNotFound;

///
/// Retrieves whether the union's current tag state has value "member_info".
///
/// @note Call this method and ensure it returns true before accessing the
/// `memberInfo` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "member_info".
///
- (BOOL)isMemberInfo;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMMembersGetInfoItem` union.
///
@interface DBTEAMMembersGetInfoItemSerializer : NSObject

///
/// Serializes `DBTEAMMembersGetInfoItem` instances.
///
/// @param instance An instance of the `DBTEAMMembersGetInfoItem` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersGetInfoItem` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersGetInfoItem * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersGetInfoItem` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersGetInfoItem` API object.
///
/// @return An instantiation of the `DBTEAMMembersGetInfoItem` object.
///
+ (DBTEAMMembersGetInfoItem * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
