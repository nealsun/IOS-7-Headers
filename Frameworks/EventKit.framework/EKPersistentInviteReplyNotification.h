/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendar, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKPersistentInviteReplyNotification : EKPersistentObject
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(readonly, nonatomic) EKPersistentCalendar *calendar;
@property(readonly, nonatomic) BOOL alerted;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSString *shareeLastName;
@property(readonly, nonatomic) NSString *shareeFirstName;
@property(readonly, nonatomic) NSString *shareeAddress;
@property(readonly, nonatomic) NSString *shareeDisplayName;
@property(readonly, nonatomic) NSString *calendarName;

@end

