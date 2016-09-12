///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `GetPropertyTemplateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPROPERTIESGetPropertyTemplateArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// An identifier for property template added by route properties/template/add.
@property(nonatomic, readonly, copy) NSString * _Nonnull templateId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateId An identifier for property template added by route
/// properties/template/add.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetPropertyTemplateArg` struct.
///
@interface DBPROPERTIESGetPropertyTemplateArgSerializer : NSObject

///
/// Serializes `DBPROPERTIESGetPropertyTemplateArg` instances.
///
/// @param instance An instance of the `DBPROPERTIESGetPropertyTemplateArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPROPERTIESGetPropertyTemplateArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBPROPERTIESGetPropertyTemplateArg * _Nonnull)instance;

///
/// Deserializes `DBPROPERTIESGetPropertyTemplateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPROPERTIESGetPropertyTemplateArg` API object.
///
/// @return An instantiation of the `DBPROPERTIESGetPropertyTemplateArg` object.
///
+ (DBPROPERTIESGetPropertyTemplateArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
