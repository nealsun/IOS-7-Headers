/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIAlertView.h"

@class NSObject<OS_dispatch_semaphore>;

@interface AAUIAlertView : UIAlertView
{
    NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;
    int _chosenButtonIndex;
    id _action;
    id _actionWithText;
}

- (void).cxx_destruct;
- (int)chosenButtonIndex;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(id)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

@end

