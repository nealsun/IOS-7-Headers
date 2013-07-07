/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MKOrientationContext : NSObject
{
    NSMutableArray *orientViews;
    NSArray *relativeViews;
    struct UIView *projectionView;
    struct CGRect *relativeViewFrames;
}

- (void)dealloc;
- (void)invalidateView:(id)arg1;
- (void)_computeRelativeViewFrame:(id)arg1;
- (void)_computeRelativeViewFrames;
- (id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(struct UIView *)arg3;

@end

