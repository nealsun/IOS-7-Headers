/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UINavigationController.h"

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController
{
    UIBarButtonItem *_dismissButton;
}

@property(retain, nonatomic) UIBarButtonItem *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)_defaultDismissButton;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithRootModuleController:(id)arg1;
- (id)initWithRootSettings:(id)arg1;

@end

