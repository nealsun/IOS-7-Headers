/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PTSModuleObserver <NSObject>
- (void)moduleDidReload:(id)arg1;
- (void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3;
@end

