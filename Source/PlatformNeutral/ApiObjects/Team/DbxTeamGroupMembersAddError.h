///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DbxStoneSerializers.h"
#import "DbxTeamGroupSelectorError.h"

@class DbxTeamGroupMembersAddError;

/// 
/// The DbxTeamGroupMembersAddError union.
/// 
@interface DbxTeamGroupMembersAddError : NSObject <DbxSerializable> 

typedef NS_ENUM(NSInteger, TeamGroupMembersAddErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    TeamGroupMembersAddErrorGroupNotFound,
    /// (no description)
    TeamGroupMembersAddErrorOther,
    /// You cannot add duplicate users. One or more of the members you are
    /// trying to add is already a member of the group.
    TeamGroupMembersAddErrorDuplicateUser,
    /// Group is not in this team. You cannot add members to a group that is
    /// outside of your team.
    TeamGroupMembersAddErrorGroupNotInTeam,
    /// These members are not part of your team. Currently, you cannot add
    /// members to a group if they are not part of your team, though this may
    /// change in a subsequent version. To add new members to your Dropbox
    /// Business team, use the membersAdd endpoint.
    TeamGroupMembersAddErrorMembersNotInTeam,
    /// These users were not found in Dropbox.
    TeamGroupMembersAddErrorUsersNotFound,
    /// A suspended user cannot be added to a group as owner in GroupAccessType.
    TeamGroupMembersAddErrorUserMustBeActiveToBeOwner,
    /// A company-managed group cannot be managed by a user.
    TeamGroupMembersAddErrorUserCannotBeManagerOfCompanyManagedGroup,
};

- (nonnull instancetype)initWithGroupNotFound;

- (nonnull instancetype)initWithOther;

- (nonnull instancetype)initWithDuplicateUser;

- (nonnull instancetype)initWithGroupNotInTeam;

- (nonnull instancetype)initWithMembersNotInTeam:(NSArray<NSString *> * _Nonnull)membersNotInTeam;

- (nonnull instancetype)initWithUsersNotFound:(NSArray<NSString *> * _Nonnull)usersNotFound;

- (nonnull instancetype)initWithUserMustBeActiveToBeOwner;

- (nonnull instancetype)initWithUserCannotBeManagerOfCompanyManagedGroup:(NSArray<NSString *> * _Nonnull)userCannotBeManagerOfCompanyManagedGroup;

- (BOOL)isGroupNotFound;

- (BOOL)isOther;

- (BOOL)isDuplicateUser;

- (BOOL)isGroupNotInTeam;

- (BOOL)isMembersNotInTeam;

- (BOOL)isUsersNotFound;

- (BOOL)isUserMustBeActiveToBeOwner;

- (BOOL)isUserCannotBeManagerOfCompanyManagedGroup;

- (NSString * _Nonnull)getTagName;

+ (NSDictionary * _Nonnull)serialize:(id _Nonnull)obj;

+ (id _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

- (NSString * _Nonnull)description;

/// Current state of the DbxTeamGroupMembersAddError union type.
@property (nonatomic) TeamGroupMembersAddErrorTag tag;
@property (nonatomic) NSArray<NSString *> * _Nonnull membersNotInTeam;
@property (nonatomic) NSArray<NSString *> * _Nonnull usersNotFound;
@property (nonatomic) NSArray<NSString *> * _Nonnull userCannotBeManagerOfCompanyManagedGroup;

@end


@interface DbxTeamGroupMembersAddErrorSerializer : NSObject 

+ (NSDictionary * _Nonnull)serialize:(DbxTeamGroupMembersAddError * _Nonnull)obj;

+ (DbxTeamGroupMembersAddError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end