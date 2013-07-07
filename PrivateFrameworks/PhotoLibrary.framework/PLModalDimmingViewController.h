/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class UIImageView, UIView, UIViewController<PLModalDimmingContained>;

@interface PLModalDimmingViewController : UIViewController
{
    UIImageView *_vignetteView;
    UIViewController<PLModalDimmingContained> *_contentViewController;
    UIView *_wrapperView;
}

@property(retain, nonatomic) UIViewController<PLModalDimmingContained> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_updateVignetteToOrientation:(int)arg1;
- (void)dismissWithCustomAnimation:(int)arg1 completionHandler:(id)arg2;
- (void)presentWithCustomAnimation;
- (void)presentModalOnViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_updateWrapperView:(id)arg1 toOrientation:(int)arg2 forViewController:(id)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithContentViewController:(id)arg1;

@end

