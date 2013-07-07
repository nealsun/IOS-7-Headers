/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@interface MPCloudDownloadButton : UIButton
{
    int _cloudButtonStyle;
}

+ (int)_buttonTypeForCloudDownloadButtonStyle:(int)arg1;
+ (struct CGSize)defaultSizeForStyle:(int)arg1;
+ (id)cloudDownloadButtonWithStyle:(int)arg1;
@property(nonatomic) int cloudButtonStyle; // @synthesize cloudButtonStyle=_cloudButtonStyle;
- (void)_touchEndedAction:(id)arg1;
- (void)_touchDownAction:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

