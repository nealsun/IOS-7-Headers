/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIWebRotatingAccessoryPopover.h>

#import "UIWebFormControl.h"

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebRotatingAccessoryPopover <UIWebFormControl>
{
    UIWebDateTimePopoverViewController *_webDateTimeViewController;
}

@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController; // @synthesize _webDateTimeViewController;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(int)arg2;
- (void)clear:(id)arg1;

@end

