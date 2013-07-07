/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_b0fa4487 _dateGr;
    double _dateAbs;
    EKTimeZone *_timeZone;
    unsigned int _flags;
}

+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (int)compare:(id)arg1;
- (id)laterDate:(id)arg1;
- (id)earlierDate:(id)arg1;
- (id)calendarDateForYear;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(long)arg1;
- (id)calendarDateForWeekWithWeekStart:(long)arg1 daysSinceWeekStart:(int *)arg2;
- (id)calendarDateForWeekWithWeekStart:(long)arg1;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForDay;
- (unsigned int)weeksInYear;
- (unsigned int)daysInYear;
- (unsigned int)daysInMonth;
- (unsigned int)weekOfYear;
- (unsigned int)dayOfYear;
- (long)dayOfWeek;
- (double)second;
- (unsigned int)minute;
- (unsigned int)hour;
- (unsigned int)day;
- (unsigned int)month;
- (unsigned int)year;
- (int)differenceInDays:(id)arg1;
- (int)differenceInMonths:(id)arg1;
- (int)differenceInYears:(id)arg1;
- (CDStruct_6e43267c)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long)arg2;
- (id)calendarDateWithDate:(id)arg1;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateByAddingMonths:(int)arg1;
- (id)calendarDateByAddingWeeks:(int)arg1;
- (id)calendarDateByAddingDays:(int)arg1;
- (id)calendarDateByAddingGregorianUnits:(CDStruct_6e43267c)arg1;
- (int)secondsFromGMT;
- (id)timeZone;
- (CDStruct_b0fa4487)gregorianDate;
- (id)components;
- (double)absoluteTime;
- (id)date;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 internalTimeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;
- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;

@end

