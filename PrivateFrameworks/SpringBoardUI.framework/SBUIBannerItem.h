/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBUIQuietModePlayability.h"

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>
{
}

- (BOOL)overridesQuietMode;
- (BOOL)isCritical;
- (BOOL)inertWhenLocked;
- (id)subActionWithIndex:(SEL)arg1;
- (id)subActionLabels;
- (id)pullDownNotification;
- (BOOL)canShowWhileLocked;
- (BOOL)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (id)action;
- (BOOL)isSticky;
- (unsigned int)priority;

@end

