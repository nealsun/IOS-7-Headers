/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "XPCProxyTarget.h"
#import "_UIHostedTextServiceSessionDelegate.h"
#import "_UIViewServiceDeputy.h"
#import "_UIViewServiceDeputyRotationSource.h"
#import "_UIViewServiceDummyPopoverControllerDelegate.h"
#import "_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h"

@class NSMutableArray, UIActionSheet, UIPopoverController, _UIAsyncInvocation, _UIHostedTextServiceSession, _UIHostedWindow, _UIViewServiceDummyPopoverController;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerOperator : UIViewController <XPCProxyTarget, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource>
{
    int _hostPID;
    CDStruct_4c969caf _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    UIViewController *_localViewController;
    _UIHostedWindow *_hostedWindow;
    BOOL _isResigningFirstResponderFromHostNotification;
    UIActionSheet *_hostedActionSheet;
    BOOL _serviceInPopover;
    int _hostStatusBarOrientation;
    float _hostStatusBarHeight;
    NSMutableArray *_deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    id <_UIViewServiceDeputyDelegate> _deputyDelegate;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned int _supportedOrientations;
    BOOL _canShowTextServices;
    id <_UIViewServiceViewControllerOperatorDelegate> _delegate;
}

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostAuditToken:(CDStruct_4c969caf)arg3;
@property(nonatomic) id <_UIViewServiceViewControllerOperatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(id)arg3;
- (BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_sessionForStateRestoration:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)__textServiceDidDismiss;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (BOOL)_canShowTextServices;
- (id)_inputViewsKey;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)__hostDidPromoteFirstResponder;
- (void)__setContentSize:(id)arg1;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 hostAccessibilityServerPort:(id)arg3 canShowTextServices:(BOOL)arg4 replyHandler:(id)arg5;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostDidChangeStatusBarHeight:(float)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
- (void)__hostWillEnterForeground;
- (void)__hostDidEnterBackground;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 contextReplyPort:(id)arg2;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 statusBarHeight:(float)arg3 completionHandler:(id)arg4;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)setDeputyDelegate:(id)arg1;
- (id)invalidate;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize)arg2 animated:(BOOL)arg3;
- (struct CGSize)contentSizeForViewInPopover;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)__dimmingViewWasTapped;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
- (void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned int)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(BOOL)arg8;
- (void)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3;
- (void)_firstResponderDidChange:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2;
- (id)_appearanceSource;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidRegisterScrollToTopView;
- (void)__scrollToTopFromTouchAtViewLocation:(id)arg1 resultHandler:(id)arg2;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (void)addDeputyRotationDelegate:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_isHostedRootViewController;
- (void)viewDidLoad;
- (void)loadView;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)_queue;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

