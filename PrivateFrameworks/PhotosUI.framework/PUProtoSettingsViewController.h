/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

@class NSArray;

@interface PUProtoSettingsViewController : UITableViewController
{
    NSArray *_settingsBySection;
    NSArray *_sectionNames;
}

@property(readonly, nonatomic) NSArray *sectionNames; // @synthesize sectionNames=_sectionNames;
@property(readonly, nonatomic) NSArray *settingsBySection; // @synthesize settingsBySection=_settingsBySection;
- (void).cxx_destruct;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleResetButton:(id)arg1;
- (void)_handleToggleSwitch:(id)arg1;
- (void)_settingsDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)_indexPathForTag:(int)arg1;
- (int)_tagForIndexPath:(id)arg1;
- (id)_settingAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithSettingsBySection:(id)arg1 sectionNames:(id)arg2;

@end

