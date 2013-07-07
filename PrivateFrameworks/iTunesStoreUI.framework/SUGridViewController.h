/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SUGridViewDataSource.h"
#import "SUGridViewDelegate.h"

@class SUGridView, SUTableDataSource;

@interface SUGridViewController : SUViewController <SUGridViewDataSource, SUGridViewDelegate>
{
    SUTableDataSource *_dataSource;
    int _disappearOrientation;
    float _tableMargin;
    int _tableViewStyle;
}

@property(nonatomic) float tableMargin; // @synthesize tableMargin=_tableMargin;
@property(retain, nonatomic) SUTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)_existingGridView;
- (int)numberOfSectionsInGridView:(id)arg1;
- (float)marginForGridView:(id)arg1;
- (void)gridView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)gridView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)gridView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)gridView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)gridView:(id)arg1 numberOfColumnsInSection:(int)arg2;
- (float)gridView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;
- (int)gridView:(id)arg1 editingStyleForCellAtIndexPath:(id)arg2;
- (void)gridView:(id)arg1 commitEditingStyle:(int)arg2 forCellAtIndexPath:(id)arg3;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
@property(readonly, nonatomic) SUGridView *gridView;
- (BOOL)deleteCellAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithTableViewStyle:(int)arg1;

@end

