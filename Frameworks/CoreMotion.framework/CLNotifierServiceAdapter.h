/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreMotion/CLIntersiloService.h>

#import "CLNotifierServiceProtocol.h"

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol>
{
    struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int>>> _clients;
    struct CLNotifierBase *_notifier;
}

@property(readonly, nonatomic) struct CLNotifierBase *notifier; // @synthesize notifier=_notifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (int)notifierClientNumForCoparty:(id)arg1;
- (void)forget:(byref id)arg1;
- (void)unregister:(byref id)arg1 forNotification:(int)arg2;
- (void)register:(byref id)arg1 forNotification:(int)arg2 registrationInfo:(id)arg3;
- (void)invalidate;
- (void)setAdaptedNotifier:(struct CLNotifierBase *)arg1;
- (id)initInSilo:(id)arg1;

@end

