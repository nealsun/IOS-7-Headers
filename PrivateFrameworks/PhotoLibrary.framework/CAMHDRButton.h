/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class UIImage;

@interface CAMHDRButton : UIButton
{
    UIImage *__baseImage;
}

@property(readonly, nonatomic) UIImage *_baseImage; // @synthesize _baseImage=__baseImage;
- (id)_HDRImageForOnState:(BOOL)arg1;
@property(nonatomic, getter=isOn) BOOL on;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

