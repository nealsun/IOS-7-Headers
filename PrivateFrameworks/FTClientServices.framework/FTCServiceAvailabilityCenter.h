/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject
{
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;
- (int)availabilityForListenerID:(id)arg1 forService:(int)arg2;
- (BOOL)removeListenerID:(id)arg1 forService:(int)arg2;
- (BOOL)addListenerID:(id)arg1 forService:(int)arg2;
- (BOOL)hasListenerID:(id)arg1 forService:(int)arg2;
- (id)containerForService:(int)arg1 create:(BOOL)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (void)_postNotificationForService:(int)arg1 availability:(int)arg2;
- (BOOL)_isValidServiceType:(int)arg1;
- (void)dealloc;
- (id)init;

@end

