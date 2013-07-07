/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class IUiPodSegmentedViewController, IUiPodViewController, UINavigationController, UIView;

@interface IUWildcatViewController : UIViewController
{
}

@property(readonly, nonatomic) IUiPodViewController *topViewController;
@property(readonly, nonatomic) UINavigationController *topNavigationController;
- (void)pushPlaybackControllerWithContext:(id)arg1;
- (void)popPlaybackControllerAnimated:(BOOL)arg1;
- (BOOL)handleTogglePlaybackEvent;
- (BOOL)handleOpenURLForItem:(id)arg1;
@property(readonly, nonatomic) UIViewController *directChildViewController;
@property(readonly, nonatomic) IUiPodSegmentedViewController *browserSegmentedViewController;
@property(readonly, nonatomic) UIView *backstopView;
- (id)init;

@end

