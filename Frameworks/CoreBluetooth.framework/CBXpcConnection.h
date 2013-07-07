/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>, NSRecursiveLock;

@interface CBXpcConnection : NSObject
{
    id <CBXpcConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_options;
    int _type;
    NSRecursiveLock *_delegateLock;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(nonatomic) id <CBXpcConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)nsDictionaryFromXpcDictionary:(id)arg1;
- (id)nsArrayWithXpcArray:(id)arg1;
- (id)nsObjectWithXpcObject:(id)arg1;
- (id)allocXpcDictionaryWithNSDictionary:(id)arg1;
- (id)allocXpcArrayWithNSArray:(id)arg1;
- (id)allocXpcObjectWithNSObject:(id)arg1;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleInvalid;
- (void)handleReset;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (id)allocXpcMsg:(int)arg1 args:(id)arg2;
- (void)checkOut;
- (void)checkIn;
- (BOOL)isMainQueue;
- (void)disconnect;
- (BOOL)bluetoothExists;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;

@end

