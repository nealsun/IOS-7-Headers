/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class MPAudioVideoRoutingTableViewController, UINavigationController;

@interface MPAudioVideoRoutingViewController : UIViewController
{
    UINavigationController *_navigationController;
    MPAudioVideoRoutingTableViewController *_tableViewController;
    id <MPAudioVideoRoutingViewControllerDelegate> _delegate;
}

+ (BOOL)hasWirelessDisplayRoutes;
@property(nonatomic) __weak id <MPAudioVideoRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

