/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSFormatter.h>

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface NSDateFormatter : NSFormatter
{
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter *_formatter;
    unsigned int _counter;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned int)arg2 locale:(id)arg3;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned int)arg2 timeStyle:(unsigned int)arg3;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;
+ (unsigned int)defaultFormatterBehavior;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
- (void)setDoesRelativeDateFormatting:(BOOL)arg1;
- (BOOL)doesRelativeDateFormatting;
- (void)setGregorianStartDate:(id)arg1;
- (id)gregorianStartDate;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (id)shortStandaloneQuarterSymbols;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (id)standaloneQuarterSymbols;
- (void)setShortQuarterSymbols:(id)arg1;
- (id)shortQuarterSymbols;
- (void)setQuarterSymbols:(id)arg1;
- (id)quarterSymbols;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (id)veryShortStandaloneWeekdaySymbols;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (id)shortStandaloneWeekdaySymbols;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (id)standaloneWeekdaySymbols;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (id)veryShortWeekdaySymbols;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (id)veryShortStandaloneMonthSymbols;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (id)shortStandaloneMonthSymbols;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (id)standaloneMonthSymbols;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (id)veryShortMonthSymbols;
- (void)setLongEraSymbols:(id)arg1;
- (id)longEraSymbols;
- (void)setPMSymbol:(id)arg1;
- (id)PMSymbol;
- (void)setAMSymbol:(id)arg1;
- (id)AMSymbol;
- (void)setShortWeekdaySymbols:(id)arg1;
- (id)shortWeekdaySymbols;
- (void)setWeekdaySymbols:(id)arg1;
- (id)weekdaySymbols;
- (void)setShortMonthSymbols:(id)arg1;
- (id)shortMonthSymbols;
- (void)setMonthSymbols:(id)arg1;
- (id)monthSymbols;
- (void)setEraSymbols:(id)arg1;
- (id)eraSymbols;
- (void)setDefaultDate:(id)arg1;
- (id)defaultDate;
- (void)setTwoDigitStartDate:(id)arg1;
- (id)twoDigitStartDate;
- (void)setLenient:(BOOL)arg1;
- (BOOL)isLenient;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)_dateFormat;
- (void)setDateFormat:(id)arg1;
- (id)dateFormat;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (unsigned int)formatterBehavior;
- (void)setGeneratesCalendarDates:(BOOL)arg1;
- (BOOL)generatesCalendarDates;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setTimeStyle:(unsigned int)arg1;
- (unsigned int)timeStyle;
- (void)setDateStyle:(unsigned int)arg1;
- (unsigned int)dateStyle;
- (id)dateFromString:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_reset;
- (id)init;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_clearFormatter;

@end

