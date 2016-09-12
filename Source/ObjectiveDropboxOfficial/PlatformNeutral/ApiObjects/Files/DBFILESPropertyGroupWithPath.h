///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBPROPERTIESPropertyGroup;

#pragma mark - API Object

///
/// The `PropertyGroupWithPath` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESPropertyGroupWithPath : NSObject <DBSerializable>

#pragma mark - Instance fields

/// A unique identifier for the file.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// Filled custom property templates associated with a file.
@property(nonatomic, readonly) NSArray<DBPROPERTIESPropertyGroup *> * _Nonnull propertyGroups;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path A unique identifier for the file.
/// @param propertyGroups Filled custom property templates associated with a
/// file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path
                      propertyGroups:(NSArray<DBPROPERTIESPropertyGroup *> * _Nonnull)propertyGroups;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PropertyGroupWithPath` struct.
///
@interface DBFILESPropertyGroupWithPathSerializer : NSObject

///
/// Serializes `DBFILESPropertyGroupWithPath` instances.
///
/// @param instance An instance of the `DBFILESPropertyGroupWithPath` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESPropertyGroupWithPath` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESPropertyGroupWithPath * _Nonnull)instance;

///
/// Deserializes `DBFILESPropertyGroupWithPath` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESPropertyGroupWithPath` API object.
///
/// @return An instantiation of the `DBFILESPropertyGroupWithPath` object.
///
+ (DBFILESPropertyGroupWithPath * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
