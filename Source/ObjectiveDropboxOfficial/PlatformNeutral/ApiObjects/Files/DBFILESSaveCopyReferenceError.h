///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESWriteError;

#pragma mark - API Object

///
/// The `SaveCopyReferenceError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSaveCopyReferenceError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBFILESSaveCopyReferenceErrorTag` enum type represents the possible tag
/// states with which the `DBFILESSaveCopyReferenceError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESSaveCopyReferenceErrorTag) {
  /// (no description).
  DBFILESSaveCopyReferenceErrorPath,

  /// The copy reference is invalid.
  DBFILESSaveCopyReferenceErrorInvalidCopyReference,

  /// You don't have permission to save the given copy reference. Please make
  /// sure this app is same app which created the copy reference and the
  /// source user is still linked to the app.
  DBFILESSaveCopyReferenceErrorNoPermission,

  /// The file referenced by the copy reference cannot be found.
  DBFILESSaveCopyReferenceErrorNotFound,

  /// The operation would involve more than 10,000 files and folders.
  DBFILESSaveCopyReferenceErrorTooManyFiles,

  /// (no description).
  DBFILESSaveCopyReferenceErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBFILESSaveCopyReferenceErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBFILESWriteError * _Nonnull path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(DBFILESWriteError * _Nonnull)path;

///
/// Initializes union class with tag state of "invalid_copy_reference".
///
/// Description of the "invalid_copy_reference" tag state: The copy reference is
/// invalid.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInvalidCopyReference;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: You don't have permission to
/// save the given copy reference. Please make sure this app is same app which
/// created the copy reference and the source user is still linked to the app.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: The file referenced by the copy
/// reference cannot be found.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNotFound;

///
/// Initializes union class with tag state of "too_many_files".
///
/// Description of the "too_many_files" tag state: The operation would involve
/// more than 10,000 files and folders.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTooManyFiles;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "invalid_copy_reference".
///
/// @return Whether the union's current tag state has value
/// "invalid_copy_reference".
///
- (BOOL)isInvalidCopyReference;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "not_found".
///
/// @return Whether the union's current tag state has value "not_found".
///
- (BOOL)isNotFound;

///
/// Retrieves whether the union's current tag state has value "too_many_files".
///
/// @return Whether the union's current tag state has value "too_many_files".
///
- (BOOL)isTooManyFiles;

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
/// The serialization class for the `DBFILESSaveCopyReferenceError` union.
///
@interface DBFILESSaveCopyReferenceErrorSerializer : NSObject

///
/// Serializes `DBFILESSaveCopyReferenceError` instances.
///
/// @param instance An instance of the `DBFILESSaveCopyReferenceError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSaveCopyReferenceError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESSaveCopyReferenceError * _Nonnull)instance;

///
/// Deserializes `DBFILESSaveCopyReferenceError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSaveCopyReferenceError` API object.
///
/// @return An instantiation of the `DBFILESSaveCopyReferenceError` object.
///
+ (DBFILESSaveCopyReferenceError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
