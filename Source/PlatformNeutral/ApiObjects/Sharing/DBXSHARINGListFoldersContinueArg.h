///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFoldersContinueArg;

/// 
/// The `DBXSHARINGListFoldersContinueArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListFoldersContinueArg : NSObject <DBXSerializable> 

/// The cursor returned by the previous API call specified in the endpoint
/// description.
@property (nonatomic, copy) NSString * _Nonnull cursor;

/// Full constructor for the `ListFoldersContinueArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithCursor:(NSString * _Nonnull)cursor;

/// Returns a human-readable representation of the
/// `DBXSHARINGListFoldersContinueArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGListFoldersContinueArg` struct.
/// 
@interface DBXSHARINGListFoldersContinueArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListFoldersContinueArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFoldersContinueArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListFoldersContinueArg` object
/// from a json-compatible dictionary representation.
+ (DBXSHARINGListFoldersContinueArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end