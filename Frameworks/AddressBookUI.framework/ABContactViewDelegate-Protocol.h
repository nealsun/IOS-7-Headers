/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"
#import "UITableViewDelegate.h"

@protocol ABContactViewDelegate <NSObject, UITableViewDelegate>

@optional
- (void)contactView:(id)arg1 didSelectItemAtIndex:(int)arg2 inGroup:(id)arg3;
- (float)contactView:(id)arg1 heightForItemAtIndex:(int)arg2 inGroup:(id)arg3;
- (int)numberOfGroupsInContactView:(id)arg1;
@end

