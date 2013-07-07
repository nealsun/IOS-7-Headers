/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock;

@interface SCROClient : NSObject
{
    NSLock *_lock;
    unsigned int _identifier;
    unsigned int _port;
    int _pid;
    struct __CFArray *_queue;
    struct __CFSet *_callbackSet;
}

+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;
+ (void)sendCallback:(id)arg1;
+ (BOOL)isClientTrustedWithPortToken:(CDStruct_6ad76789)arg1;
+ (long)removeClientWithPort:(unsigned int)arg1;
+ (id)addClientGetIdentifier:(unsigned int *)arg1 token:(CDStruct_6ad76789)arg2 getPort:(unsigned int *)arg3;
+ (void)initialize;
- (void)_sendCallback:(id)arg1;
- (BOOL)_wantsCallback:(id)arg1;
- (id)_dequeueCallbacks;
- (void)_registerCallbackWithKey:(int)arg1;
- (void)_invalidate;
- (void)_unlock;
- (void)_lock;
- (void)dealloc;
- (id)init;

@end

