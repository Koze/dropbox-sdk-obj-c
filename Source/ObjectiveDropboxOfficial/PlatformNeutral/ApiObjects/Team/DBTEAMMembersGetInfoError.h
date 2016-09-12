///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `MembersGetInfoError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersGetInfoError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMMembersGetInfoErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMMembersGetInfoError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMMembersGetInfoErrorTag) {
  /// (no description).
  DBTEAMMembersGetInfoErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMMembersGetInfoErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

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
/// The serialization class for the `DBTEAMMembersGetInfoError` union.
///
@interface DBTEAMMembersGetInfoErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersGetInfoError` instances.
///
/// @param instance An instance of the `DBTEAMMembersGetInfoError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersGetInfoError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersGetInfoError * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersGetInfoError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersGetInfoError` API object.
///
/// @return An instantiation of the `DBTEAMMembersGetInfoError` object.
///
+ (DBTEAMMembersGetInfoError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
