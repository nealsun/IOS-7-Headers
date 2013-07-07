/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKitUI/EKEventEditItem.h>

#import "UITextFieldDelegate.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate>
{
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)isInline;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (void)reset;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;

@end

