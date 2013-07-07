/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class NSMutableDictionary, NSTimer, UIButton, UIColor, UIImageView;

@interface UIStepper : UIControl
{
    BOOL _isRtoL;
    UIImageView *_middleView;
    UIButton *_plusButton;
    UIButton *_minusButton;
    NSTimer *_repeatTimer;
    int _repeatCount;
    NSMutableDictionary *_dividerImages;
    BOOL _continuous;
    BOOL _autorepeat;
    BOOL _wraps;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
}

@property(nonatomic) BOOL wraps; // @synthesize wraps=_wraps;
@property(nonatomic) BOOL autorepeat; // @synthesize autorepeat=_autorepeat;
@property(nonatomic, getter=isContinuous) BOOL continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)_updateImages;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (id)decrementImageForState:(unsigned int)arg1;
- (void)setDecrementImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setDecrementImage:(id)arg1 forState:(unsigned int)arg2;
- (id)incrementImageForState:(unsigned int)arg1;
- (void)setIncrementImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setIncrementImage:(id)arg1 forState:(unsigned int)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3;
- (id)backgroundImageForState:(unsigned int)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)layoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateCount:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateDividerImageForButtonState;
- (void)_updateHighlightingAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateButtonEnabled;
- (void)_commonStepperInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

