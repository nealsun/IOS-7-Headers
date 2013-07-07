/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIControl.h"

@class TPRevealingRingView, UILabel;

@interface SBUIRingViewLabelButton : UIControl
{
    TPRevealingRingView *_ringView;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) TPRevealingRingView *backgroundRing; // @synthesize backgroundRing=_ringView;
- (void)setHighlighted:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

