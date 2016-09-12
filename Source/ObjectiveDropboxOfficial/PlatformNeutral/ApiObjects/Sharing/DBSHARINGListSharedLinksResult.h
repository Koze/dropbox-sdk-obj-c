///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGSharedLinkMetadata;

#pragma mark - API Object

///
/// The `ListSharedLinksResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListSharedLinksResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Shared links applicable to the path argument.
@property(nonatomic, readonly) NSArray<DBSHARINGSharedLinkMetadata *> * _Nonnull links;

/// Is true if there are additional shared links that have not been returned
/// yet. Pass the cursor into `listSharedLinks` to retrieve them.
@property(nonatomic, readonly) NSNumber * _Nonnull hasMore;

/// Pass the cursor into `listSharedLinks` to obtain the additional links.
/// Cursor is returned only if no path is given or the path is empty.
@property(nonatomic, readonly) NSString * _Nullable cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param links Shared links applicable to the path argument.
/// @param hasMore Is true if there are additional shared links that have not
/// been returned yet. Pass the cursor into `listSharedLinks` to retrieve them.
/// @param cursor Pass the cursor into `listSharedLinks` to obtain the
/// additional links. Cursor is returned only if no path is given or the path is
/// empty.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithLinks:(NSArray<DBSHARINGSharedLinkMetadata *> * _Nonnull)links
                              hasMore:(NSNumber * _Nonnull)hasMore
                               cursor:(NSString * _Nullable)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param links Shared links applicable to the path argument.
/// @param hasMore Is true if there are additional shared links that have not
/// been returned yet. Pass the cursor into `listSharedLinks` to retrieve them.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithLinks:(NSArray<DBSHARINGSharedLinkMetadata *> * _Nonnull)links
                              hasMore:(NSNumber * _Nonnull)hasMore;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListSharedLinksResult` struct.
///
@interface DBSHARINGListSharedLinksResultSerializer : NSObject

///
/// Serializes `DBSHARINGListSharedLinksResult` instances.
///
/// @param instance An instance of the `DBSHARINGListSharedLinksResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListSharedLinksResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListSharedLinksResult * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListSharedLinksResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListSharedLinksResult` API object.
///
/// @return An instantiation of the `DBSHARINGListSharedLinksResult` object.
///
+ (DBSHARINGListSharedLinksResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
