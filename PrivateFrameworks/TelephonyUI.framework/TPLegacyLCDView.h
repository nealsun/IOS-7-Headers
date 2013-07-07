/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <TelephonyUI/TPLegacyLCDBar.h>

@class TPLegacyLCDSubImageView, TPLegacyLCDTextView, UIView;

@interface TPLegacyLCDView : TPLegacyLCDBar
{
    UIView *_contentView;
    TPLegacyLCDTextView *_textView;
    TPLegacyLCDTextView *_secondLineTextView;
    TPLegacyLCDTextView *_labelView;
    TPLegacyLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled:1;
    BOOL _hasBackgroundGradient;
    UIView *_backgroundGradientView;
}

+ (float)labelFontSize;
+ (float)textFontSize;
@property(nonatomic) BOOL hasBackgroundGradient; // @synthesize hasBackgroundGradient=_hasBackgroundGradient;
@property(retain, nonatomic) UIView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (void)setShadowColor:(id)arg1;
- (id)subImage;
- (void)setSubImage:(id)arg1;
- (void)blinkLabel;
- (id)label;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;
- (void)setLabel:(id)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setSecondLineText:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)_imageViewFrame;
- (struct CGRect)_labelFrame;
- (id)secondLineText;
- (struct CGRect)_text2Frame;
- (struct CGRect)textFrame;
- (struct CGRect)_text1Frame;
- (id)text;
- (void)setText:(id)arg1;
- (float)_textVInset;
- (float)_labelVInset;
- (void)setContentsAlpha:(float)arg1;
- (BOOL)showImageViewOnLeftSide;
- (BOOL)shouldCenterContentView;
- (BOOL)shouldCenterText;
- (void)dealloc;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (void)_resetContentViewFrame;
- (struct CGRect)fullSizedContentViewFrame;

@end

