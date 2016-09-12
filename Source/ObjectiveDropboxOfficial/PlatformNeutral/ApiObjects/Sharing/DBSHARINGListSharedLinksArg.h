///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `ListSharedLinksArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListSharedLinksArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// See `listSharedLinks` description.
@property(nonatomic, readonly) NSString * _Nullable path;

/// The cursor returned by your last call to `listSharedLinks`.
@property(nonatomic, readonly) NSString * _Nullable cursor;

/// See `listSharedLinks` description.
@property(nonatomic, readonly) NSNumber * _Nullable directOnly;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path See `listSharedLinks` description.
/// @param cursor The cursor returned by your last call to `listSharedLinks`.
/// @param directOnly See `listSharedLinks` description.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nullable)path
                              cursor:(NSString * _Nullable)cursor
                          directOnly:(NSNumber * _Nullable)directOnly;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (nonnull instancetype)init;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListSharedLinksArg` struct.
///
@interface DBSHARINGListSharedLinksArgSerializer : NSObject

///
/// Serializes `DBSHARINGListSharedLinksArg` instances.
///
/// @param instance An instance of the `DBSHARINGListSharedLinksArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListSharedLinksArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListSharedLinksArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListSharedLinksArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListSharedLinksArg` API object.
///
/// @return An instantiation of the `DBSHARINGListSharedLinksArg` object.
///
+ (DBSHARINGListSharedLinksArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
