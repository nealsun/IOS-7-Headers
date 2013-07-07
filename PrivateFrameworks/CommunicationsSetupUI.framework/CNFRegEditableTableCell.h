/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PSEditableTableCell.h"

@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell
{
    SEL _emptyStateSelector;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    id _textChangeObserver;
    BOOL _textFieldIsEmpty;
    BOOL _skipDelegateCallback;
    UIImage *_shadowImage;
    CNFRegShadowView *_shadowView;
    UIImage *_customCheckmarkImage;
    UIImage *_customCheckmarkImageSelected;
}

@property(retain, nonatomic) UIImage *customCheckmarkImageSelected; // @synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected;
@property(retain, nonatomic) UIImage *customCheckmarkImage; // @synthesize customCheckmarkImage=_customCheckmarkImage;
@property(retain, nonatomic) CNFRegShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) BOOL skipDelegateCallback; // @synthesize skipDelegateCallback=_skipDelegateCallback;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)notifyTextFieldDidEndEditing;
- (void)notifyTextFieldDidBeginEditing;
- (void)_stopListeningForTextChanges;
- (void)_startListeningForTextChanges;
- (void)_handleTextChanged;
- (BOOL)_textFieldIsCurrentlyEmpty;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (void)textFieldChangedExternally;
- (void)setTitle:(id)arg1;
- (void)notifyTextFieldEmptyStateChanged:(BOOL)arg1;
- (void)_updateTextFieldOffsetWithDict:(id)arg1;

@end

