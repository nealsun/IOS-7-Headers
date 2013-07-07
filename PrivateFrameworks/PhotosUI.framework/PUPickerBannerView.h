/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, NSString, PUStackView, UILabel;

@interface PUPickerBannerView : UIView
{
    BOOL __animatingStackView;
    unsigned int _style;
    NSArray *_images;
    NSString *_title;
    UIView *_leftView;
    UIView *_rightView;
    int __alignment;
    UILabel *__label;
    PUStackView *__stackView;
    id __animationCompletionHandler;
}

@property(copy, nonatomic, setter=_setAnimationCompletionHandler:) id _animationCompletionHandler; // @synthesize _animationCompletionHandler=__animationCompletionHandler;
@property(nonatomic, setter=_setAnimatingStackView:) BOOL _animatingStackView; // @synthesize _animatingStackView=__animatingStackView;
@property(retain, nonatomic, setter=_setStackView:) PUStackView *_stackView; // @synthesize _stackView=__stackView;
@property(retain, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic, setter=_setAlignment:) int _alignment; // @synthesize _alignment=__alignment;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(id)arg3;
- (void)_updateLabel;
- (void)_updateStackView;
- (void)_updateAlignment;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

