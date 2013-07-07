/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface SULockoutView : UIView
{
    UIImageView *_backgroundImageView;
    UILabel *_bodyLabel;
    UIImageView *_glowImageView;
    UIImageView *_imageView;
    int _layoutPreset;
    UILabel *_titleLabel;
}

@property(nonatomic) int layoutPreset; // @synthesize layoutPreset=_layoutPreset;
- (id)_titleLabel;
- (id)_newLabel;
- (id)_imageView;
- (id)_bodyLabel;
- (void)_layoutForSlowNetwork;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIImage *glowImage;
@property(copy, nonatomic) NSString *body;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)dealloc;

@end

