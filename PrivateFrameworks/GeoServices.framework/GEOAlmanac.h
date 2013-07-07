/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOAlmanac : NSObject
{
    CDStruct_2c43369c _coordinate;
    double _sunrise;
    double _sunset;
    double _nextSunrise;
    double _nextSunset;
}

- (id).cxx_construct;
- (double)intervalForNextAstronomicalChangeFromTime:(double)arg1;
- (double)intervalForNextAstronomicalChange;
- (BOOL)isDayLightForTime:(double)arg1;
@property(readonly, nonatomic) BOOL isDayLight;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1;

@end

