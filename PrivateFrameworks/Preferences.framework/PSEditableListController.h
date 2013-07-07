/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/PSListController.h>

@interface PSEditableListController : PSListController
{
    BOOL _editable;
    BOOL _editingDisabled;
}

- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)didLock;
- (void)suspend;
- (BOOL)performDeletionActionForSpecifier:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setEditable:(BOOL)arg1;
- (void)_setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)editable;
- (void)editDoneTapped;
- (void)pushController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setEditButtonEnabled:(BOOL)arg1;
- (void)setEditingButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateNavigationBar;
- (id)_editButtonBarItem;
- (id)init;

@end

