/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VKAttributedRouteMatch;

__attribute__((visibility("hidden")))
@interface VKPuckAnimatorLocationProjector : NSObject
{
    VKAttributedRouteMatch *_routeMatch;
    VKAttributedRouteMatch *_projectedRouteMatch;
    struct VKPoint _projectedPosition;
    double _projectedCourse;
}

@property(readonly, nonatomic) double projectedCourse; // @synthesize projectedCourse=_projectedCourse;
@property(readonly, nonatomic) struct VKPoint projectedPosition; // @synthesize projectedPosition=_projectedPosition;
@property(retain, nonatomic) VKAttributedRouteMatch *projectedRouteMatch; // @synthesize projectedRouteMatch=_projectedRouteMatch;
@property(retain, nonatomic) VKAttributedRouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
- (id).cxx_construct;
@property(readonly, nonatomic) BOOL projectedLocationOnRoute;
@property(readonly, nonatomic) CDStruct_c3b9c2ee projectedLocation;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3;
- (void)_updateCourseAndPositionFromRouteMatch;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

