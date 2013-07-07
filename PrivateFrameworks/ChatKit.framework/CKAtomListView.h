/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "MFModernLabelledAtomListDelegate.h"

@class MFModernLabelledAtomList, NSArray, UIButton, UILabel;

@interface CKAtomListView : UIView <MFModernLabelledAtomListDelegate>
{
    NSArray *_addresses;
    NSArray *_arePhoneNumbers;
    MFModernLabelledAtomList *_atomList;
    UILabel *_recipientListLabel;
    UIButton *_detailsButton;
    UIButton *_hideDetailsButton;
    id _delegate;
    unsigned int _expanded:1;
    unsigned int _presentationOptions;
}

- (void)displayStringsDidChangeForLabelledAtomList:(id)arg1;
- (struct CGSize)contentSize;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)isExpanded;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)_buttonTouchUpEvent:(id)arg1;
- (id)_newButtonWithTitle:(id)arg1;
- (void)_updateHeight;
- (void)_updateAlphasAnimating:(BOOL)arg1;
- (void)_updateInactiveModeText;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 totalWidth:(float)arg2 addresses:(id)arg3 arePhoneNumbers:(id)arg4 presentationOptions:(unsigned int)arg5;

@end

