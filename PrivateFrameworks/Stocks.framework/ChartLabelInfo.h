/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ChartLabelInfo : NSObject
{
    NSString *_string;
    struct CGSize _size;
    float _position;
    BOOL _immutable;
}

@property(readonly, nonatomic) BOOL immutable; // @synthesize immutable=_immutable;
@property(nonatomic) float position; // @synthesize position=_position;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)retainStringAndSizeFromLabelInfo:(id)arg1;
- (void)setStringToYearWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (void)setStringToMonthAndDayWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (void)setImmutable:(BOOL)arg1;

@end

