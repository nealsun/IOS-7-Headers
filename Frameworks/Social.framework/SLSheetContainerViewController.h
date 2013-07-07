/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSMutableArray, SLComposeServiceViewController, UIView;

@interface SLSheetContainerViewController : UIViewController
{
    SLComposeServiceViewController *_sheetViewController;
    NSMutableArray *_constraints;
    float _topOffset;
    float _sheetHeight;
    UIView *_keyboardTrackingView;
    struct CGSize _keyboardSize;
    int _currentOrientation;
}

- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)addImage:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

