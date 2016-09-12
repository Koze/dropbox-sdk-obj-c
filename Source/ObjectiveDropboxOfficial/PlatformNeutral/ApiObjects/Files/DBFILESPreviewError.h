///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESLookupError;

#pragma mark - API Object

///
/// The `PreviewError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESPreviewError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBFILESPreviewErrorTag` enum type represents the possible tag states
/// with which the `DBFILESPreviewError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESPreviewErrorTag) {
  /// An error occurs when downloading metadata for the file.
  DBFILESPreviewErrorPath,

  /// This preview generation is still in progress and the file is not ready
  /// for preview yet.
  DBFILESPreviewErrorInProgress,

  /// The file extension is not supported preview generation.
  DBFILESPreviewErrorUnsupportedExtension,

  /// The file content is not supported for preview generation.
  DBFILESPreviewErrorUnsupportedContent,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBFILESPreviewErrorTag tag;

/// An error occurs when downloading metadata for the file. @note Ensure the
/// `isPath` method returns true before accessing, otherwise a runtime exception
/// will be raised.
@property(nonatomic, readonly) DBFILESLookupError * _Nonnull path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// Description of the "path" tag state: An error occurs when downloading
/// metadata for the file.
///
/// @param path An error occurs when downloading metadata for the file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(DBFILESLookupError * _Nonnull)path;

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: This preview generation is still
/// in progress and the file is not ready  for preview yet.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInProgress;

///
/// Initializes union class with tag state of "unsupported_extension".
///
/// Description of the "unsupported_extension" tag state: The file extension is
/// not supported preview generation.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUnsupportedExtension;

///
/// Initializes union class with tag state of "unsupported_content".
///
/// Description of the "unsupported_content" tag state: The file content is not
/// supported for preview generation.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUnsupportedContent;

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
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_extension".
///
/// @return Whether the union's current tag state has value
/// "unsupported_extension".
///
- (BOOL)isUnsupportedExtension;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_content".
///
/// @return Whether the union's current tag state has value
/// "unsupported_content".
///
- (BOOL)isUnsupportedContent;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESPreviewError` union.
///
@interface DBFILESPreviewErrorSerializer : NSObject

///
/// Serializes `DBFILESPreviewError` instances.
///
/// @param instance An instance of the `DBFILESPreviewError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESPreviewError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESPreviewError * _Nonnull)instance;

///
/// Deserializes `DBFILESPreviewError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESPreviewError` API object.
///
/// @return An instantiation of the `DBFILESPreviewError` object.
///
+ (DBFILESPreviewError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
