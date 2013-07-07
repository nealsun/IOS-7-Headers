/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying>
{
    int _dayOfTheWeek;
    int _weekNumber;
}

+ (id)dayOfWeek:(int)arg1 weekNumber:(int)arg2;
+ (id)dayOfWeek:(int)arg1;
@property(readonly, nonatomic) int weekNumber; // @synthesize weekNumber=_weekNumber;
@property(readonly, nonatomic) int dayOfTheWeek; // @synthesize dayOfTheWeek=_dayOfTheWeek;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)iCalendarDescription;
- (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfTheWeek:(int)arg1 weekNumber:(int)arg2;

@end

