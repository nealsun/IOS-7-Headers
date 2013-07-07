/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, VMAccount;

@interface VMServiceClient : NSObject
{
    VMAccount *_legacyVisualVoicemailAccount;
    NSObject<OS_dispatch_queue> *_queue;
    long long _behaviorFlags;
}

+ (id)sharedClient;
+ (void)initialize;
@property long long behaviorFlags; // @synthesize behaviorFlags=_behaviorFlags;
- (void)_handleApplicationResumed:(id)arg1;
- (void)_handleApplicationSuspended:(id)arg1;
- (void)_handleXPCConnectionEstablished:(id)arg1;
- (void)_handleXPCDisconnectNotification:(id)arg1;
- (void)_handleInboundXPCMessageRecievedNotification:(id)arg1;
- (id)proxyObjectFromProxyDictionary:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (BOOL)sharedServiceIsSubscribed;
- (id)sharedAccount;
- (void)dealloc;
- (id)init;

@end

