/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLComposeRecipientViewControllerDelegate.h"
#import "PLTexturedCardViewContained.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, PLCloudSharedAlbum, PLComposeRecipientViewController, UILabel, UINavigationItem, UISwitch, UITableView, UITextField;

@interface PLCloudSharedCreateAlbumViewController : UIViewController <PLComposeRecipientViewControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, PLTexturedCardViewContained>
{
    PLCloudSharedAlbum *_album;
    NSString *_albumName;
    id <PLCloudSharedCreateAlbumViewControllerDelegate> _delegate;
    PLComposeRecipientViewController *_composeRecipientController;
    UITableView *_optionsTableView;
    UITextField *_albumNameTextField;
    UILabel *_albumNamePlaceholder;
    UISwitch *_wantsPublicWebsiteSwitch;
    BOOL _changingValueFromControl;
    BOOL _adjustedInsetsForKeyboard;
    BOOL _wantsPublicWebsite;
    UINavigationItem *_navItem;
    NSArray *_albumRecipients;
    BOOL _inMultiStepActivity;
}

@property(retain, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
@property(nonatomic) BOOL inMultiStepActivity; // @synthesize inMultiStepActivity=_inMultiStepActivity;
@property(retain, nonatomic) NSArray *albumRecipients; // @synthesize albumRecipients=_albumRecipients;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) BOOL wantsPublicWebsite; // @synthesize wantsPublicWebsite=_wantsPublicWebsite;
@property(nonatomic) id <PLCloudSharedCreateAlbumViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)composeRecipientViewControllerRecipientContainerViewDidResize:(id)arg1 fromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3;
- (void)composeRecipientViewControllerReturnKeyPressed:(id)arg1;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)_validateRecipientsToAdd:(id)arg1;
- (void)_saveUserEnterredInfo;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_changeAlbumName:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_handleCompletionWithSuccess:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(readonly, nonatomic) UINavigationItem *texturedCardNavigationItem;
- (void)loadView;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateAlbumNameField;
- (void)_updateNavButtons;
- (void)_updateAllControls;
- (void)dealloc;
- (id)init;

@end

