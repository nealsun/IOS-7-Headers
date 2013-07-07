/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface ABCapabilitiesManager : NSObject
{
    BOOL _isListeningToIDSServiceAvailability;
}

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;
- (BOOL)_isAppAvailable:(id)arg1;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)isMessagesAppAvailable;
- (BOOL)isMailAppAvailable;
- (BOOL)isPhoneAppAvailable;
- (BOOL)isWeiboServiceAvailable;
- (BOOL)isTwitterServiceAvailable;
- (BOOL)hasAdditionalTextTones;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)removeIDSServiceAvailabilityListener:(id)arg1;
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;
- (id)conferenceURLForDestinationID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (BOOL)hasPreviouslyConferencedWithID:(id)arg1;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (BOOL)isConferencingAvailable;
- (BOOL)isMadridConfigured;
- (BOOL)isMMSConfigured;
- (BOOL)isEmailConfigured;
- (BOOL)hasCameraCapability;
- (BOOL)hasVibratorCapability;
- (BOOL)hasSMSCapability;
- (BOOL)hasCellularDataCapability;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)hasTelephonyCapability;
- (BOOL)isSensitiveUIAllowed;
- (void)dealloc;

@end

