/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class UIImageView;

@interface SKUISlideshowDismissalAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIImageView *_imageView;
    struct CGRect _imageRect;
}

@property(nonatomic) struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)animationEnded:(BOOL)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

