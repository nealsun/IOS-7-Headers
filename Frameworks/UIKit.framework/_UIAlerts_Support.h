/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIAlerts_Support : NSObject
{
}

+ (id)dimmingView;
+ (void)hideAlertWindow;
+ (void)showAlertWindow;
+ (id *)destroyPressedImage;
+ (id *)destroyButtonImage;
+ (id *)pressedButtonImage;
+ (id *)cancelButtonImage;
+ (id *)buttonImage;
+ (struct CGAffineTransform)currentAlertWindowTransform;
+ (void)applyAlertWindowTransform:(struct CGAffineTransform)arg1;
+ (id)keyboardIfPresent;
+ (void)setAlertWindow:(id)arg1;
+ (id)alertWindow;
+ (void)setVisibleAlert:(id)arg1;
+ (id)visibleAlert;
+ (id)alertSheetStack;
+ (struct CGRect)sheetButtonContentStretch;
+ (struct CGRect)popupButtonContentStretch;
+ (struct CGRect)compactButtonContentStretch;
+ (struct CGRect)buttonContentStretch;

@end

