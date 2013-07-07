/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CTCallCenter, NSMutableDictionary;

@interface IMAVTelephonyManager : NSObject
{
    CTCallCenter *_callCenter;
    struct __CTServerConnection *_ctServerConnection;
    NSMutableDictionary *_currentCallDictionary;
    BOOL _isDesignatedAudioServiceProvider;
    BOOL _isDesignatedVideoServiceProvider;
    struct __CFMachPort *_ctServerMachPort;
    struct __CFUUID *_ctAudioToken;
    struct __CFUUID *_ctVideoToken;
}

+ (id)numberToDialForNumber:(id)arg1 dialAssist:(char *)arg2;
+ (id)sharedInstance;
- (BOOL)_breakCSCallsIfNecessary;
- (BOOL)_wantsBreakBeforeMake;
- (void)stopWatchingForCTRequests;
- (void)startWatchingForCTRequests;
- (void)_chatStateChanged:(id)arg1;
- (void)notifyCallEndedForChat:(id)arg1;
- (void)_notifyMissedCallForInviteFromID:(id)arg1 isVideo:(BOOL)arg2;
- (void)notifyMissedCallForChat:(id)arg1;
- (void)notifyCallStartedForChat:(id)arg1;
- (void)notifyCallConnectingForChat:(id)arg1;
- (void)notifyCallConnectedForChat:(id)arg1;
- (BOOL)_isOnCallToID:(id)arg1;
- (void)_disconnectCSCallWithID:(id)arg1;
@property(readonly, nonatomic) unsigned int callState;
- (void)_setCurrentCallStatus:(int)arg1 forChat:(id)arg2;
- (void)_handleCTServiceRequestName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2 contextInfo:(void *)arg3;
- (void)_hangUpCall:(struct __CTCall *)arg1;
- (void)_answerCall:(struct __CTCall *)arg1;
- (void)_dialRequested:(struct __CFDictionary *)arg1;
- (void)_setCallRef:(struct __CTCall *)arg1 forChat:(id)arg2;
- (struct __CTCall *)_callRefForChat:(id)arg1;
- (BOOL)_disconnectCTServerConnection;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (BOOL)_unregisterCTRequestService;
- (BOOL)_registerCTRequestService;
- (void)_handleCallEvent:(id)arg1;
- (void)__handleCallEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

