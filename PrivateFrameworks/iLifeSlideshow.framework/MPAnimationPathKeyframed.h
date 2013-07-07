/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MPAnimationPath.h>

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath
{
    NSMutableSet *_keyframes;
}

+ (id)animationPath;
- (double)relativeTimeForKeyframe:(id)arg1;
- (id)parent;
- (id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned int)arg3 forDuration:(double)arg4;
- (id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 forDuration:(double)arg3;
- (id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned int)arg3;
- (id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2;
- (id)createKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned int)arg3;
- (id)createKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2;
- (id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetType:(unsigned int)arg3;
- (id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2;
- (void)removeAllKeyframes;
- (void)removeKeyframes:(id)arg1;
- (void)removeKeyframe:(id)arg1;
- (void)addKeyframes:(id)arg1;
- (void)addKeyframe:(id)arg1;
- (id)orderedKeyframes;
- (id)keyframes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)fullDebugLog;
- (void)dump;
- (double)parentMainDuration;
- (double)parentPhaseOutDuration;
- (double)parentPhaseInDuration;
- (void)setAnimationPath:(id)arg1;
- (void)cleanup;
- (void)copyKeyframes:(id)arg1;

@end

