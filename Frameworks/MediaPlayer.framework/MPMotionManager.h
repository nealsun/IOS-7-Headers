/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CMAttitude, CMMotionManager, NSMutableSet, NSOperationQueue;

@interface MPMotionManager : NSObject
{
    NSMutableSet *_accelerometerHandlerClients;
    BOOL _accelerometerUpdatesActive;
    CMAttitude *_attitude;
    CMMotionManager *_motionManager;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedMotionManager;
- (void).cxx_destruct;
- (void)_beginMotionUpdates;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverWithAccelerometerHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

