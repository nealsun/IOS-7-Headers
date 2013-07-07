/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RUSignInViewControllerDelegate.h"
#import "RUTermsViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CADisplayLink, RUSignInViewController, RUTermsViewController, SKUICircleProgressIndicator, UIButton, UICollectionView, UILabel;

@interface RUWelcomeViewController : UIViewController <RUSignInViewControllerDelegate, RUTermsViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicatorView;
    CADisplayLink *_displayLink;
    BOOL _isVisible;
    double _lastTimestamp;
    UILabel *_loadingLabel;
    UICollectionView *_scrollingStackCollectionView;
    UIButton *_signInButton;
    RUSignInViewController *_signInViewController;
    RUTermsViewController *_termsViewController;
    BOOL _displayingLoading;
    id <RUWelcomeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RUWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_isDisplayingLoading, setter=_setDisplayingLoading:) BOOL _displayingLoading; // @synthesize _displayingLoading;
- (void).cxx_destruct;
- (void)_updateSignInButtonTitle;
- (id)_stackImageNames;
- (void)_presentSignInViewController;
- (void)_optInWithActiveAccountWithCompletionHandler:(id)arg1;
- (void)_completeWithStatus:(int)arg1 didOptIn:(BOOL)arg2;
- (void)_checkAcceptedTermsWithCompletionHandler:(id)arg1;
- (void)_attemptOptInAndAllowAuthentication:(BOOL)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_signInAction:(id)arg1;
- (void)_learnMoreAction:(id)arg1;
- (void)_displayLinkAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

