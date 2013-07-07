/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <TelephonyUI/TPLegacyBottomSingleButtonBar.h>

#import "TPLegacyBottomGrabberBar.h"

@class NSArray, UIImage, UIView;

@interface TPLegacyBottomSingleButtonGrabberBar : TPLegacyBottomSingleButtonBar <TPLegacyBottomGrabberBar>
{
    UIView *_grabberView;
    UIImage *_grabberImage;
    NSArray *_grabberGestureRecognizers;
    BOOL _isAnimatingOutGrabber;
}

+ (id)answerButtonImage;
@property(retain, nonatomic) NSArray *grabberGestureRecognizers; // @synthesize grabberGestureRecognizers=_grabberGestureRecognizers;
@property(readonly) UIView *grabberView; // @synthesize grabberView=_grabberView;
@property(retain, nonatomic) UIImage *grabberImage; // @synthesize grabberImage=_grabberImage;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animateGrabberOutWithCompletion:(id)arg1;
- (void)layoutSubviews;
- (void)_updateButtonAndWellWidths;
- (float)buttonWidth;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (void)dealloc;
- (id)initForIncomingCallWaitingWithFrame:(struct CGRect)arg1;

@end

