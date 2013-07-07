/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

#import "MCActionSupport.h"
#import "MCAnimationPathSupport.h"

@class MCContainer, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport>
{
    unsigned long mFlags;
    NSMutableSet *mAnimationPaths;
    NSMutableDictionary *mActions;
    MCContainer *mContainer;
    double mPhaseInDuration;
    double mLoopDuration;
    double mPhaseOutDuration;
    double mNumberOfLoops;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops=mNumberOfLoops;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration=mPhaseOutDuration;
@property(nonatomic) double loopDuration; // @synthesize loopDuration=mLoopDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration=mPhaseInDuration;
- (void)setAnimationPath:(id)arg1 forKey:(id)arg2;
- (void)_copySelfToSnapshot:(id)arg1;
@property(nonatomic) BOOL preactivatesWithParent;
@property(nonatomic) BOOL startsPaused;
@property(readonly, nonatomic) double fullDuration;
@property(retain) MCContainer *container; // @synthesize container=mContainer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)arg1;
- (void)addAnimationPath:(id)arg1;
- (id)animationPathForKey:(id)arg1;
@property(readonly) unsigned int countOfAnimationPaths;
@property(readonly) NSSet *animationPaths;
- (id)imprintsForAnimationPaths;
- (void)demolishAnimationPaths;
- (void)initAnimationPathsWithImprints:(id)arg1;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (void)setAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
@property(readonly, nonatomic) unsigned int countOfActions;
@property(readonly) NSDictionary *actions;
- (id)imprintsForActions;
- (void)demolishActions;
- (void)initActionsWithImprints:(id)arg1;

@end

