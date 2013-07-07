/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface DABabysitter : NSObject
{
    NSString *_buildVersion;
    NSMutableDictionary *_refreshingWaiters;
    NSMutableDictionary *_failedWaiters;
    NSMutableDictionary *_restrictedWaiters;
}

+ (id)sharedBabysitter;
@property(retain, nonatomic) NSMutableDictionary *restrictedWaiters; // @synthesize restrictedWaiters=_restrictedWaiters;
@property(retain, nonatomic) NSMutableDictionary *failedWaiters; // @synthesize failedWaiters=_failedWaiters;
@property(retain, nonatomic) NSMutableDictionary *refreshingWaiters; // @synthesize refreshingWaiters=_refreshingWaiters;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (BOOL)accountShouldContinue:(id)arg1;
- (BOOL)accountWithIDShouldContinue:(id)arg1;
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;
- (BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2;
- (void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)_init;
- (void)_reloadBabysitterProperties;

@end

