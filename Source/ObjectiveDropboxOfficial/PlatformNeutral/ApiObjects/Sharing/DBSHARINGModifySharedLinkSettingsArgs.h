///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGSharedLinkSettings;

#pragma mark - API Object

///
/// The `ModifySharedLinkSettingsArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGModifySharedLinkSettingsArgs : NSObject <DBSerializable>

#pragma mark - Instance fields

/// URL of the shared link to change its settings
@property(nonatomic, readonly, copy) NSString * _Nonnull url;

/// Set of settings for the shared link.
@property(nonatomic, readonly) DBSHARINGSharedLinkSettings * _Nonnull settings;

/// If set to true, removes the expiration of the shared link.
@property(nonatomic, readonly) NSNumber * _Nonnull removeExpiration;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link to change its settings
/// @param settings Set of settings for the shared link.
/// @param removeExpiration If set to true, removes the expiration of the shared
/// link.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url
                           settings:(DBSHARINGSharedLinkSettings * _Nonnull)settings
                   removeExpiration:(NSNumber * _Nullable)removeExpiration;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param url URL of the shared link to change its settings
/// @param settings Set of settings for the shared link.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url settings:(DBSHARINGSharedLinkSettings * _Nonnull)settings;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ModifySharedLinkSettingsArgs` struct.
///
@interface DBSHARINGModifySharedLinkSettingsArgsSerializer : NSObject

///
/// Serializes `DBSHARINGModifySharedLinkSettingsArgs` instances.
///
/// @param instance An instance of the `DBSHARINGModifySharedLinkSettingsArgs`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGModifySharedLinkSettingsArgs` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGModifySharedLinkSettingsArgs * _Nonnull)instance;

///
/// Deserializes `DBSHARINGModifySharedLinkSettingsArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGModifySharedLinkSettingsArgs` API object.
///
/// @return An instantiation of the `DBSHARINGModifySharedLinkSettingsArgs`
/// object.
///
+ (DBSHARINGModifySharedLinkSettingsArgs * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
