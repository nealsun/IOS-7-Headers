/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

#import "EKCellShortener.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EKPickerTableView, NSDate, PreferencesValueCell;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener>
{
    EKPickerTableView *_container;
    PreferencesValueCell *_dateCell;
    NSDate *_preNeverEndDate;
    NSDate *_minimumEndDate;
    int _shorteningStatus;
    unsigned int _updatingPicker:1;
    NSDate *_repeatEndDate;
}

@property(copy, nonatomic) NSDate *repeatEndDate; // @synthesize repeatEndDate=_repeatEndDate;
- (void).cxx_destruct;
- (void)shortenCell:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (BOOL)_showsNeverButton;
- (void)datePickerChanged:(id)arg1;
- (void)setMinimumEndDate:(id)arg1;
- (void)applyMinimumEndDateToPicker;
- (void)updatePicker;
- (id)_endDateStringForCurrentShorteningStatus;
- (id)_stringForEndDate;
- (void)_localeChanged;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end

