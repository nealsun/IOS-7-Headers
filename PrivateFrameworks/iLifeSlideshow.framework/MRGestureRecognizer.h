/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCAction, MRAction, MRRenderer, MRTouchSet, NSArray, NSSet;

@interface MRGestureRecognizer : NSObject
{
    MRRenderer *_renderer;
    MRAction *_automaticStartAction;
    MRAction *_automaticUpdateAction;
    MRAction *_automaticEndAction;
    MRAction *_automaticCancelAction;
    MRAction *_startAction;
    MRAction *_updateAction;
    MRAction *_endAction;
    MRAction *_cancelAction;
    NSObject *_sender;
    NSObject *_target;
    NSArray *_matrixChain;
    int _state;
    struct CGSize _referenceSize;
    MRTouchSet *_touchSet;
    struct CGPoint _centroidStartLocation;
    struct CGPoint _centroidLocation;
    struct CGPoint _previousCentroidLocation;
    struct CGPoint _offsetFromCentroid;
    float _scale;
    float _previousScale;
    float _ratioFromScale;
    float _rotation;
    float _previousRotation;
    float _offsetFromRotation;
    double _startTime;
    double _hitTime;
    double _previousHitTime;
}

@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain) NSArray *matrixChain; // @synthesize matrixChain=_matrixChain;
@property(readonly) id sender; // @synthesize sender=_sender;
- (void)_addSpecificObjectToAction:(id)arg1;
- (struct CGPoint)_localPointFromTouchPoint:(struct CGPoint)arg1;
- (void)_sendAction:(id)arg1;
- (void)_sendCancelActions;
- (void)_sendEndActions;
- (void)_sendUpdateActions;
- (void)_sendStartActions;
- (id)description;
- (void)abort;
- (void)touchEnded:(id)arg1;
- (void)touchMoved:(id)arg1;
- (void)touchBegan:(id)arg1;
@property(readonly) NSSet *touches;
@property(retain) MCAction *cancelAction;
@property(retain) MCAction *endAction;
@property(retain) MCAction *updateAction;
@property(retain) MCAction *startAction;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 startAction:(id)arg2 andSender:(id)arg3;

@end

