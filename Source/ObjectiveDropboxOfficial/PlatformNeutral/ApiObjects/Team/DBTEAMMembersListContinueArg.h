///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `MembersListContinueArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersListContinueArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Indicates from what point to get the next set of members.
@property(nonatomic, readonly, copy) NSString * _Nonnull cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Indicates from what point to get the next set of members.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCursor:(NSString * _Nonnull)cursor;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersListContinueArg` struct.
///
@interface DBTEAMMembersListContinueArgSerializer : NSObject

///
/// Serializes `DBTEAMMembersListContinueArg` instances.
///
/// @param instance An instance of the `DBTEAMMembersListContinueArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersListContinueArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersListContinueArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersListContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersListContinueArg` API object.
///
/// @return An instantiation of the `DBTEAMMembersListContinueArg` object.
///
+ (DBTEAMMembersListContinueArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
