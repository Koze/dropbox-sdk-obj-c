///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBFILESFileMetadata;

#pragma mark - API Object

///
/// The `SaveUrlResult` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSaveUrlResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBFILESSaveUrlResultTag` enum type represents the possible tag states
/// with which the `DBFILESSaveUrlResult` union can exist.
typedef NS_ENUM(NSInteger, DBFILESSaveUrlResultTag) {
  /// This response indicates that the processing is asynchronous. The string
  /// is an id that can be used to obtain the status of the asynchronous job.
  DBFILESSaveUrlResultAsyncJobId,

  /// Metadata of the file where the URL is saved to.
  DBFILESSaveUrlResultComplete,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBFILESSaveUrlResultTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job. @note
/// Ensure the `isAsyncJobId` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly, copy) NSString * _Nonnull asyncJobId;

/// Metadata of the file where the URL is saved to. @note Ensure the
/// `isComplete` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property(nonatomic, readonly) DBFILESFileMetadata * _Nonnull complete;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "async_job_id".
///
/// Description of the "async_job_id" tag state: This response indicates that
/// the processing is asynchronous. The string is an id that can be used to
/// obtain the status of the asynchronous job.
///
/// @param asyncJobId This response indicates that the processing is
/// asynchronous. The string is an id that can be used to obtain the status of
/// the asynchronous job.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAsyncJobId:(NSString * _Nonnull)asyncJobId;

///
/// Initializes union class with tag state of "complete".
///
/// Description of the "complete" tag state: Metadata of the file where the URL
/// is saved to.
///
/// @param complete Metadata of the file where the URL is saved to.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithComplete:(DBFILESFileMetadata * _Nonnull)complete;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "async_job_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `asyncJobId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "async_job_id".
///
- (BOOL)isAsyncJobId;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @note Call this method and ensure it returns true before accessing the
/// `complete` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESSaveUrlResult` union.
///
@interface DBFILESSaveUrlResultSerializer : NSObject

///
/// Serializes `DBFILESSaveUrlResult` instances.
///
/// @param instance An instance of the `DBFILESSaveUrlResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSaveUrlResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESSaveUrlResult * _Nonnull)instance;

///
/// Deserializes `DBFILESSaveUrlResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSaveUrlResult` API object.
///
/// @return An instantiation of the `DBFILESSaveUrlResult` object.
///
+ (DBFILESSaveUrlResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
