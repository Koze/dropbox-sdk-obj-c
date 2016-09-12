///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBPROPERTIESPropertyField;

#pragma mark - API Object

///
/// The `PropertyGroupUpdate` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESPropertyGroupUpdate : NSObject <DBSerializable>

#pragma mark - Instance fields

/// A unique identifier for a property template.
@property(nonatomic, readonly, copy) NSString * _Nonnull templateId;

/// List of property fields to update if the field already exists. If the field
/// doesn't exist, add the field to the property group.
@property(nonatomic, readonly) NSArray<DBPROPERTIESPropertyField *> * _Nullable addOrUpdateFields;

/// List of property field names to remove from property group if the field
/// exists.
@property(nonatomic, readonly) NSArray<NSString *> * _Nullable removeFields;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateId A unique identifier for a property template.
/// @param addOrUpdateFields List of property fields to update if the field
/// already exists. If the field doesn't exist, add the field to the property
/// group.
/// @param removeFields List of property field names to remove from property
/// group if the field exists.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId
                         addOrUpdateFields:(NSArray<DBPROPERTIESPropertyField *> * _Nullable)addOrUpdateFields
                              removeFields:(NSArray<NSString *> * _Nullable)removeFields;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param templateId A unique identifier for a property template.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PropertyGroupUpdate` struct.
///
@interface DBFILESPropertyGroupUpdateSerializer : NSObject

///
/// Serializes `DBFILESPropertyGroupUpdate` instances.
///
/// @param instance An instance of the `DBFILESPropertyGroupUpdate` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESPropertyGroupUpdate` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESPropertyGroupUpdate * _Nonnull)instance;

///
/// Deserializes `DBFILESPropertyGroupUpdate` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESPropertyGroupUpdate` API object.
///
/// @return An instantiation of the `DBFILESPropertyGroupUpdate` object.
///
+ (DBFILESPropertyGroupUpdate * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
