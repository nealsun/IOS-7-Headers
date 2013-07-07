/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "EKReminderLocationPickerCellButtonHandler.h"
#import "EKReminderLocationPickerModelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class EKReminderLocationPickerCell, EKReminderLocationPickerModel, UIAlertView;

@interface EKReminderLocationPicker : UITableViewController <ABPeoplePickerNavigationControllerDelegate, EKReminderLocationPickerModelDelegate, UIAlertViewDelegate, UITextFieldDelegate, EKReminderLocationPickerCellButtonHandler>
{
    EKReminderLocationPickerModel *_model;
    id <EKStyleProvider> _styleProvider;
    int _savedStatusBarStyle;
    UIAlertView *_meCardAlert;
    EKReminderLocationPickerCell *_currentLocationCell;
    EKReminderLocationPickerCell *_typedLocationCell;
    BOOL _hasEditedText;
    BOOL _isShowingPeopleAddressPicker;
    BOOL _allowsShowInMap;
    BOOL _isEditingContactAddress;
    BOOL _ignoreNextSelectionChange;
    id <EKReminderLocationPickerDelegate> _locationPickerDelegate;
}

@property(nonatomic) __weak id <EKReminderLocationPickerDelegate> locationPickerDelegate; // @synthesize locationPickerDelegate=_locationPickerDelegate;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldClearButtonPressed:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_typedLocationCellTextDidChange;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_presentPersonPicker;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 withLinkedPeople:(struct __CFArray *)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)_dismissPeoplePicker;
- (void)_setLocationFromRecord:(void *)arg1 multiValueIdentifier:(int)arg2;
- (void)failureButtonPressed;
- (void)contactsButtonPressed;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModelDidUpdateCustomLocation:(id)arg1;
- (void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(int)arg2;
- (void)locationPickerModelDidUpdateCurrentLocation:(id)arg1;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModelDidEndOperation:(id)arg1;
- (void)locationPickerModelDidBeginOperation:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_prepareCurrentLocationCell;
- (id)_prepareTypedLocationCell;
- (int)_accessoryTypeForLocationItem:(id)arg1 isSelected:(BOOL)arg2;
- (void)_styleCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_indexPathForSelectedItem;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)marginForTableView:(id)arg1;
- (void)_updateAccessoryViewForTypedLocation;
- (void)_reloadCustomLocationRow;
- (BOOL)_shouldShowTypedLocation;
- (BOOL)_isCustomLocationRow:(id)arg1;
- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_showPickMeCardAlertIfNecessary;
- (void)_removeExistingMeCardAlert;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 styleProvider:(id)arg2;

@end

