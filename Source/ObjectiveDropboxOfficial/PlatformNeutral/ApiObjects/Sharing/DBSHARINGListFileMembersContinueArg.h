///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `ListFileMembersContinueArg` struct.
///
/// Arguments for `listFileMembersContinue`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFileMembersContinueArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The cursor returned by your last call to `listFileMembers`,
/// `listFileMembersContinue`, or `listFileMembersBatch`.
@property(nonatomic, readonly, copy) NSString * _Nonnull cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor The cursor returned by your last call to `listFileMembers`,
/// `listFileMembersContinue`, or `listFileMembersBatch`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCursor:(NSString * _Nonnull)cursor;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFileMembersContinueArg` struct.
///
@interface DBSHARINGListFileMembersContinueArgSerializer : NSObject

///
/// Serializes `DBSHARINGListFileMembersContinueArg` instances.
///
/// @param instance An instance of the `DBSHARINGListFileMembersContinueArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersContinueArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListFileMembersContinueArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListFileMembersContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersContinueArg` API object.
///
/// @return An instantiation of the `DBSHARINGListFileMembersContinueArg`
/// object.
///
+ (DBSHARINGListFileMembersContinueArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
