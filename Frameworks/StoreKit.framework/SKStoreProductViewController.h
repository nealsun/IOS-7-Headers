/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSDictionary, NSString, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, SKRemoteProductViewController, _UIAsyncInvocation;

@interface SKStoreProductViewController : UIViewController
{
    NSString *_affiliateIdentifier;
    BOOL _automaticallyDismisses;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    id <SKStoreProductViewControllerDelegatePrivate> _delegate;
    id _loadBlock;
    int _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
    BOOL _showsStoreButton;
}

+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(id)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id)arg3;
@property(nonatomic) BOOL showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
@property(copy, nonatomic) NSDictionary *scriptContextDictionary; // @synthesize scriptContextDictionary=_scriptContextDictionary;
@property(nonatomic) int productPageStyle; // @synthesize productPageStyle=_productPageStyle;
@property(nonatomic) id <SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) BOOL automaticallyDismisses; // @synthesize automaticallyDismisses=_automaticallyDismisses;
@property(copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
- (void)_throwUnsupportedPresentationException;
- (void)_requestRemoteViewController;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_didFinishWithResult:(int)arg1;
- (void)_didFinish;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id)arg2;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(id)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

