/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface SPXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _ownsQueue;
    id _messageHandler;
    id _disconnectHandler;
    NSMutableSet *_outstandingMessages;
    BOOL _timeoutDisabled;
    id _context;
}

@property(nonatomic) BOOL timeoutDisabled; // @synthesize timeoutDisabled=_timeoutDisabled;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) id disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(copy, nonatomic) id messageHandler; // @synthesize messageHandler=_messageHandler;
- (int)_outstandingMessages;
- (void)_removeMessage:(id)arg1;
- (void)_registerMessage:(id)arg1;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (void)shutdown;
- (void)_handleXPCError:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (id)eventQueue;
@property(readonly) NSString *serviceName;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;

@end

