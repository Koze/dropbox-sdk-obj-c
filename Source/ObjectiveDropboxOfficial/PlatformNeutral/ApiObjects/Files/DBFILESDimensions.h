///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

#pragma mark - API Object

///
/// The `Dimensions` struct.
///
/// Dimensions for a photo or video.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDimensions : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Height of the photo/video.
@property(nonatomic, readonly) NSNumber * _Nonnull height;

/// Width of the photo/video.
@property(nonatomic, readonly) NSNumber * _Nonnull width;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param height Height of the photo/video.
/// @param width Width of the photo/video.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithHeight:(NSNumber * _Nonnull)height width:(NSNumber * _Nonnull)width;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `Dimensions` struct.
///
@interface DBFILESDimensionsSerializer : NSObject

///
/// Serializes `DBFILESDimensions` instances.
///
/// @param instance An instance of the `DBFILESDimensions` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDimensions` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESDimensions * _Nonnull)instance;

///
/// Deserializes `DBFILESDimensions` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDimensions` API object.
///
/// @return An instantiation of the `DBFILESDimensions` object.
///
+ (DBFILESDimensions * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
