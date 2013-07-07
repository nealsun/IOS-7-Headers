/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPAssetManager : NSObject
{
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
+ (id)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1;
+ (id)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1;
+ (id)convertCGImageToBuffer:(struct CGImage *)arg1;
- (double)posterTimeForAssetAtPath:(id)arg1;
- (id)absolutePathFromPath:(id)arg1;
- (id)regionsOfInterestForAssetAtPath:(id)arg1;
- (id)regionsOfInterestForAsset:(struct CGImage *)arg1;
- (unsigned int)mediaTypeForAssetAtPath:(id)arg1;
- (BOOL)isAssetAtPathASupportedAudio:(id)arg1;
- (BOOL)isAssetAtPathASupportedMovie:(id)arg1;
- (BOOL)isAssetAtPathASupportedImage:(id)arg1;
- (id)locationHierarchyForAssetAtPath:(id)arg1;
- (id)altitudeForAssetAtPath:(id)arg1;
- (id)longitudeForAssetAtPath:(id)arg1;
- (id)latitudeForAssetAtPath:(id)arg1;
- (id)keywordsForAssetAtPath:(id)arg1;
- (id)creationDateForAssetAtPath:(id)arg1;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (double)durationForAssetAtPath:(id)arg1;
- (void)gatherMetadataForAssetAtPath:(id)arg1;
- (void)setSavesToDisk:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)prepareInfoForAssetsAtPaths:(id)arg1;
- (void)removeRegionOfInterestAtIndex:(int)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)setForceOrderForRegionsOfInterest:(BOOL)arg1 forPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)moveRegionOfInterestWithPath:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 saveToCache:(BOOL)arg4;
- (void)updateRegionOfInterestAtIndex:(int)arg1 atPath:(id)arg2 to:(struct CGRect)arg3 saveToCache:(BOOL)arg4;
- (void)updateROIInfoAtIndex:(int)arg1 atPath:(id)arg2 to:(id)arg3 saveToCache:(BOOL)arg4;
- (void)setRegionOfInterest:(struct CGRect)arg1 atIndex:(int)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4;
- (void)setROIInfo:(id)arg1 atIndex:(int)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4;
- (void)addRegionOfInterest:(struct CGRect)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)addROIInfo:(id)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (struct CGRect)regionOfInterestAtIndex:(int)arg1 forAssetAtPath:(id)arg2;
- (id)roiInfoAtIndex:(int)arg1 forAssetAtPath:(id)arg2;
- (void)tryToSaveCache;
- (void)cacheAttributes:(id)arg1 forPath:(id)arg2;

@end

