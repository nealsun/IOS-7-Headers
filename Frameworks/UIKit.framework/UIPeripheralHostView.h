/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIKBRenderConfig, UIKeyboardCornerView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostView : UIView
{
    int _explicitLayoutCount;
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
    _UIBackdropView *_inputBackdropView;
    _UIBackdropView *_inputAccessoryBackdropView;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly, nonatomic) UIKeyboardCornerView *cornerViewRight; // @synthesize cornerViewRight=_cornerViewRight;
@property(readonly, nonatomic) UIKeyboardCornerView *cornerViewLeft; // @synthesize cornerViewLeft=_cornerViewLeft;
- (void)removeFromSuperview;
- (int)_clipCornersOfView:(id)arg1;
- (void)resizeForKeyplaneSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)explicitLayout;
- (void)endExplicitLayout;
- (void)beginExplicitLayout;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didAddSubview:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)_inheritedRenderConfig;
- (void)syncInputAccessoryViewBackdropToFrame:(struct CGRect)arg1;
- (void)syncInputViewBackdropToFrame:(struct CGRect)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

