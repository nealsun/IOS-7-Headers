/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CMMotionManager, NSArray, NSMapTable, NSMutableSet, NSOperationQueue, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEngineLogger;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject
{
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_analyzersToHistories;
    NSMapTable *_suspendedViewsToEffectSets;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
    CDStruct_04e8b4cd _pendingDeviceMotionStruct;
    double _pendingDeviceMotionTimestamp;
    int _pendingDeviceMotionLock;
    BOOL _generatingUpdates;
    NSMutableSet *_suspendReasons;
    CDStruct_bf7dff04 _lastDeviceQuaternion;
    double _lastUpdateTimestamp;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    _UIMotionEffectEngineLogger *_motionLogger;
    int _targetInterfaceOrientation;
}

+ (BOOL)_motionEffectsAreSupported;
@property(nonatomic, setter=_setTargetInterfaceOrientation:) int _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
- (id)debugDescription;
- (void)_unapplyAllEffects;
- (BOOL)_hasMotionEffectsForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)_reconsiderMotionEffectsEnabledSetting;
@property(readonly, nonatomic) NSArray *suspensionReasons;
- (BOOL)_motionEffectsAreSuspendedForView:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (BOOL)_isSuspended;
- (void)_clearHistoricMotionData;
- (void)_stopGeneratingUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (BOOL)_shouldGenerateUpdates;
- (void)endSuspendingForReason:(id)arg1;
- (void)beginSuspendingForReason:(id)arg1;
- (void)_scheduleUpdateWithDeviceMotion:(const CDStruct_04e8b4cd *)arg1 timestamp:(double)arg2;
- (void)resetMotionAnalysis;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (BOOL)_shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:(struct UIOffset)arg1 newViewerOffset:(struct UIOffset)arg2 wasSuspendingApplicationForHysteresis:(BOOL)arg3;
- (void)_handleLatestDeviceMotion;
- (void)_toggleSlowUpdates;
- (void)dealloc;
- (id)init;

@end

