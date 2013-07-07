/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABDatePickerViewControllerDismissDelegate.h"
#import "ABMultiCellContentViewUpdateDelegate.h"
#import "ABPersonTableHeaderViewDelegate.h"

@class ABPersonPickersDelegate, ABPersonTableViewDataSource, ABStyleProvider, UIDatePicker;

@interface ABPersonTableViewMultiCellDelegate : NSObject <ABMultiCellContentViewUpdateDelegate, ABPersonTableHeaderViewDelegate, ABDatePickerViewControllerDismissDelegate>
{
    UIDatePicker *_datePicker;
    ABPersonTableViewDataSource *_dataSource;
    ABStyleProvider *_styleProvider;
    ABPersonPickersDelegate *_pickersDelegate;
}

@property(nonatomic) ABPersonPickersDelegate *pickersDelegate; // @synthesize pickersDelegate=_pickersDelegate;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)personTableHeaderView:(id)arg1 imageViewWasSelected:(id)arg2;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (BOOL)_tableView:(id)arg1 isValidIndexPath:(id)arg2;
- (void)datePickerViewControllerWillDisappear:(id)arg1;
- (void)dateField:(id)arg1 delegateDismissDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePrepareToPresentDatePicker:(id)arg2;
- (BOOL)dateField:(id)arg1 shouldPresentDatePicker:(id)arg2;
- (id)datePickerForDateField:(id)arg1;
- (id)_capitalizedTitleForContentView:(id)arg1;
- (void)_multiCellContentView:(id)arg1 selectedAlert:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedService:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedCountry:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedLabel:(id)arg2;
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
- (void)multiCellContentView:(id)arg1 didResizeAnimated:(BOOL)arg2;
- (void)multiCellContentView:(id)arg1 willResizeAnimated:(BOOL)arg2;
- (void)multiCellContentViewDidEndEditing:(id)arg1;
- (void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2 forKey:(id)arg3;
- (void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
- (void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
- (BOOL)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
- (void)dealloc;

@end

