///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `PollArg` struct.
///
/// Arguments for methods that poll the status of an asynchronous job.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBASYNCPollArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Id of the asynchronous job. This is the value of a response returned from
/// the method that launched the job.
@property(nonatomic, readonly, copy) NSString * _Nonnull asyncJobId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param asyncJobId Id of the asynchronous job. This is the value of a
/// response returned from the method that launched the job.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAsyncJobId:(NSString * _Nonnull)asyncJobId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PollArg` struct.
///
@interface DBASYNCPollArgSerializer : NSObject

///
/// Serializes `DBASYNCPollArg` instances.
///
/// @param instance An instance of the `DBASYNCPollArg` API object.
///
/// @return A json-compatible dictionary representation of the `DBASYNCPollArg`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBASYNCPollArg * _Nonnull)instance;

///
/// Deserializes `DBASYNCPollArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBASYNCPollArg` API object.
///
/// @return An instantiation of the `DBASYNCPollArg` object.
///
+ (DBASYNCPollArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
