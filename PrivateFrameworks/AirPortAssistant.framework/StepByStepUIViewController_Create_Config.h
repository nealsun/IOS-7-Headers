/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

#import "TableViewManagerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate>
{
    NSString *_wifiName;
    NSString *_personalizedBaseName;
    NSString *_basePassword;
    NSString *_basePasswordVerify;
    NSString *_wifiPassword;
    NSString *_wifiPasswordVerify;
    NSString *_diskPassword;
    NSString *_diskPasswordVerify;
    BOOL useSinglePassword;
    BOOL hasDisk;
    BOOL useDifferentDiskPassword;
    RecommendationActionController *actionController;
}

@property(retain, nonatomic) RecommendationActionController *actionController; // @synthesize actionController;
@property(nonatomic) BOOL useDifferentDiskPassword; // @synthesize useDifferentDiskPassword;
@property(nonatomic) BOOL hasDisk; // @synthesize hasDisk;
@property(copy, nonatomic) NSString *diskPasswordVerify; // @synthesize diskPasswordVerify=_diskPasswordVerify;
@property(copy, nonatomic) NSString *diskPassword; // @synthesize diskPassword=_diskPassword;
@property(copy, nonatomic) NSString *wifiPasswordVerify; // @synthesize wifiPasswordVerify=_wifiPasswordVerify;
@property(copy, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword=_wifiPassword;
@property(copy, nonatomic) NSString *basePasswordVerify; // @synthesize basePasswordVerify=_basePasswordVerify;
@property(copy, nonatomic) NSString *basePassword; // @synthesize basePassword=_basePassword;
@property(nonatomic) BOOL useSinglePassword; // @synthesize useSinglePassword;
@property(copy, nonatomic) NSString *personalizedBaseName; // @synthesize personalizedBaseName=_personalizedBaseName;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned int)arg2 isOn:(BOOL)arg3;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)updateTableForMultiplePasswords;
- (void)updateTableForSinglePassword;
- (BOOL)validateAndSetValues;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)addDiskPasswordSection;
- (void)updateTable;
- (void)setupTable;
- (void)validateAndUpdateNextButton;
- (void)setupInitialTableHeaderConfiguration;
- (void)updateSinglePasswordSwitchExplanation:(BOOL)arg1;

@end

