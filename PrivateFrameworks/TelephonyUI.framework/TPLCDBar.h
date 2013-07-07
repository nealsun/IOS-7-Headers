/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage, UIImageView;

@interface TPLCDBar : UIView
{
    UIImage *_barBackground;
    UIImageView *_shadowView;
}

+ (id)backgroundImage;
+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)defaultHeight;
@property(readonly) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImage *barBackground; // @synthesize barBackground=_barBackground;
- (struct CGRect)contentStretchRect;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(int)arg1;

@end

