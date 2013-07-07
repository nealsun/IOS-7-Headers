/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AddressBookUI/ABPersonCellContentView.h>

#import "ABResponderDelegate.h"

@class ABAbstractPropertyGroup, UITableViewCell, UIView;

@interface ABMultiCellContentView : ABPersonCellContentView <ABResponderDelegate>
{
    UITableViewCell *_cell;
    BOOL _usesCustomPropertyCell;
    UIView *_labelDivider;
    BOOL _isImportant;
    BOOL _isEmphasized;
    BOOL _isHighlighted;
    BOOL _allowsEditing;
    BOOL _isEditing;
    BOOL _shouldIgnoreEndEditing;
    int _property;
    ABAbstractPropertyGroup *_pg;
    id _pgInfo;
    BOOL _needsReload;
    UIView *_touchedView;
    id <ABMultiCellContentViewUpdateDelegate> _updateDelegate;
    int _abCellStyle;
}

+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (void)setupTextField:(id)arg1 withStyleProvider:(id)arg2;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;
+ (id)reuseIdentifierForPropertyGroup:(id)arg1 info:(id)arg2;
+ (Class)classForProperty:(int)arg1;
@property(nonatomic) BOOL shouldIgnoreEndEditing; // @synthesize shouldIgnoreEndEditing=_shouldIgnoreEndEditing;
@property(nonatomic) BOOL usesCustomPropertyCell; // @synthesize usesCustomPropertyCell=_usesCustomPropertyCell;
@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) int abCellStyle; // @synthesize abCellStyle=_abCellStyle;
@property(nonatomic) id <ABMultiCellContentViewUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic, getter=isEmphasized) BOOL emphasized; // @synthesize emphasized=_isEmphasized;
@property(nonatomic, getter=isImportant) BOOL important; // @synthesize important=_isImportant;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
@property(retain, nonatomic) id propertyGroupInfo; // @synthesize propertyGroupInfo=_pgInfo;
@property(readonly, nonatomic) ABAbstractPropertyGroup *propertyGroup; // @synthesize propertyGroup=_pg;
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)viewForFirstResponder;
- (BOOL)canBeginEditingAnytime;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)entryFieldShouldReturn:(id)arg1;
- (void)entryField:(id)arg1 didEndEditingForKey:(id)arg2;
- (void)entryField:(id)arg1 valueDidChange:(id)arg2 forKey:(id)arg3;
- (void)entryFieldDidBeginEditing:(id)arg1;
- (BOOL)entryFieldShouldEndEditing:(id)arg1;
- (BOOL)entryFieldShouldBeginEditing:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (BOOL)wantsLabelDivider;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (struct CGRect)focusRectForView:(id)arg1;
- (struct CGRect)backgroundRectForView:(id)arg1;
- (struct CGRect)rectForView:(id)arg1;
- (id)pickerView;
- (void)reloadIfNeeded:(BOOL)arg1 reloadFromModel:(BOOL)arg2;
- (void)reload;
- (void)reloadFromModel;
- (void)reloadLabelFromModel;
- (BOOL)canHandleProperty:(int)arg1;
- (id)initCommonWithFrame:(struct CGRect)arg1 property:(int)arg2;
- (void)layoutLabel;
- (id)displayHighlightedTextColor;
- (id)displayTextColor;
- (id)badgeIconWhenEditing:(BOOL)arg1;
- (id)labelTextColorWhenEditing:(BOOL)arg1;
- (struct CGRect)frameForLabelDivider;
- (void)setKeyboardSettings:(id)arg1 onTextField:(id)arg2;
- (id)newTextFieldWithFrame:(struct CGRect)arg1 tag:(int)arg2 keyboardSettings:(id)arg3 delegate:(id)arg4;
- (void)clearTextFieldDelegates:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPropertyGroup:(id)arg2 info:(id)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 property:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

