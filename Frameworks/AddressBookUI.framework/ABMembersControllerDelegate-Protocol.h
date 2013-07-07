/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol ABMembersControllerDelegate <NSObject>
- (id)model;
- (void)membersControllerDidEndServerSearch:(id)arg1;
- (void)membersControllerDidEndSearching:(id)arg1;
- (void)membersControllerWillEndSearching:(id)arg1;
- (void)membersControllerWillStartSearching:(id)arg1;
- (BOOL)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (int)behavior;
- (void)personWasSelected:(void *)arg1;
- (BOOL)showCardForPerson:(void *)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (BOOL)showCardForPerson:(void *)arg1 animate:(BOOL)arg2;
- (BOOL)allowsShowingPersonsCards;
- (void)showInsertEditorForPerson:(void *)arg1 animate:(BOOL)arg2;
@end

