/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "_UIBasicAnimationFactory.h"

@class CADisplayLink, UITextRange;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory>
{
    UITextRange *_range;
    id _placeholder;
    BOOL _didHaveText;
    BOOL _willInsertResult;
    float _angle;
    float _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    id _afterShrinkCompletion;
    BOOL _shrinking;
}

+ (id)activeInstance;
+ (id)sharedInstance;
+ (float)widthForLineHeight:(float)arg1;
+ (float)diameterForLineHeight:(float)arg1;
@property(nonatomic) BOOL willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (float)fadeOutDuration;
- (void)stopLandingForError;
- (void)errorAnimationDidFinish;
- (void)stopLanding;
- (void)startLanding;
- (BOOL)delegateWasEmpty;
- (void)updatePosition;
- (void)drawRect:(struct CGRect)arg1;
- (void)advanceLanding:(id)arg1;
- (void)performShrinkCompletion;
- (void)shrinkWithCompletion:(id)arg1;
- (void)rotateBy:(float)arg1;
- (void)clearRotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

