/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLScreenCanvas.h>

#import "VKAnimationRunner.h"
#import "VKCameraControllerDelegate.h"
#import "VKCameraDelegate.h"
#import "VKWorldDelegate.h"

@class NSArray, NSMutableArray, VGLDisplayLink, VKCamera, VKDispatch, VKLayoutContext, VKMemoryObserver, VKScene, VKWorld;

__attribute__((visibility("hidden")))
@interface VKScreenCanvas : VGLScreenCanvas <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate>
{
    VKDispatch *_dispatch;
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    VKLayoutContext *_layoutContext;
    BOOL _needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    BOOL _userIsGesturing;
    BOOL _iconsShouldAlignToPixels;
    NSMutableArray *_cameraControllers;
    BOOL _debugPaintFrameRateGraph;
    float _debugFramesPerSecond;
    BOOL _rendersInBackground;
    Vec2Imp_1782d7e3 _deviceTilt;
    NSMutableArray *_animations[2];
    int _displayRate;
    int _requestedRate;
    VKMemoryObserver *_memoryObserver;
    VGLDisplayLink *_displayLink;
    BOOL _isInBackground;
    struct VKEdgeInsets _edgeInsets;
    struct VKEdgeInsets _fullyOccludedEdgeInsets;
}

+ (Class)contextClass;
@property(readonly, nonatomic) NSArray *cameraControllers; // @synthesize cameraControllers=_cameraControllers;
@property(nonatomic) Vec2Imp_1782d7e3 deviceTilt; // @synthesize deviceTilt=_deviceTilt;
@property(nonatomic) BOOL iconsShouldAlignToPixels; // @synthesize iconsShouldAlignToPixels=_iconsShouldAlignToPixels;
@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) float debugFramesPerSecond; // @synthesize debugFramesPerSecond=_debugFramesPerSecond;
@property(nonatomic) BOOL debugPaintFrameRateGraph; // @synthesize debugPaintFrameRateGraph=_debugPaintFrameRateGraph;
@property(readonly, nonatomic) VKWorld *world; // @synthesize world=_world;
- (id).cxx_construct;
@property(nonatomic) BOOL rendersInBackground;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(int)arg2;
- (void)removeCameraController:(id)arg1;
- (void)addCameraController:(id)arg1;
@property(nonatomic, getter=isGesturing) BOOL gesturing;
- (void)cameraDidChange:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)runAnimation:(id)arg1;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (void)setContentsScale:(float)arg1;
- (void)forceLayout;
- (void)layoutSublayers;
- (void)updateCameraForFrameResize;
- (void)didDrawView;
- (void)takeSnapshotIfNeeded;
- (void)_renderCore:(double)arg1;
- (void)drawWithTimestamp:(double)arg1;
- (void)animateWithTimestamp:(double)arg1;
@property(nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets; // @synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets;
@property(nonatomic) struct VKEdgeInsets edgeInsets;
- (void)onTimerFired:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
@property(nonatomic) int displayRate;
@property(nonatomic) BOOL debugEnableMultisampling; // @dynamic debugEnableMultisampling;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setHidden:(BOOL)arg1;
- (BOOL)updateDisplayLinkStatus;
- (void)_updateDisplayRate;
- (BOOL)wantsTimerTick;
- (BOOL)wantsRender;
- (BOOL)canRender;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)didReceiveMemoryWarning;
- (void)transferAnimationsTo:(id)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

