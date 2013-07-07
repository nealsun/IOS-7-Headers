/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface DMXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id _interruptionHandler;
    id _invalidationHandler;
}

@property(copy) id invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) id interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 replyHandler:(id)arg2;
- (void)handleMessage:(id)arg1;
- (void)_handleMessage:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)initWithServiceName:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

