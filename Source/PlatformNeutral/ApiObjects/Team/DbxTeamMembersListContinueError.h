///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"

@class DbxTeamMembersListContinueError;

/// 
/// The DbxTeamMembersListContinueError union.
/// 
@interface DbxTeamMembersListContinueError : NSObject <DbxSerializable> 

typedef NS_ENUM(NSInteger, TeamMembersListContinueErrorTag) {
    /// The cursor is invalid.
    TeamMembersListContinueErrorInvalidCursor,
    /// (no description)
    TeamMembersListContinueErrorOther,
};

- (nonnull instancetype)initWithInvalidCursor;

- (nonnull instancetype)initWithOther;

- (BOOL)isInvalidCursor;

- (BOOL)isOther;

- (NSString * _Nonnull)getTagName;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

/// Current state of the DbxTeamMembersListContinueError union type.
@property (nonatomic) TeamMembersListContinueErrorTag tag;

@end


@interface DbxTeamMembersListContinueErrorSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxTeamMembersListContinueError * _Nonnull)obj;

+ (DbxTeamMembersListContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end