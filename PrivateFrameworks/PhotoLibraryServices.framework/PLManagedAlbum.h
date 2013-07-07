/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/_PLManagedAlbum.h>

#import "PLUserEditableAlbumProtocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol>
{
    BOOL _resolvingConflicts;
    BOOL stackedImageNeedsUpdate;
    BOOL albumShouldBeAutomaticallyDeleted;
}

+ (void)clearAssetOrderByAbumUUIDs;
+ (id)assetOrderByAbumUUIDs;
+ (id)pathToAssetAlbumOrderStructure;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (BOOL)deviceSupportsStackedImages;
@property(nonatomic) BOOL albumShouldBeAutomaticallyDeleted; // @synthesize albumShouldBeAutomaticallyDeleted;
@property(nonatomic) BOOL stackedImageNeedsUpdate; // @synthesize stackedImageNeedsUpdate;
@property(nonatomic) BOOL resolvingConflicts; // @synthesize resolvingConflicts=_resolvingConflicts;
- (void)refreshAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (id)_assetOrderByAssetUUID;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (void)awakeFromSnapshotEvents:(unsigned int)arg1;
- (void)_recalculateCachedCounts;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
- (unsigned int)_cachedCountForMigration;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
- (unsigned int)_albumStandInCount;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)_keysToBeObserved;
- (void)_updateKeyAssetIfNeeded;
- (id)_expectedKeyAsset;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (void)getInternalUserEditableAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (unsigned int)countOfInternalUserEditableAssets;
@property(readonly, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)didSave;
- (void)_handleStackedImageNeedsUpdate:(BOOL)arg1;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
- (BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;

// Remaining properties
@property(readonly, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL canShowComments;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSURL *groupURL;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isWallpaperAlbum;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) int pendingItemsType;
@property(readonly, nonatomic) UIImage *posterImage;
@property(readonly, nonatomic) id sectioningComparator;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) id sortingComparator;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;

@end

