/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIActivityIndicatorView;

@interface PLFilledActivityIndicator : UIView
{
    UIActivityIndicatorView *_indicatorView;
}

- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)startAnimatingAfterDelay:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithLocation:(struct CGPoint)arg1;

@end

