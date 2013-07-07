/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray, NSTimer;

@interface IMBatchIDStatusQueryController : NSObject
{
    NSMutableArray *_imHandles;
    NSMutableArray *_imHandlesQueried;
    NSTimer *_nextQueryTimer;
    NSDate *_timeOfDeath;
    int _numberOfQueriesDone;
    BOOL _isDead;
}

- (void)_invalidateNextQueryTimer;
- (void)_nextQuery:(id)arg1;
- (void)invalidate;
- (void)setIMHandles:(id)arg1;
- (void)_scheduleNextQuery:(double)arg1;
- (void)dealloc;
- (id)init;

@end

