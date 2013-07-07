/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEORoute, NSArray;

@interface GEOAttributedRoute : NSObject
{
    GEORoute *_route;
    NSArray *_maneuverDisplaySteps;
    unsigned int *_maneuverDisplayStepsToCurrentDisplayEndPoints;
    BOOL _maneuverDisplayEnabled;
    unsigned int _currentDisplayStep;
    unsigned int _maneuverDisplayCount;
    CDStruct_6b42e521 *_currentManeuverDisplayEndPoints;
}

@property(readonly, nonatomic) unsigned int maneuverDisplayCount; // @synthesize maneuverDisplayCount=_maneuverDisplayCount;
@property(retain, nonatomic) NSArray *maneuverDisplaySteps; // @synthesize maneuverDisplaySteps=_maneuverDisplaySteps;
@property(nonatomic) BOOL maneuverDisplayEnabled; // @synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled;
@property(readonly, nonatomic) GEORoute *route; // @synthesize route=_route;
- (void)attributedRouteHasChanged;
- (id)description;
- (CDStruct_6b42e521)maneuverDisplayEndpointsAtIndex:(unsigned long)arg1;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;
- (CDStruct_6b42e521)maneuverDisplayEndpointsAtStep:(unsigned long)arg1 metersPerPoint:(double)arg2;
- (CDStruct_6b42e521)maneuverDisplayEndpointsAtStep:(unsigned long)arg1;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned int)arg2;
@property(nonatomic) unsigned int currentDisplayStep; // @synthesize currentDisplayStep=_currentDisplayStep;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end

