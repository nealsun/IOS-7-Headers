/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class DDAction, UIPopoverController, UIView, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface DDActionController : NSObject <UIAlertViewDelegate, UIPopoverControllerDelegate>
{
    UIViewController *_presentedViewController;
    UIPopoverController *_currentPopoverController;
    UIView *_baseView;
    UIViewController *_currentBaseViewController;
    DDAction *_currentAction;
    id _interactionDelegate;
    UIWindow *_originalWindow;
}

@property(retain) DDAction *currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_currentPopoverController;
@property(retain, nonatomic) id interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)actionDidFinish;
- (void)failedToPrepareViewControllerForAction:(id)arg1;
- (void)action:(id)arg1 viewControllerReady:(id)arg2;
- (void)performAction:(id)arg1;
- (void)_dismissCurrentViewControllerOurselves;
- (void)_presentCurrentViewControllerOurselves;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissCurrentController;
- (void)_presentController:(id)arg1;
- (id)defaultActionForURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult *)arg2 enclosingResult:(struct __DDResult *)arg3 context:(id)arg4;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

