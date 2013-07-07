/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IUSearchResultListViewControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"

@class IUSearchDataSource, IUSearchResultListViewController, IUTableViewController, NSString, UISearchBar, UISearchDisplayController, UITableView;

@interface IUSearchHelper : NSObject <UISearchBarDelegate, UISearchDisplayDelegate, IUSearchResultListViewControllerDelegate>
{
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    UITableView *_searchResultsTableView;
    id <IUSearchHelperDelegate> _delegate;
    IUSearchDataSource *_searchDataSource;
    IUSearchResultListViewController *_searchResultListViewController;
    IUTableViewController *_tableViewController;
    BOOL _searchBarHidesAlone;
    BOOL _searchBarHiddenOrHiding;
    BOOL _searchBarHidden;
}

@property(nonatomic, getter=isSearchBarHidden) BOOL searchBarHidden; // @synthesize searchBarHidden=_searchBarHidden;
@property(readonly, nonatomic) IUSearchResultListViewController *searchResultListViewController; // @synthesize searchResultListViewController=_searchResultListViewController;
@property(readonly, nonatomic) UISearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(nonatomic) BOOL searchBarHidesAlone; // @synthesize searchBarHidesAlone=_searchBarHidesAlone;
@property(nonatomic) __weak id <IUSearchHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_searchDataSourceNoResultsChangedNotification:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchResultListViewController:(id)arg1 didSelectContext:(id)arg2;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)setSearchBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) float heightForTableHeaderViewHiding;
@property(copy, nonatomic) NSString *searchString;
- (void)dealloc;
- (id)initWithTableViewController:(id)arg1;

@end

