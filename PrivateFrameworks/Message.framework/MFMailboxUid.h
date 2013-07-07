/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class MFMessageCriterion, MFWeakReferenceHolder, MailAccount, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MFMailboxUid : NSObject <NSCopying>
{
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSArray *_extraAttributes;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
    NSString *_permanentTag;
}

+ (BOOL)isSentMailboxType:(int)arg1;
+ (BOOL)isDraftsMailboxType:(int)arg1;
+ (BOOL)isOutgoingMailboxType:(int)arg1;
+ (BOOL)isSpecialMailboxUidType:(int)arg1;
+ (id)specialNameForType:(int)arg1;
@property(retain, nonatomic) NSString *permanentTag; // @synthesize permanentTag=_permanentTag;
@property(retain, nonatomic) NSArray *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
- (void)addToPostOrderTraversal:(id)arg1;
- (void)setLastViewedMessageID:(id)arg1;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageID;
- (BOOL)alwaysWriteFullMessageFile;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (BOOL)isSelectable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)store;
- (void)setCriterion:(id)arg1;
- (id)criterion;
- (id)ancestralAccount;
- (id)userInfoForSerialization;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoDictionary;
- (BOOL)mergeWithUserInfo:(id)arg1;
- (void)saveUserInfo;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (id)_loadUserInfo;
- (BOOL)isVisible;
- (void)setType:(int)arg1;
- (int)type;
- (id)description;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (int)indexToInsertChildMailboxUid:(id)arg1;
- (int)compareWithMailboxUid:(id)arg1;
- (id)URLStringNonNil;
- (unsigned int)mailboxID;
- (id)URLString;
- (id)oldURLString;
- (id)URLStringWithAccount:(id)arg1;
- (id)URL;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)realFullPath;
- (id)fullPath;
- (id)accountRelativePath;
- (BOOL)isOutgoingMailboxUid;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isStore;
- (BOOL)isContainer;
- (void)invalidate;
- (BOOL)isValid;
- (id)account;
- (id)rootMailbox;
- (id)topMailbox;
- (id)representedAccount;
- (void)setRepresentedAccount:(id)arg1;
- (void)flushCriteria;
- (void)setParent:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)parent;
- (void)sortChildren;
- (BOOL)setChildren:(id)arg1;
- (id)fullPathNonNil;
- (id)mutableCopyOfChildren;
- (id)descendantWithPermanentTag:(id)arg1;
- (id)descendantWithExtraAttribute:(id)arg1;
- (id)childWithPermanentTag:(id)arg1;
- (id)childWithExtraAttribute:(id)arg1;
- (id)childWithName:(id)arg1;
- (unsigned int)indexOfChild:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfDescendants;
- (unsigned int)numberOfChildren;
- (id)depthFirstEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)childEnumerator;
- (BOOL)hasChildren;
- (id)_mutableChildren;
- (id)children;
- (unsigned int)nonDeletedCount;
- (BOOL)setUnreadCount:(unsigned int)arg1;
- (unsigned int)unreadCountMatchingCriterion:(id)arg1;
- (unsigned int)unreadCount;
- (void)setAttributes:(unsigned int)arg1;
- (unsigned int)attributes;
- (void)setName:(id)arg1;
- (id)displayNameUsingSpecialNames;
- (id)name;
- (id)displayName;
- (id)uniqueId;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 permanentTag:(id)arg4;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;

@end

