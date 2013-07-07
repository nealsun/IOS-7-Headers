/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, UITableView;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id _delegate;
    UITableView *_table;
    NSDictionary *_selectedRoute;
    NSArray *_availableRoutes;
}

@property(retain, nonatomic) NSArray *availableRoutes; // @synthesize availableRoutes=_availableRoutes;
@property(nonatomic) id <PLAirTunesServicePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)_indexofRouteWithRouteID:(id)arg1;
- (void)_setCell:(id)arg1 checked:(BOOL)arg2;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2;
- (void)dealloc;

@end

