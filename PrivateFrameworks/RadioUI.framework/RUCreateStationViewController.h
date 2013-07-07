/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RUGenreListViewControllerDelegate.h"
#import "RUSearchViewControllerDelegate.h"

@class RUGenreListViewController, RUSearchViewController, SKUICircleProgressIndicator, UILabel, UISearchDisplayController;

@interface RUCreateStationViewController : UIViewController <RUGenreListViewControllerDelegate, RUSearchViewControllerDelegate>
{
    SKUICircleProgressIndicator *_activityIndicator;
    BOOL _didLoadGenres;
    RUGenreListViewController *_genreListViewController;
    UILabel *_loadingLabel;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    BOOL _shouldScrollSearchBar;
    id <RUCreateStationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RUCreateStationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewForDataSourceInvalidation;
- (void)_updateSearchBarFrameForced:(BOOL)arg1;
- (id)_searchDisplayController;
- (void)_addStationWithDictionary:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)removeAddingIndicator;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (void)genreListViewController:(id)arg1 tableViewDidScroll:(id)arg2;
- (void)genreListViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)genreListViewControllerGenresDidBecomeAvailable:(id)arg1;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

