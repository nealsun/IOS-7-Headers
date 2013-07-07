/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSTimer, SBKAsynchronousTask, SBKPlaybackPositionSyncRequestHandler;

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    BOOL _hasLocalChangesToSync;
    unsigned int _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    BOOL _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKAsynchronousTask *_synchronizeTask;
    SBKAsynchronousTask *_lookupDomainVersionTask;
    SBKAsynchronousTask *_bagLookupTask;
    SBKPlaybackPositionSyncRequestHandler *_syncHandler;
    NSDate *_dateToFireNextTimer;
    NSTimer *_timer;
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain) SBKPlaybackPositionSyncRequestHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(retain) SBKAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain) SBKAsynchronousTask *lookupDomainVersionTask; // @synthesize lookupDomainVersionTask=_lookupDomainVersionTask;
@property(retain) SBKAsynchronousTask *synchronizeTask; // @synthesize synchronizeTask=_synchronizeTask;
@property(readonly) id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStopTimer;
- (void)_onQueueResumeTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueScheduleTimer;
- (BOOL)_timerIsStopped;
- (void)_timerFired:(id)arg1;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1;
- (double)_effectiveAutorefreshRate;
- (void)_updateForStoreAccountsChange;
- (void)_onQueueLoadBagContextWithCompletionHandler:(id)arg1;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (id)_accountForSyncing;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(id)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned int)arg1 withCompletionBlock:(id)arg2;
- (void)loadSyncBagContextWithCompletionBlock:(id)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(id)arg1;
- (void)checkForAvailabilityWithCompletionBlock:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(id)arg1;
- (void)synchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1;
@property BOOL hasLocalChangesToSync;
@property unsigned int automaticSynchronizeOptions;
- (void)resignActive;
- (void)becomeActive;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)dealloc;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(BOOL)arg2;
- (id)initWithInitialUpdateDelay:(double)arg1 allowAutorefresh:(BOOL)arg2 isActive:(BOOL)arg3;
- (id)init;
- (id)initWithDataSource:(id)arg1 automaticSynchronizeOptions:(unsigned int)arg2 isActive:(BOOL)arg3;
- (void)deprecated_setDataSource:(id)arg1;

@end

