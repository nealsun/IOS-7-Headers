/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DayForecast : NSObject
{
    NSString *_high;
    NSString *_low;
    unsigned int _icon;
    unsigned int _dayOfWeek;
    unsigned int _dayNumber;
}

@property(nonatomic) unsigned int dayNumber; // @synthesize dayNumber=_dayNumber;
@property(nonatomic) unsigned int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *low; // @synthesize low=_low;
@property(copy, nonatomic) NSString *high; // @synthesize high=_high;
- (int)compareDayNumberToDayForecast:(id)arg1;
- (id)description;
- (void)dealloc;

@end

