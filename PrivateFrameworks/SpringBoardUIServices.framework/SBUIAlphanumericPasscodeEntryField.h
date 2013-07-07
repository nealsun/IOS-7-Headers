/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UITextInputTraits, UIView;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField
{
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_springView;
    UIView *_springViewParent;
}

- (void)notePasscodeFieldTextDidChange;
- (void)resetForFailedPasscode;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
@property(readonly, nonatomic) UITextInputTraits *textInputTraits;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithDefaultSize;

@end

