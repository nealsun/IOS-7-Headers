/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GQDDrawable;

__attribute__((visibility("hidden")))
@interface GQDWrapPoint : NSObject
{
    struct CGPoint mPoint;
    float mDistance;
    GQDDrawable *mDrawable;
    int mFlowType;
    int mZIndex;
}

- (id).cxx_construct;
- (int)zIndex;
- (int)comparePoint:(id)arg1;
- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;

@end

