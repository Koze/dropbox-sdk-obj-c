///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBTEAMGroupAccessType;
@class DBTEAMUserSelectorArg;

#pragma mark - API Object

///
/// The `MemberAccess` struct.
///
/// Specify access type a member should have when joined to a group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMemberAccess : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Identity of a user.
@property(nonatomic, readonly) DBTEAMUserSelectorArg * _Nonnull user;

/// Access type.
@property(nonatomic, readonly) DBTEAMGroupAccessType * _Nonnull accessType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param user Identity of a user.
/// @param accessType Access type.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUser:(DBTEAMUserSelectorArg * _Nonnull)user
                          accessType:(DBTEAMGroupAccessType * _Nonnull)accessType;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberAccess` struct.
///
@interface DBTEAMMemberAccessSerializer : NSObject

///
/// Serializes `DBTEAMMemberAccess` instances.
///
/// @param instance An instance of the `DBTEAMMemberAccess` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMemberAccess` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMemberAccess * _Nonnull)instance;

///
/// Deserializes `DBTEAMMemberAccess` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMemberAccess` API object.
///
/// @return An instantiation of the `DBTEAMMemberAccess` object.
///
+ (DBTEAMMemberAccess * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
