/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAudioSessionMediaPlayerOnly, AVPixelBufferAttributeMediator, AVPlayerItem, AVPropertyStorage, AVWeakReference, NSArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface AVPlayerInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *figPlayer;
    struct OpaqueCMClock *figMasterClock;
    AVPropertyStorage *propertyStorage;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    NSMutableDictionary *pendingFigPlayerProperties;
    AVPlayerItem *currentItem;
    AVPlayerItem *lastItem;
    struct OpaqueFigPlaybackItem *figPlaybackItemToIdentifyNextCurrentItem;
    NSMutableSet *items;
    NSObject<OS_dispatch_queue> *layersQ;
    NSMutableSet *caLayers;
    NSString *externalPlaybackVideoGravity;
    int status;
    NSError *error;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *displaysUsedForPlayback;
    BOOL needsToCreateFigPlayer;
    BOOL logPerformanceData;
    NSDictionary *cachedFigMediaSelectionCriteriaProperty;
    BOOL reevaluateBackgroundPlayback;
    BOOL hostApplicationInForeground;
    BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
    BOOL iapdExtendedModeIsActive;
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    NSDictionary *vibrationPattern;
    struct OpaqueFigSimpleMutex *prerollIDMutex;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    id prerollCompletionHandler;
    NSObject<OS_dispatch_queue> *subtitleQueue;
    NSDictionary *currentSubtitlesPayload;
    BOOL autoSwitchStreamVariants;
}

@end

