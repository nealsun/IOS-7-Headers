/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation
{
}

- (double)_timeFunction:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
@property(retain) id byValue;
@property(retain) id toValue;
@property(retain) id fromValue;
- (void)CA_prepareRenderValue;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
@property float endAngle;
@property float startAngle;
@property BOOL roundsToInteger;

@end

