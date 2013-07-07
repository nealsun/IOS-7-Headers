/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver>
{
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isCellularRestricted;
    double _lastNetworkTypeChangeTime;
    int _networkUsageCount;
    int _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_observedDownloadQueues;
    NSString *_operatorName;
    struct __SCNetworkReachability *_reachability;
    NSString *_registrationStatus;
    struct __CTServerConnection *_telephonyServer;
}

+ (void)setWiFiEnabled:(BOOL)arg1;
+ (void)setAirplaneModeEnabled:(BOOL)arg1;
+ (void)set3GEnabled:(BOOL)arg1;
+ (id)sharedInstance;
- (int)_setNetworkType:(int)arg1;
- (void)_reloadNetworkType;
- (void)_reloadCellularRestriction;
- (void)_postUsageChangedToValue:(BOOL)arg1;
- (void)_postTypeChangedNotificationFromValue:(int)arg1 toValue:(int)arg2;
- (BOOL)_ntsIsUsingNetwork;
- (int)_networkTypeFromDataIndicator:(id)arg1;
- (id)_dataStatusIndicator;
- (int)_currentNetworkType;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2;
- (void)downloadQueueNetworkUsageChanged:(id)arg1;
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
@property int networkType;
- (void)reloadNetworkType;
@property(readonly) NSString *operatorName;
@property(readonly) NSString *modemRegistrationStatus;
@property(readonly, getter=isWiFiEnabled) BOOL wifiEnabled;
@property(readonly) NSString *dataStatusIndicator;
@property(readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch;
@property(readonly) double lastNetworkTypeChangeTime;
@property(readonly, getter=isUsingNetwork) BOOL usingNetwork;
- (void)endUsingNetwork;
- (void)endObservingDownloadQueue:(id)arg1;
- (id)copyValueForCarrierBundleKey:(id)arg1;
@property(readonly) NSString *connectionTypeHeader;
- (void)beginUsingNetwork;
- (void)beginObservingDownloadQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

