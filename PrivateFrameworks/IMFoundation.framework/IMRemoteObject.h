/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString;

@interface IMRemoteObject : NSObject
{
    id _internal;
}

+ (void)initialize;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)_registerIMRemoteObject:(id)arg1;
+ (id)_remoteObjects;
- (id)_queue;
- (id)description;
- (void)invalidate;
- (void)setPortName:(id)arg1;
@property(readonly, nonatomic) NSString *portName;
@property(nonatomic) int pid;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)forwardInvocation:(id)arg1;
- (unsigned int)forwardXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)_systemShutdown:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
- (void)_portDidBecomeInvalid;
- (void)dealloc;
- (void)finalize;
- (void)_cleanupMachBitsCanPost:(BOOL)arg1;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2;
- (id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4;

@end

