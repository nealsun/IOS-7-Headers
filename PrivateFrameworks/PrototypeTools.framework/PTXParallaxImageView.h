/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PrototypeTools/PTXParallaxView.h>

@class UIImage, UIImageView;

@interface PTXParallaxImageView : PTXParallaxView
{
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3;

@end

