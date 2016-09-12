///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGSharedFolderAccessError;

#pragma mark - API Object

///
/// The `UnmountFolderError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGUnmountFolderError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGUnmountFolderErrorTag` enum type represents the possible tag
/// states with which the `DBSHARINGUnmountFolderError` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGUnmountFolderErrorTag) {
  /// (no description).
  DBSHARINGUnmountFolderErrorAccessError,

  /// The current user does not have permission to perform this action.
  DBSHARINGUnmountFolderErrorNoPermission,

  /// The shared folder can't be unmounted. One example where this can occur
  /// is when the shared folder's parent folder is also a shared folder that
  /// resides in the current user's Dropbox.
  DBSHARINGUnmountFolderErrorNotUnmountable,

  /// (no description).
  DBSHARINGUnmountFolderErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGUnmountFolderErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: The current user does not have
/// permission to perform this action.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "not_unmountable".
///
/// Description of the "not_unmountable" tag state: The shared folder can't be
/// unmounted. One example where this can occur is when the shared folder's
/// parent folder is also a shared folder that resides in the current user's
/// Dropbox.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNotUnmountable;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `accessError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "not_unmountable".
///
/// @return Whether the union's current tag state has value "not_unmountable".
///
- (BOOL)isNotUnmountable;

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
/// The serialization class for the `DBSHARINGUnmountFolderError` union.
///
@interface DBSHARINGUnmountFolderErrorSerializer : NSObject

///
/// Serializes `DBSHARINGUnmountFolderError` instances.
///
/// @param instance An instance of the `DBSHARINGUnmountFolderError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGUnmountFolderError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGUnmountFolderError * _Nonnull)instance;

///
/// Deserializes `DBSHARINGUnmountFolderError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGUnmountFolderError` API object.
///
/// @return An instantiation of the `DBSHARINGUnmountFolderError` object.
///
+ (DBSHARINGUnmountFolderError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
