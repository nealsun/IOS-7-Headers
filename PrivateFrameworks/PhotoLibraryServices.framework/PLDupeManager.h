/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject
{
    NSMutableDictionary *_cloudAssetsToAnalyze;
    NSMutableArray *_assetsWithUpdatedVisibility;
    BOOL _doneWithCloudAssets;
    BOOL _isRebuilding;
    NSMutableSet *_normalInserts;
    NSMutableSet *_cloudInserts;
    PLPhotoLibrary *_photoLibrary;
    long _once;
}

+ (BOOL)_computeHashForAsset:(id)arg1;
+ (id)hashForAsset:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (id)placeholderHash;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 resetHashes:(BOOL)arg2;
+ (BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 resetHashes:(BOOL)arg2;
+ (id)sharedInstance;
- (void)launchDupeAnalysisIfNeeded;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(id)arg3;
- (void)_analyzeDupes;
- (void)_continueAnalysis;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (BOOL)_analyzeDupeForCloudAssetsAndHases:(id)arg1 forManagedObjectContext:(id)arg2;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (void)resetDupesAnalysis;
- (void)_analyzeDupesForRebuild;
- (void)_continueAnalysisForRebuild;
- (void)_performAnalysisTransaction:(id)arg1 completionHandler:(void)arg2;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;

@end

