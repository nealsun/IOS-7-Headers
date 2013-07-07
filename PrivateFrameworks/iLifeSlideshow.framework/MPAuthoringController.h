/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MPDocument, MPWeighter, NSLock, NSMutableDictionary, NSRecursiveLock;

@interface MPAuthoringController : NSObject
{
    BOOL _isAuthoring;
    MPDocument *_authoredDocument;
    unsigned int _seed;
    NSRecursiveLock *_beatLock;
    NSMutableDictionary *_cachedROIInformation;
    NSLock *_cachedROILock;
    MPWeighter *_weighter;
    MPWeighter *_transitionWeighter;
    MPWeighter *_shuffleWeighter;
    NSMutableDictionary *_stats;
    id _delegate;
    int _logLevel;
    double _logTiming;
    float _placesDistanceSeperation;
    BOOL _placesDebug;
    BOOL _cancelAuthoring;
    BOOL _skipApplyingSettings;
}

+ (void)releaseSharedController;
+ (id)sharedController;
+ (id)transitionAnimatedSetsBetween:(id)arg1 and:(id)arg2;
- (BOOL)canScaleToAudioInDocument:(id)arg1 withOptions:(id)arg2;
- (BOOL)canLayerGroupFitToAudio:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 requiredAudioDuration:(double *)arg4;
- (BOOL)canDocumentFitToAudio:(id)arg1 withOptions:(id)arg2 requiredAudioDuration:(double *)arg3;
- (void)prepareDocumentForPlayback:(id)arg1 withOptions:(id)arg2;
- (BOOL)prepareDocumentForExport:(id)arg1 withOptions:(id)arg2;
- (void)reconfigureColorSchemeForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)reconfigureColorSchemeInDocument:(id)arg1 withOptions:(id)arg2;
- (void)reconfigureTitleEffectForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)reconfigureTitleEffectInDocument:(id)arg1 withOptions:(id)arg2;
- (void)reconfigureImagesInDocument:(id)arg1 withOptions:(id)arg2;
- (void)scaleDurationsForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)scaleDurationsInDocument:(id)arg1 withOptions:(id)arg2;
- (void)beatAlignLayers:(id)arg1 toAudioPlaylist:(id)arg2 forDocument:(id)arg3 withOptions:(id)arg4;
- (id)transitionFromOptions:(id)arg1;
- (id)effectContainersWithPaths:(id)arg1 forDocument:(id)arg2 withOptions:(id)arg3;
- (void)upgradeLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)upgradeDocument:(id)arg1 withOptions:(id)arg2;
- (unsigned int)authorLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (unsigned int)authorDocument:(id)arg1 withOptions:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)configureBreakInformationToEffect:(id)arg1 inDocument:(id)arg2 startingIndex:(int)arg3 count:(int)arg4 removeOldIndex:(int)arg5;
- (void)performInitialFaceDetectionInGroup:(id)arg1 withOptions:(id)arg2;
- (id)transitionFromOptions:(id)arg1 firstEffectContainer:(id)arg2 nextEffectContainer:(id)arg3;
- (id)pickRandomPathsInArray:(id)arg1 excludingPaths:(id)arg2 count:(int)arg3;
- (id)createAudioPlayListFromAudioPaths:(id)arg1 andOptions:(id)arg2;
- (id)frameFromOptions:(id)arg1;
- (id)filtersForSlideFromOptions:(id)arg1;
- (id)filtersForEffectFromOptions:(id)arg1;
- (id)filtersForLayerFromOptions:(id)arg1;
- (id)sortImagePaths:(id)arg1 toAspectRatiosInEffectPresetID:(id)arg2 withOptions:(id)arg3;
- (id)exportTransitionFromOptions:(id)arg1;
- (id)loopTransitionFromOptions:(id)arg1;
- (id)createEffectToTransitionMapWithOptions:(id)arg1;
- (id)effectContainersWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3;
- (id)dynamicLayerWithImages:(id)arg1 withOptions:(id)arg2;
- (id)slidesWithImages:(id)arg1 andOptions:(id)arg2;
- (id)createLayerWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3;
- (void)configureTransitionsInDocument:(id)arg1 withOptions:(id)arg2;
- (void)configureFiltersInDocument:(id)arg1 withOptions:(id)arg2;
- (void)beatAlignEffectContainers:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3;
- (void)scaleLayerToMatchAudio:(id)arg1 withBeats:(id)arg2 withOptions:(id)arg3;
- (void)scaleLayerToMatchAudio:(id)arg1 withOptions:(id)arg2;
- (void)beatAlignLayer:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3;
- (void)checkForOffsetsForLayers:(id)arg1 withOptions:(id)arg2;
- (void)fillDurationsForLayers:(id)arg1 withOptions:(id)arg2;
- (void)matchDurationsForLayers:(id)arg1 withOptions:(id)arg2;
- (void)scaleDurationsInEffectContainers:(id)arg1 withOptions:(id)arg2;
- (void)scaleDurationsInLayer:(id)arg1 withOptions:(id)arg2;
- (BOOL)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)arg1 presetID:(id)arg2 atIndex:(int)arg3 inStyleID:(id)arg4;
- (id)findEffectIDInWeighter:(id)arg1 images:(id)arg2 startingIndex:(int)arg3 count:(int)arg4 triesToFind:(int *)arg5 constraints:(id)arg6 previousTags:(id)arg7;
- (void)populateWeighter:(id)arg1 withTransitions:(id)arg2 andOptions:(id)arg3;
- (void)populateWeighter:(id)arg1 withEffects:(id)arg2 andOptions:(id)arg3;
- (id)findEffectIDInPresetArray:(id)arg1 forImages:(id)arg2 withOptions:(id)arg3;
- (int)bestCountFromClusterForEffectWithImages:(id)arg1 atStartIndex:(int)arg2 withWeighter:(id)arg3 usedIndex:(int *)arg4;
- (BOOL)imagesHaveMovie:(id)arg1 start:(int)arg2 count:(int)arg3;
- (id)effectsForImages:(id)arg1 withOptions:(id)arg2;
- (void)cacheROIInformationForImages:(id)arg1 withOptions:(id)arg2;
- (void)authorPlacesWithImages:(id)arg1 forLayerGroup:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4;
- (id)orderImages:(id)arg1 withOptions:(id)arg2;
- (id)shuffleImagesByRating:(id)arg1 withOptions:(id)arg2;
- (id)_collectVersionInformationFromStyle:(id)arg1;
- (void)setAuthoredDocument:(id)arg1;
- (id)authoredDocument;
- (BOOL)isAuthoring;
- (void)setTitleTextToColor:(struct CGColor *)arg1 forLayerGroup:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4;
- (void)setTitleTextToColor:(struct CGColor *)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)configureOutroInDocument:(id)arg1 withOptions:(id)arg2;
- (void)configureIntroInDocument:(id)arg1 withOptions:(id)arg2;
- (void)clearROICache;
- (void)cleanup:(BOOL)arg1;
- (void)cleanup;
- (void)createAnimatedSetsInLayer2:(id)arg1 withOptions:(id)arg2;
- (void)createAnimatedSetsInLayer:(id)arg1 withOptions:(id)arg2;
- (void)createBeatsThreaded:(id)arg1;
- (int)indexOfBeatWithTimestamp:(double)arg1 inBeats:(id)arg2 inRange:(struct _NSRange)arg3;
- (double)findClosestBeatForTime:(double)arg1 inBeats:(id)arg2 atIndex:(int *)arg3;
- (id)beatsForAudioPlaylist:(id)arg1 withOptions:(id)arg2;
- (void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)arg1 inClusters:(id)arg2;
- (void)cleanupClusters;
- (void)setupClustersWithPaths:(id)arg1 withOptions:(id)arg2;
- (void)finishLogging;
- (void)startLogging;
- (void)combineSlides:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)removeStyledCaptionFromSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)addStyledCaptionToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)removeSlidesAtIndicies:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (void)insertVideoPaths:(id)arg1 atIndex:(int)arg2 inDocument:(id)arg3 withOptions:(id)arg4;
- (void)moveSlidesFromIndicies:(id)arg1 toIndex:(int)arg2 inDocument:(id)arg3 withOptions:(id)arg4;
- (int)_countOfEmptyContainersInIntroOfLayer:(id)arg1 withOptions:(id)arg2;
- (int)_numberOfSlidesForOutroInLayer:(id)arg1 withOptions:(id)arg2;
- (void)_checkForEmptyLayersInDocument:(id)arg1;
- (void)_readdTitleEffect:(id)arg1 toDocument:(id)arg2 withOptions:(id)arg3;
- (id)_grabAndRemoveTitleEffectFromDocument:(id)arg1 withOptions:(id)arg2;
- (id)_addVideoPaths:(id)arg1 toEndOfLayer:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4;
- (void)_reorderImagesInDocument:(id)arg1 withOptions:(id)arg2;
- (void)combineEffectsNearSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3;
- (id)_placeEffectContainersForPhotos:(id)arg1 options:(id)arg2;
- (void)scaleDurationsInPlacesForDocument:(id)arg1 withOptions:(id)arg2;
- (int)tileSetForMap1:(int)arg1 map2:(int)arg2 needsWater:(BOOL)arg3;
- (int)mapTypeForPoint0:(struct CGPoint)arg1 point1:(struct CGPoint)arg2 point2:(struct CGPoint)arg3 map:(id)arg4 flight:(id)arg5;
- (BOOL)rect:(struct CGRect)arg1 intersectsRects:(id)arg2 index:(int *)arg3;
- (id)createLayersForPlacesForImages:(id)arg1 forDocument:(id)arg2 withOptions:(id)arg3;
- (void)_renameMapsAndPins:(id)arg1 withOptions:(id)arg2;
- (id)_mapsSortedByState:(id)arg1;
- (id)_mapsSortedByCity:(id)arg1 hasCities:(char *)arg2;
- (BOOL)_tryAndCollapseMaps:(id)arg1;
- (void)_gatherLocationInfoForMaps:(id)arg1;
- (id)_createMapsWithImages:(id)arg1 withOptions:(id)arg2;
- (void)recreateMapsInDocument:(id)arg1;
- (void)removeAllMapsInDocument:(id)arg1;

@end

