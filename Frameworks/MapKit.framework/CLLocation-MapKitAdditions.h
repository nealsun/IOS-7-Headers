/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CLLocation.h"

@interface CLLocation (MapKitAdditions)
+ (int)_mapkit_typeWithSource:(int)arg1;
+ (id)_mapkit_stringWithType:(int)arg1;
@property(readonly, nonatomic) int _mapkit_source;
- (BOOL)isEqualToLocationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)locationDescription;
- (BOOL)hasValidCourse;
- (BOOL)isStale;
@end

