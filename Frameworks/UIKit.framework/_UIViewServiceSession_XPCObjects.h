/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/_UIViewServiceSession.h>

#import "_UIViewServiceSession_HostInterface_XPCObjects.h"

@class NSMutableSet, XPCEndpoint, _UIViewServiceXPCListener;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession_XPCObjects : _UIViewServiceSession <_UIViewServiceSession_HostInterface_XPCObjects>
{
    _UIViewServiceXPCListener *_listener;
    NSMutableSet *_pendingConnectionCatchers;
    NSMutableSet *_pendingDeputyProxies;
}

+ (id)sessionWithConnection:(id)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)_handleConnection:(id)arg1;
- (void)unregisterDeputyType:(id)arg1;
- (void)registerDeputyType:(id)arg1 withConnectionHandler:(id)arg2;
@property(readonly) XPCEndpoint *endpoint;
- (void)dealloc;

@end

