/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isValidDateInCalendar:(id)arg1;
- (BOOL)isValidDate;
- (int)valueForComponent:(unsigned int)arg1;
- (void)setValue:(int)arg1 forComponent:(unsigned int)arg2;
- (id)date;
- (void)setLeapMonth:(BOOL)arg1;
- (void)setYearForWeekOfYear:(int)arg1;
- (void)setWeekOfMonth:(int)arg1;
- (void)setWeekOfYear:(int)arg1;
- (void)setNanosecond:(int)arg1;
- (void)setQuarter:(int)arg1;
- (void)setWeekdayOrdinal:(int)arg1;
- (void)setWeekday:(int)arg1;
- (void)setWeek:(int)arg1;
- (void)setSecond:(int)arg1;
- (void)setMinute:(int)arg1;
- (void)setHour:(int)arg1;
- (void)setDay:(int)arg1;
- (void)setMonth:(int)arg1;
- (void)setYear:(int)arg1;
- (void)setEra:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setCalendar:(id)arg1;
- (BOOL)isLeapMonthSet;
- (BOOL)isLeapMonth;
- (int)yearForWeekOfYear;
- (int)weekOfMonth;
- (int)weekOfYear;
- (int)nanosecond;
- (int)quarter;
- (int)weekdayOrdinal;
- (int)weekday;
- (int)week;
- (int)second;
- (int)minute;
- (int)hour;
- (int)day;
- (int)month;
- (int)year;
- (int)era;
- (id)timeZone;
- (id)calendar;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)init;

@end

