/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IMReachability : NSObject
{
    BOOL _gettingFlags;
    id <IMReachabilityDelegate> _delegate;
    unsigned int _flags;
    NSString *_description;
    void *_reachabilityRef;
}

+ (id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2;
+ (id)reachabilityWithRemoteAddress:(id)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
@property(nonatomic) void *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) NSString *reachabilityDescription; // @synthesize reachabilityDescription=_description;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(nonatomic) BOOL gettingFlags; // @synthesize gettingFlags=_gettingFlags;
@property(nonatomic) id <IMReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL connectionRequired;
- (void)_forceGetFlagsIfNecessary;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability *)arg1 description:(id)arg2 delegate:(id)arg3;

@end

