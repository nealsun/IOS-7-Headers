/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CUTWeakReference, NSMutableArray;

@interface CUTPowerMonitor : NSObject
{
    CUTWeakReference *_iokitDelegate;
    struct __CFRunLoopSource *_batteryRunLoopSource;
    struct IONotificationPort *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort *_pmPort;
    unsigned int _pmNotifier;
    NSMutableArray *_delegates;
    BOOL _isExternalPowerConnected;
    double _currentLevel;
}

+ (id)sharedInstance;
- (void)setExternalPowerConnected:(BOOL)arg1;
@property(nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;
@property(readonly, nonatomic) double batteryPercentRemaining;
@property(nonatomic) BOOL isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void *)arg2;

@end

