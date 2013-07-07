/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ACUIDataclassConfigurationViewController.h"

#import "UIModalViewDelegate.h"

@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController <UIModalViewDelegate>
{
    DAAccount *_daAccount;
    BOOL _haveRegisteredForAccountsChanged;
}

@property(retain, nonatomic) DAAccount *daAccount; // @synthesize daAccount=_daAccount;
- (void)cancelButtonClicked:(id)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (BOOL)shouldVerifyBeforeAccountSave;
- (Class)accountInfoControllerClass;
- (id)otherSpecifiers;
- (id)specifiers;
- (void)_accountsChanged:(id)arg1;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_listenForAccountsChangedNotifications;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)_navTitle;
- (id)accountDescriptionForFirstTimeSetup;
- (void)dealloc;

@end

