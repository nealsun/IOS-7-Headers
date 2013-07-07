/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUGridViewController.h>

#import "SUDownloadsChildViewController.h"

@class NSArray, SUTableDataSource;

@interface SUDownloadsGridViewController : SUGridViewController <SUDownloadsChildViewController>
{
}

- (void)_reloadColumnCountForOrientation:(int)arg1;
- (id)_downloadsViewController;
- (id)visibleDownloadCellForDownload:(id)arg1;
@property(retain, nonatomic) NSArray *scriptButtons;
- (void)reloadDownloadCellForDownload:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
@property(retain, nonatomic) SUTableDataSource *dataSource; // @dynamic dataSource;
- (void)loadView;
- (BOOL)deleteCellAtIndexPath:(id)arg1;
- (id)init;

@end

