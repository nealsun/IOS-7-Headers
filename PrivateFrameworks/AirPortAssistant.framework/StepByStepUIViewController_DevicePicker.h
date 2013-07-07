/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

#import "TableViewManagerDelegate.h"

@class NSArray, NSDictionary, NSString, RecommendationActionController, UIPopoverController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate>
{
    NSDictionary *_selectedDevice;
    NSDictionary *_sourceNetwork;
    NSDictionary *_sourceBase;
    NSDictionary *_targetBase;
    UIPopoverController *_popover;
    NSArray *sortedDevices;
    NSString *connectionMedium;
    RecommendationActionController *actionController;
    BOOL _showSingleBaseTopo;
    BOOL showFullList;
}

@property(retain, nonatomic) RecommendationActionController *actionController; // @synthesize actionController;
@property(nonatomic) NSString *connectionMedium; // @synthesize connectionMedium;
@property(retain, nonatomic) NSArray *sortedDevices; // @synthesize sortedDevices;
- (id)pickerContent;
- (BOOL)showMoreOptions;
- (void)updateSelections;
- (void)setupPickerTable;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned int)arg2 inCellWithTag:(int)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

