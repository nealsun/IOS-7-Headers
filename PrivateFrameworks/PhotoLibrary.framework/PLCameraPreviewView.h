/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableDictionary, PLCameraFocusLockView, PLCameraFocusPointView, PLCameraFocusView, PLVideoPreviewView;

@interface PLCameraPreviewView : UIView
{
    UIView *_maskingContainerView;
    UIView *_previewContainer;
    PLVideoPreviewView *_videoPreviewView;
    UIView *_focusContainerView;
    PLCameraFocusPointView *_focusView;
    PLCameraFocusView *_autoFocusView;
    PLCameraFocusLockView *_lockFocusView;
    struct CGPoint _touchLocation;
    UIView *_facesContainerView;
    NSMutableDictionary *_faceIDsToViews;
    UIView *_dimmingView;
    float _dimmingStrength;
    unsigned int _canShowFocus:1;
    unsigned int _controlsAreVisible:1;
    BOOL _square;
}

@property(nonatomic, getter=isSquare) BOOL square; // @synthesize square=_square;
@property(nonatomic) float dimmingStrength; // @synthesize dimmingStrength=_dimmingStrength;
@property(readonly, nonatomic) PLVideoPreviewView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
- (void)fadeOutFaceTrackingViews;
- (void)showFaceTrackingViewsForFaces:(id)arg1;
- (void)setDimmingStrength:(float)arg1 duration:(double)arg2;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)setShouldShowFocus:(BOOL)arg1;
- (void)focusDidEnd;
- (void)removeAutofocusView;
- (void)showAutofocusView;
- (void)removeAllFocusViews;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)animateFocusScaleDown;
- (void)animateFocusLock;
- (void)showLockFocusAtPoint:(struct CGPoint)arg1;
- (void)showFocusAtPoint:(struct CGPoint)arg1;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

