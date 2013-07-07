/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

@class UIBarButtonItem;

@interface ABPickerViewController : UITableViewController
{
    void *_context;
    id _defaultValue;
    SEL _selectionAction;
    id <ABPickerViewControllerDelegate> _delegate;
    id <ABPickerViewControllerDismissDelegate> _dismissDelegate;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) SEL selectionAction; // @synthesize selectionAction=_selectionAction;
@property(nonatomic) id <ABPickerViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) id <ABPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) void *context; // @synthesize context=_context;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
- (void)viewDidLoad;
- (float)ab_heightToFitForViewInPopoverView;
- (void)cancelButtonClicked:(id)arg1;
- (void)attemptDismissAfterSelectingItem:(id)arg1;
@property(readonly, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
- (void)dealloc;

@end

