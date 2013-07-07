/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding.h"

@class NSMutableArray, UIResponder, UIWindow;

@interface UITransitionView : UIView <NSCoding>
{
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct {
        unsigned int animationInProgress:1;
        unsigned int ignoresInteractionEvents:1;
        unsigned int shouldNotifyDidCompleteImmediately:1;
        unsigned int useViewControllerAppearanceCallbacks:1;
        unsigned int shouldRestoreFromViewAlpha:1;
        unsigned int shouldRasterize:1;
        unsigned int enableRotationAfterTransition:1;
        unsigned int removeFromView:1;
    } _transitionViewFlags;
    float _curlUpRevealedHeight;
}

+ (double)defaultDurationForTransition:(int)arg1;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)_startTransition:(int)arg1 withDuration:(double)arg2;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (BOOL)ignoresInteractionEvents;
- (BOOL)rasterizesOnTransition;
- (void)setRasterizesOnTransition:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)_isTransitioningFromFromView:(id)arg1;
- (BOOL)isTransitioning;
- (id)toView;
- (id)fromView;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)notifyDidCompleteTransition:(id)arg1;
- (BOOL)transition:(int)arg1 toView:(id)arg2;
- (void)_didCompleteTransition:(BOOL)arg1;
@property(nonatomic) BOOL shouldNotifyDidCompleteImmediately;
- (void)_didStartTransition;
- (double)durationForTransition:(int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (float)_curlUpRevealedHeight;

@end

