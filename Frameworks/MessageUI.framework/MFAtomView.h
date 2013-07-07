/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIDefaultKeyboardInput.h"

@class MFAtomBackgroundView, NSString, UIActivityIndicatorView, UILabel, UIView;

@interface MFAtomView : UIDefaultKeyboardInput
{
    UIView *_background;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    float _scalingFactor;
}

+ (BOOL)showActivityIndicatorForStyle:(int)arg1;
+ (float)horizontalPadding;
+ (float)defaultHeight;
- (void)setScalingFactor:(float)arg1;
- (float)_rightInset;
- (float)_leftInset;
- (void)layoutSubviews;
- (void)showBackground:(BOOL)arg1;
- (float)preferredWidth;
- (void)_setupActivityIndicator;
@property(nonatomic) BOOL selected;
@property(nonatomic) int style;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) MFAtomBackgroundView *backgroundView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

