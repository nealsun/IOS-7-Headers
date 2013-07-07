/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

#import "NSCopying.h"

@class EKCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;

@interface EKRecurrenceRule : EKObject <NSCopying>
{
    BOOL _usesEndDate;
    EKRecurrenceEnd *_cachedEnd;
    EKCalendarItem *_owner;
}

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;
@property(retain, nonatomic) EKCalendarItem *owner; // @synthesize owner=_owner;
@property(readonly) BOOL usesEndDate; // @synthesize usesEndDate=_usesEndDate;
@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd; // @synthesize cachedEnd=_cachedEnd;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (BOOL)mayOccurAfterDate:(id)arg1;
@property(readonly, nonatomic) BOOL dirtyStateMayAffectExceptionDates;
- (void)reset;
- (void)setSetPositions:(id)arg1;
@property(readonly, nonatomic) NSArray *setPositions;
- (void)setMonthsOfTheYear:(id)arg1;
@property(readonly, nonatomic) NSArray *monthsOfTheYear;
- (void)setWeeksOfTheYear:(id)arg1;
@property(readonly, nonatomic) NSArray *weeksOfTheYear;
- (void)setDaysOfTheYear:(id)arg1;
@property(readonly, nonatomic) NSArray *daysOfTheYear;
- (void)setDaysOfTheMonth:(id)arg1;
@property(readonly, nonatomic) NSArray *daysOfTheMonth;
- (void)setDaysOfTheWeek:(id)arg1;
@property(readonly, nonatomic) NSArray *daysOfTheWeek;
- (void)setFirstDayOfTheWeek:(unsigned int)arg1;
@property(readonly, nonatomic) int firstDayOfTheWeek;
@property(readonly, nonatomic) NSDate *cachedEndDate;
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
- (void)setInterval:(unsigned int)arg1;
@property(readonly, nonatomic) int interval;
- (void)setFrequency:(int)arg1;
@property(readonly, nonatomic) int frequency;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (id)lazyLoadRelationForKey:(id)arg1;
@property(readonly) CDStruct_6e43267c gregorianUnits;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL shouldPinMonthDays;
@property(readonly, nonatomic) NSString *UUID;
- (id)_persistentRule;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 end:(id)arg3;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)init;

@end

