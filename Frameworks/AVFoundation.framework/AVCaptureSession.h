/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject
{
    AVCaptureSessionInternal *_internal;
}

+ (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int *)arg4;
+ (id)avCaptureSessionPlist;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (id)publicSessionPresets;
+ (id)allSessionPresets;
+ (void)initialize;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_errorForFigRecorderNotification:(id)arg1;
- (id)_currentDeviceWithMediaType:(id)arg1;
- (void)_stopAndTearDownGraph;
- (BOOL)_buildAndRunGraph;
- (void)_rebuildLiveConnections;
- (BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(char *)arg3 frameRatesChanged:(char *)arg4;
- (void)_doDidStop:(id)arg1;
- (void)_doDidStart:(BOOL)arg1;
- (void)_doWillStart;
- (void)_doDidStartSources;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_resolvedCaptureOptions;
- (id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2;
- (BOOL)_sessionHasEnabledMovieFileOutput;
- (void)_rebuildInternalCaptureOptions;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (long)_createRecorderIfNeeded;
- (id)figRecorderOptions;
- (id)captureOptions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_determineMasterClock;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *masterClock;
- (void)_rebuildGraph;
- (long)_stopRecording;
- (long)_startRecording;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)_stopPreviewing;
- (BOOL)_startPreviewing;
- (BOOL)isPreviewing;
- (void)stopRunning;
- (void)startRunning;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(nonatomic) BOOL automaticallyConfiguresApplicationAudioSession;
@property(nonatomic) BOOL usesApplicationAudioSession;
- (void)_setInterrupted:(BOOL)arg1;
@property(readonly, nonatomic, getter=isInterrupted) BOOL interrupted;
- (id)_liveConnections;
- (void)_removeConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (BOOL)canAddConnection:(id)arg1;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayer;
- (void)addVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayerConnection:(id)arg1;
- (void)addVideoPreviewLayerConnection:(id)arg1;
- (id)videoPreviewLayer;
- (void)removeOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeInput:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (id)description;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id *)arg2;
- (id)inputWithClass:(Class)arg1;
- (id)outputWithClass:(Class)arg1;
@property(readonly, nonatomic) NSArray *inputs;
- (BOOL)isBeingConfigured;
- (void)_commitConfiguration;
- (void)_beginConfiguration;
- (void)commitConfiguration;
- (void)beginConfiguration;
@property(copy, nonatomic) NSString *sessionPreset;
- (BOOL)canSetSessionPreset:(id)arg1;
- (struct OpaqueFigRecorder *)recorder;
- (void)dealloc;
- (void)_teardownFigRecorder;
- (id)init;

@end

