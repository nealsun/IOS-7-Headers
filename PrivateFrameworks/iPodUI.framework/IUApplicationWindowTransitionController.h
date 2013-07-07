/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIApplication, UIViewController, UIWindow;

@interface IUApplicationWindowTransitionController : NSObject
{
    UIApplication *_application;
    id _delegate;
    UIViewController *_viewController;
    UIViewController *_disappearingViewController;
    UIWindow *_window;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_animatePopWithTransition:(int)arg1;
- (void)_popAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)_rootController;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 window:(id)arg2;

@end

