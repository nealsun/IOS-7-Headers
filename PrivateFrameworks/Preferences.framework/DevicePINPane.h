/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/PSEditingPane.h>

#import "UIKeyInput.h"

@class UIKeyboard, UITransitionView, UIView<PINEntryView>;

@interface DevicePINPane : PSEditingPane <UIKeyInput>
{
    UITransitionView *_transitionView;
    BOOL _transitioning;
    UIView<PINEntryView> *_pinView;
    struct CGRect _pinViewFrame;
    UIKeyboard *_keypad;
    struct CGRect _keypadFrame;
    BOOL _keypadActive;
    int _autocapitalizationType;
    int _autocorrectionType;
    int _keyboardType;
    int _keyboardAppearance;
    BOOL _playSound;
    BOOL _isBlocked;
    BOOL _simplePIN;
}

@property(nonatomic) int keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) int autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
- (void)layoutSubviews;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
- (void)adjustButtonsNow;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (void)setText:(id)arg1;
- (id)text;
- (void)clearPassword;
- (id)password;
- (void)transitionViewDidComplete:(id)arg1;
- (void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (void)hideError;
- (void)okButtonPressed;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(BOOL)arg3 animate:(BOOL)arg4;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)dismissKeypad;
- (void)_setKeypadState:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)requiresKeyboard;
- (BOOL)simplePIN;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(int)arg1;
- (void)deactivateKeypadView;
- (void)activateKeypadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setPlaysKeyboardClicks:(BOOL)arg1;
- (id)specifierLabel;

// Remaining properties
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) int returnKeyType;
@property(nonatomic) int spellCheckingType;

@end

