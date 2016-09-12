///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGMemberSelector;

#pragma mark - API Object

///
/// The `RemoveFileMemberArg` struct.
///
/// Arguments for `removeFileMember2`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGRemoveFileMemberArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// File from which to remove members.
@property(nonatomic, readonly, copy) NSString * _Nonnull file;

/// Member to remove from this file. Note that even if an email is specified, it
/// may result in the removal of a user (not an invitee) if the user's main
/// account corresponds to that email address.
@property(nonatomic, readonly) DBSHARINGMemberSelector * _Nonnull member;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param file File from which to remove members.
/// @param member Member to remove from this file. Note that even if an email is
/// specified, it may result in the removal of a user (not an invitee) if the
/// user's main account corresponds to that email address.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file member:(DBSHARINGMemberSelector * _Nonnull)member;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RemoveFileMemberArg` struct.
///
@interface DBSHARINGRemoveFileMemberArgSerializer : NSObject

///
/// Serializes `DBSHARINGRemoveFileMemberArg` instances.
///
/// @param instance An instance of the `DBSHARINGRemoveFileMemberArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGRemoveFileMemberArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGRemoveFileMemberArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGRemoveFileMemberArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGRemoveFileMemberArg` API object.
///
/// @return An instantiation of the `DBSHARINGRemoveFileMemberArg` object.
///
+ (DBSHARINGRemoveFileMemberArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
