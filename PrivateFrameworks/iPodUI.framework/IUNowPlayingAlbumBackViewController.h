/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MPViewController.h"

#import "IUBackOfAlbumTableViewControllerDelegate.h"
#import "MPSwipableViewDelegate.h"

@class IUBackOfAlbumDataSource, IUBackOfAlbumTableViewController, IUModalContext, IUNowPlayingAlbumBackView, MPMediaQuery, NSString, UIImage, UITableView;

@interface IUNowPlayingAlbumBackViewController : MPViewController <IUBackOfAlbumTableViewControllerDelegate, MPSwipableViewDelegate>
{
    IUNowPlayingAlbumBackView *_backView;
    id _coverFlowDelegate;
    MPMediaQuery *_customQuery;
    IUBackOfAlbumDataSource *_dataSource;
    unsigned int _skipNextScrollToVisible:1;
    int _style;
    IUBackOfAlbumTableViewController *_tableViewController;
    IUModalContext *_modalContext;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) IUModalContext *modalContext; // @synthesize modalContext=_modalContext;
@property(readonly, nonatomic) IUBackOfAlbumDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MPMediaQuery *customQuery; // @synthesize customQuery=_customQuery;
@property(nonatomic) __weak id coverFlowDelegate; // @synthesize coverFlowDelegate=_coverFlowDelegate;
- (void).cxx_destruct;
- (id)_tableViewController;
- (void)_scrollCurrentRowToVisible;
- (void)_reloadDataFromItemChange:(BOOL)arg1;
- (void)_reloadData;
- (void)_handleSwipeRight;
- (id)_backView;
- (void)_trackWillChangeNotification:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_databaseContentsDidChangeNotification:(id)arg1;
- (void)tableViewController:(id)arg1 didPerformDefaultActionForRow:(int)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) UIImage *artworkImage;
- (void)accessoryButtonTapped:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setItem:(id)arg1;
- (BOOL)_shouldUseQueryRepresentativeTrackForItem;
- (id)aggregateStatisticsDisplayCountKey;
- (void)loadView;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
@property(readonly, nonatomic) UITableView *tableView;
- (void)dealloc;
- (id)init;

@end

