///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxFilesLookupError;
@class DbxSharingCreateSharedLinkError;

/// 
/// The DbxSharingCreateSharedLinkError union.
/// 
@interface DbxSharingCreateSharedLinkError : NSObject <DbxSerializable> 

typedef NS_ENUM(NSInteger, SharingCreateSharedLinkErrorTag) {
    /// (no description)
    SharingCreateSharedLinkErrorPath,
    /// (no description)
    SharingCreateSharedLinkErrorOther,
};

- (nonnull instancetype)initWithPath:(DbxFilesLookupError * _Nonnull)path;

- (nonnull instancetype)initWithOther;

- (BOOL)isPath;

- (BOOL)isOther;

- (NSString * _Nonnull)getTagName;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

/// Current state of the DbxSharingCreateSharedLinkError union type.
@property (nonatomic) SharingCreateSharedLinkErrorTag tag;
@property (nonatomic) DbxFilesLookupError * _Nonnull path;

@end


@interface DbxSharingCreateSharedLinkErrorSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxSharingCreateSharedLinkError * _Nonnull)obj;

+ (DbxSharingCreateSharedLinkError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end