/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, UIViewController;

@interface CKPopoverManager : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    id _presenter;
    id _handler;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;
@property(copy, nonatomic) id presenter; // @synthesize presenter=_presenter;
- (void)replaceCurrentControllerWithController:(id)arg1;
- (BOOL)isShowingPopover;
- (void)representCurrentPopover;
@property(readonly, nonatomic) UIViewController *currentContentController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)didFinishRotating;
- (void)dismissCurrentPopoverAnimated:(BOOL)arg1;
- (void)showPopoverWithContentViewController:(id)arg1 withPresenter:(id)arg2 withHandler:(void)arg3;
- (void)dealloc;

@end

