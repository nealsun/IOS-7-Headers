/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCInterfaceMonitorProtocol.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"

@class NSMapTable, NSString;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol>
{
    id <PCInterfaceUsabilityMonitorProtocol> _internal;
    NSMapTable *_delegateMap;
}

+ (BOOL)isPoorLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(int)arg1;
@property(readonly, nonatomic) struct __CFString *currentRAT;
@property(readonly, nonatomic) BOOL isRadioHot;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) int interfaceIdentifier;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(int)arg1;

@end

